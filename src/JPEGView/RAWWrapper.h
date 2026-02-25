#pragma once

#include "JPEGImage.h"

class LibRaw;

class RawReader
{
public:
	static CJPEGImage* ReadImage(LPCTSTR strFileName, bool& bOutOfMemory, bool bGetThumb);
	static CJPEGImage* ReadImage(const void* buffer, size_t size, bool& bOutOfMemory, bool bGetThumb, EImageFormat eContainerFormat = IF_Unknown, bool bIsAnimation = false, int nFrameIndex = 0, int nNumberOfFrames = 1, int nFrameTimeMs = 0);
	static CJPEGImage* ReadImage(LibRaw &RawProcessor, bool& bOutOfMemory, bool bGetThumb, EImageFormat eContainerFormat = IF_Unknown, bool bIsAnimation = false, int nFrameIndex = 0, int nNumberOfFrames = 1, int nFrameTimeMs = 0);
};
