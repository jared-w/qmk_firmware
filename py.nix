with import <nixpkgs> { };
with builtins;
mach-nix.mkPython {
  requirements = ''
    appdirs
    argcomplete
    colorama
    hjson
    milc
    pygments

    nose2
    flake8
    pep8-naming
    yapf
  '';
}
