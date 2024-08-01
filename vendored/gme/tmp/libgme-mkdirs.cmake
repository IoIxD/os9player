# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/gavin/Projects/os9ffmpegplayer/vendored/libgme"
  "/home/gavin/Projects/os9ffmpegplayer/vendored/libgme/src/libgme-build"
  "/home/gavin/Projects/os9ffmpegplayer/vendored/libgme"
  "/home/gavin/Projects/os9ffmpegplayer/vendored/libgme/tmp"
  "/home/gavin/Projects/os9ffmpegplayer/vendored/libgme/src/libgme-stamp"
  "/home/gavin/Projects/os9ffmpegplayer/vendored/libgme/src"
  "/home/gavin/Projects/os9ffmpegplayer/vendored/libgme/src/libgme-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/gavin/Projects/os9ffmpegplayer/vendored/libgme/src/libgme-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/gavin/Projects/os9ffmpegplayer/vendored/libgme/src/libgme-stamp${cfgdir}") # cfgdir has leading slash
endif()