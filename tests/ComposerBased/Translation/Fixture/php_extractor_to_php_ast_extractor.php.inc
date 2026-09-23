<?php

final class PhpExtractorUser
{
    public function extract(\Symfony\Component\Translation\Extractor\PhpExtractor $extractor): void
    {
    }
}

?>
-----
<?php

final class PhpExtractorUser
{
    public function extract(\Symfony\Component\Translation\Extractor\PhpAstExtractor $extractor): void
    {
    }
}

?>
