# JPEGViewL (JPEGViewLinear)

## Core differences to the original version

* Up- and downsamples images in linear space. This is crucial for lineart, where lines and edges otherwise come out too dark and screentones show moiree. While many of the big image editing tools like Photoshop and GIMP have been using linear light scaling for years, there currently seems to exist no plain image viewer giving correct output.
More information: http://www.ericbrasseur.org/gamma.html
* The available downsampling filters have been modified to offer the well known 'Hermite', 'Mitchell', 'Catrom' and 'Lanczos2' and give reference output identical to ImageMagick.
More information on how resampling filters work: http://legacy.imagemagick.org/Usage/filter/

## System Requirements

* 64-bit Windows OS
* CPU with SSE2. This is the only instruction set fully working with linear light math at this time. 
