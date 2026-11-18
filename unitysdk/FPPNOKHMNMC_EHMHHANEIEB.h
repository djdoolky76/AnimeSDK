#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPPNOKHMNMC;
namespace MoleMole::Battle { class Entity; }

#define FPPNOKHMNMC_EHMHHANEIEB_ABENONEFPLF_OFFSET UNITYSDK_OFFSET(0x11D94520)
#define FPPNOKHMNMC_EHMHHANEIEB_JGLGKFBJMJH_OFFSET UNITYSDK_OFFSET(0x11D94580)
#define FPPNOKHMNMC_EHMHHANEIEB__CTOR_OFFSET UNITYSDK_OFFSET(0x11D94510)

inline static constexpr unsigned int FPPNOKHMNMC_EHMHHANEIEB_TypeDefinitionIndex = 81891;

class FPPNOKHMNMC_EHMHHANEIEB : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* DJHFOGHIFEJ; // 0x10
	::FPPNOKHMNMC* KLHPEBKNIFB; // 0x18
	::MoleMole::Battle::Entity* CGELPKBKHOJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNOKHMNMC_EHMHHANEIEB__CTOR_OFFSET))(this);
	}

	::System::Boolean ABENONEFPLF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNOKHMNMC_EHMHHANEIEB_ABENONEFPLF_OFFSET))(this);
	}

	::System::Void JGLGKFBJMJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNOKHMNMC_EHMHHANEIEB_JGLGKFBJMJH_OFFSET))(this);
	}
};
