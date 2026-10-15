#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ImageDataFormat.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ImagePacking.h"

namespace HoudiniEngineUnity
{
	struct alignas(4) HAPI_ImageInfo
	{
		::System::Int32 imageFileFormatNameSH; // 0x10
		::System::Int32 xRes; // 0x14
		::System::Int32 yRes; // 0x18
		::HoudiniEngineUnity::HAPI_ImageDataFormat dataFormat; // 0x1C
		::System::Boolean interleaved; // 0x20
		::System::Byte _padding0[0x3];
		::HoudiniEngineUnity::HAPI_ImagePacking packing; // 0x24
		::System::Double gamma; // 0x28
	};
}
