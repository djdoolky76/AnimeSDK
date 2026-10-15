#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/CullMode.h"
#include "unitysdk/UnityEngine/Rendering/RasterState.h"

#define SERIALIZEDRASTERSTATE_ICGKFDEILKA_OFFSET UNITYSDK_OFFSET(0xF9850)
#define SERIALIZEDRASTERSTATE_OLCHHDKKPLI_OFFSET UNITYSDK_OFFSET(0xF98E0)

	struct alignas(4) SerializedRasterState
	{
		::UnityEngine::Rendering::CullMode cullingMode; // 0x10
		::System::Boolean depthClip; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 offsetUnits; // 0x18
		::System::Single offsetFactor; // 0x1C
		::System::Boolean conservative; // 0x20
		::System::Void ICGKFDEILKA(::UnityEngine::Rendering::RasterState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RasterState))((::PBYTE)hIl2Cpp + SERIALIZEDRASTERSTATE_ICGKFDEILKA_OFFSET))(this, a1);
		}

		::System::Void OLCHHDKKPLI(::UnityEngine::Rendering::RasterState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RasterState))((::PBYTE)hIl2Cpp + SERIALIZEDRASTERSTATE_OLCHHDKKPLI_OFFSET))(this, a1);
		}

	};
