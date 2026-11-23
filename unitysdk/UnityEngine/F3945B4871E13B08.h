#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_F3945B4871E13B08__CTOR_OFFSET UNITYSDK_OFFSET(0x2748A90)

namespace UnityEngine
{
	inline static constexpr unsigned int F3945B4871E13B08_TypeDefinitionIndex = 17579;

	struct alignas(4) F3945B4871E13B08
	{
		::System::Single BEF1B04019927DCC; // 0x10
		::System::Single E08B03F04EFC6266; // 0x14

		::System::Void _ctor(::System::Single B293560EBB811EA6, ::System::Single FF0A37159A523E06)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_F3945B4871E13B08__CTOR_OFFSET))(this, B293560EBB811EA6, FF0A37159A523E06);
		}
	};
}
