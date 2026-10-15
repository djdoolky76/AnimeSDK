#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXResource_AliasInfo.h"
#include "unitysdk/UnityEngine/AstraFXResource_BufferInfo.h"
#include "unitysdk/UnityEngine/AstraFXResource_TextureInfo.h"
#include "unitysdk/UnityEngine/AstraFXResource_Type.h"
namespace System { class String; }

namespace UnityEngine
{
	struct alignas(8) AstraFXResource
	{
		::UnityEngine::AstraFXResource_Type type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* name; // 0x18
		::System::Boolean doubleBuffer; // 0x20
		::System::Byte _padding1[0x3];
		::UnityEngine::AstraFXResource_BufferInfo buffer; // 0x24
		::UnityEngine::AstraFXResource_TextureInfo texture; // 0x2C
		::System::Byte _padding2[0x4];
		::UnityEngine::AstraFXResource_AliasInfo aliasInfo; // 0x48
	};
}
