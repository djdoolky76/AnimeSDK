#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_FACEINFOCACHE_SCALETOSIZE_OFFSET UNITYSDK_OFFSET(0x7E18C0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int FontEngineUtils_FaceInfoCache_TypeDefinitionIndex = 89450;

	struct alignas(8) FontEngineUtils_FaceInfoCache
	{
		::System::Boolean loaded; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* loadError; // 0x18
		::System::Int32 samplingSize; // 0x20
		::System::Single ascentLine; // 0x24
		::System::Single descentLine; // 0x28
		::System::Single underlineOffset; // 0x2C
		::System::Single underlineThickness; // 0x30

		::System::Single ScaleToSize(::System::Single cachedValue, ::System::Int32 targetSize)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_FACEINFOCACHE_SCALETOSIZE_OFFSET))(this, cachedValue, targetSize);
		}
	};
}
