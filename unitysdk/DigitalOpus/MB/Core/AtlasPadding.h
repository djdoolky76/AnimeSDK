#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DIGITALOPUS_MB_CORE_ATLASPADDING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x997F40)
#define DIGITALOPUS_MB_CORE_ATLASPADDING__CTOR_OFFSET UNITYSDK_OFFSET(0x47D4F0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int AtlasPadding_TypeDefinitionIndex = 96293;

	struct alignas(4) AtlasPadding
	{
		::System::Int32 topBottom; // 0x10
		::System::Int32 leftRight; // 0x14

		::System::Void _ctor(::System::Int32 p)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_ATLASPADDING__CTOR_OFFSET))(this, p);
		}

		::System::Void _ctor_1(::System::Int32 px, ::System::Int32 py)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_ATLASPADDING__CTOR_1_OFFSET))(this, px, py);
		}
	};
}
