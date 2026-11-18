#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNHPNNENFLI;
namespace UnityEngine { class GameObject; }

#define PNHPNNENFLI_MDEAHNIACIE_NKMIDGOHGMH_OFFSET UNITYSDK_OFFSET(0x1C2C5A60)
#define PNHPNNENFLI_MDEAHNIACIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C5A50)

inline static constexpr unsigned int PNHPNNENFLI_MDEAHNIACIE_TypeDefinitionIndex = 67267;

class PNHPNNENFLI_MDEAHNIACIE : public ::System::Object
{
public:
	::PNHPNNENFLI* KLHPEBKNIFB; // 0x10
	::UnityEngine::GameObject* JEIDPPCEHLD; // 0x18
	::System::Int32 GAFEIIKPNPJ; // 0x20
	::System::Int32 IFGMFALNKOH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHPNNENFLI_MDEAHNIACIE__CTOR_OFFSET))(this);
	}

	::System::Void NKMIDGOHGMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHPNNENFLI_MDEAHNIACIE_NKMIDGOHGMH_OFFSET))(this);
	}
};
