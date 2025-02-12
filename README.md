# JPEGViewLinear

This is a heavily customized version of the original JPEGView by David Kleiner.
It also incorporates some of the fixes from the more recent fork by Kevin M at https://github.com/sylikc/jpegview.

## Differences to the original version

* Up- and downsamples images in linear space. This is crucial for lineart, where lines and edges otherwise come out too dark and screentones show moiree.
* The available downsampling filters have been modified to offer the well known 'Hermite', 'Mitchell', 'Catrom' and 'Lanczos2' and give reference output identical to ImageMagick.
* Special handling for comic/manga viewing. Files hat have '\Comics\' or '\Manga\' in their filepath will be zoomed/scrolled with page reading purposes in mind.
* Minimalist inferface. Uses mouse/keyboard for navigation. Press 'F1' to show key bindings.
* Any image editing functionality has been removed. JPEGViewLinear is a pure viewer, focusing on speed and maximum image quality.

## Why?

While many of the big image editing tools like Photoshop and GIMP have been using linear light scaling for years, there currently seems to exist no plain image viewer giving correct output.
More information: http://www.ericbrasseur.org/gamma.html

## Formats Supported

JPEG, PNG, WEBP, GIF, BMP, TIFF.

## System Requirements

* 64-bit Windows OS
* CPU with SSE2

## Changelog

* 1.03 Improved mouse wheel panning button combinations. Added "\comics\" beside "\manga\" to mark paths to contain manga/comics files, using optimized display/navigation for that type of media.

* 1.02 Pressing the 'F1' key will now display the available keyboard shortcuts.
The application now uses the default icon when no images are loaded.
The application now reacts to drag'n'drop.
The application now shows a helpful message when launched without specifying any files/folders to open.

* 1.02 Pressing the 'F1' key will now display the available keyboard shortcuts.
The application now uses the default icon when no images are loaded.
The application now reacts to drag'n'drop.
The application now shows a helpful message when launched without specifying any files/folders to open.

* 1.01 Pressing the 'I' key will now display various info on current image and processing parameters.
