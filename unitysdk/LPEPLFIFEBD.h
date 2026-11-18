#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LPEPLFIFEBD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7CD5E0)
#define LPEPLFIFEBD__CTOR_OFFSET UNITYSDK_OFFSET(0x7CD5B0)

inline static constexpr unsigned int LPEPLFIFEBD_TypeDefinitionIndex = 50096;

struct alignas(4) LPEPLFIFEBD
{
	::System::Int32 OEAOKNLILLG; // 0x10
	::System::Boolean OLAIGNMKNCG; // 0x14
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 EOCOMCOHEML; // 0x18
	::System::Single NNINKEOEBNP; // 0x24

	::System::Void _ctor(::System::Int32 BNJIAGILAGG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPEPLFIFEBD__CTOR_OFFSET))(this, BNJIAGILAGG);
	}

	::System::Void _ctor_1(::System::Int32 BNJIAGILAGG, ::UnityEngine::Vector3 JJBEDMACLCN, ::System::Single GJACKGOIPLP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LPEPLFIFEBD__CTOR_1_OFFSET))(this, BNJIAGILAGG, JJBEDMACLCN, GJACKGOIPLP);
	}
};
