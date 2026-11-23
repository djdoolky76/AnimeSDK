#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define EBA93DE59D1209B5__CTOR_OFFSET UNITYSDK_OFFSET(0x2796190)

inline static constexpr unsigned int EBA93DE59D1209B5_TypeDefinitionIndex = 16542;

struct alignas(4) EBA93DE59D1209B5
{
	::System::Int32 AA292D26F1CE96C4; // 0x10
	::System::Boolean B7A6470732D0E44E; // 0x14

	::System::Void _ctor(::System::Int32 F67400E358A2C889, ::System::Boolean F94D36CA1203E9D3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EBA93DE59D1209B5__CTOR_OFFSET))(this, F67400E358A2C889, F94D36CA1203E9D3);
	}
};
