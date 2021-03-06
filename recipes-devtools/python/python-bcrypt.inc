SUMMARY = "Good password hashing for your software and your servers"
HOMEPAGE = "https://github.com/pyca/bcrypt/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=8f7bb094c7232b058c7e9f2e431f389c"

PYPI_PACKAGE = "bcrypt"

inherit pypi

SRC_URI[md5sum] = "4d8ab82e5e0c86b15f4ba5aff2bec6b5"
SRC_URI[sha256sum] = "44636759d222baa62806bbceb20e96f75a015a6381690d1bc2eda91c01ec02ea"

DEPENDS += "${PYTHON_PN}-cffi-native"
