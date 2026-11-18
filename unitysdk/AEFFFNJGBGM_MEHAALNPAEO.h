#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OHCPNBDKOCF;
namespace MoleMole::Battle { class Entity; }

#define AEFFFNJGBGM_MEHAALNPAEO_OFLAMLHKEDF_OFFSET UNITYSDK_OFFSET(0x1646AAB0)
#define AEFFFNJGBGM_MEHAALNPAEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1646AAA0)

inline static constexpr unsigned int AEFFFNJGBGM_MEHAALNPAEO_TypeDefinitionIndex = 61144;

class AEFFFNJGBGM_MEHAALNPAEO : public ::System::Object
{
public:
	::OHCPNBDKOCF* DFMKILICPFB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFFNJGBGM_MEHAALNPAEO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFLAMLHKEDF(::MoleMole::Battle::Entity* KLOOKFMCDMG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AEFFFNJGBGM_MEHAALNPAEO_OFLAMLHKEDF_OFFSET))(this, KLOOKFMCDMG);
	}
};
