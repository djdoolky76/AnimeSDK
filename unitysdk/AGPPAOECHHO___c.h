#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::InputSystem { class Sensor; }

#define AGPPAOECHHO___C_DIFANCKABIK_OFFSET UNITYSDK_OFFSET(0x14212330)
#define AGPPAOECHHO___C_EBIPAKCFHBL_OFFSET UNITYSDK_OFFSET(0x142122F0)
#define AGPPAOECHHO___C_EDCEIPKOKNM_OFFSET UNITYSDK_OFFSET(0x14212320)
#define AGPPAOECHHO___C_HELJKNCPDDE_OFFSET UNITYSDK_OFFSET(0x14212310)
#define AGPPAOECHHO___C_HFIDHECDLGC_OFFSET UNITYSDK_OFFSET(0x14212300)
#define AGPPAOECHHO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142122A0)
#define AGPPAOECHHO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142122E0)

inline static constexpr unsigned int AGPPAOECHHO___c_TypeDefinitionIndex = 81962;

class AGPPAOECHHO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AGPPAOECHHO___c_TypeDefinitionIndex)->GetStaticField(0x47B30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGPPAOECHHO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::InputSystem::Sensor* EBIPAKCFHBL()
	{
		return ((::UnityEngine::InputSystem::Sensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO___C_EBIPAKCFHBL_OFFSET))(this);
	}

	::UnityEngine::InputSystem::Sensor* HFIDHECDLGC()
	{
		return ((::UnityEngine::InputSystem::Sensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO___C_HFIDHECDLGC_OFFSET))(this);
	}

	::UnityEngine::InputSystem::Sensor* HELJKNCPDDE()
	{
		return ((::UnityEngine::InputSystem::Sensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO___C_HELJKNCPDDE_OFFSET))(this);
	}

	::UnityEngine::InputSystem::Sensor* EDCEIPKOKNM()
	{
		return ((::UnityEngine::InputSystem::Sensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO___C_EDCEIPKOKNM_OFFSET))(this);
	}

	::UnityEngine::InputSystem::Sensor* DIFANCKABIK()
	{
		return ((::UnityEngine::InputSystem::Sensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO___C_DIFANCKABIK_OFFSET))(this);
	}
};
