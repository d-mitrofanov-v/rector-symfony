<?php

namespace Rector\Symfony\Tests\Symfony61\Rector\Class_\CommandConfigureToAttributeRector\Fixture;

use Symfony\Component\Console\Attribute\AsCommand;
use Symfony\Component\Console\Command\Command;
use Symfony\Component\Console\Input\InputArgument;

#[AsCommand(name: 'app:some', description: 'Some description')]
final class SkipExistingAttributeWithOnlyOptions extends Command
{
    protected function configure(): void
    {
        $this->addArgument('zone', InputArgument::OPTIONAL, 'Zone');
        $this->addOption('only-local', 'l', description: 'Only local');
    }
}
