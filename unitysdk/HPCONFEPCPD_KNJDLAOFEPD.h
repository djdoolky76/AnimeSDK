#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HPCONFEPCPD_MMENOJLJAAJ;
namespace MoleMole::Battle { class Entity; }

#define HPCONFEPCPD_KNJDLAOFEPD_EJIIEKOMCLH_OFFSET UNITYSDK_OFFSET(0x15E8F4A0)
#define HPCONFEPCPD_KNJDLAOFEPD__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8E420)

inline static constexpr unsigned int HPCONFEPCPD_KNJDLAOFEPD_TypeDefinitionIndex = 90929;

class HPCONFEPCPD_KNJDLAOFEPD : public ::System::Object
{
public:
	::HPCONFEPCPD_MMENOJLJAAJ* FGBNBFHOKAA; // 0x10
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_KNJDLAOFEPD__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 EJIIEKOMCLH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_KNJDLAOFEPD_EJIIEKOMCLH_OFFSET))(this);
	}
};
