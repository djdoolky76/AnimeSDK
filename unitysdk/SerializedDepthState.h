#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/DepthState.h"

#define SERIALIZEDDEPTHSTATE_ICGKFDEILKA_OFFSET UNITYSDK_OFFSET(0xF9730)
#define SERIALIZEDDEPTHSTATE_OLCHHDKKPLI_OFFSET UNITYSDK_OFFSET(0xF9790)

inline static constexpr unsigned int SerializedDepthState_TypeDefinitionIndex = 47417;

	struct alignas(4) SerializedDepthState
	{
		::System::Boolean writeEnabled; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::CompareFunction compareFunction; // 0x14
		::System::Void ICGKFDEILKA(::UnityEngine::Rendering::DepthState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DepthState))((::PBYTE)hIl2Cpp + SERIALIZEDDEPTHSTATE_ICGKFDEILKA_OFFSET))(this, a1);
		}

		::System::Void OLCHHDKKPLI(::UnityEngine::Rendering::DepthState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DepthState))((::PBYTE)hIl2Cpp + SERIALIZEDDEPTHSTATE_OLCHHDKKPLI_OFFSET))(this, a1);
		}

	};
