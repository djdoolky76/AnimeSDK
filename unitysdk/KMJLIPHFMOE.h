#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

namespace MoleMole::Battle { class Entity; }

#define KMJLIPHFMOE_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x186418C0)
#define KMJLIPHFMOE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x186419C0)
#define KMJLIPHFMOE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18641830)
#define KMJLIPHFMOE_GGDJCAEMJIG_OFFSET UNITYSDK_OFFSET(0x18641770)
#define KMJLIPHFMOE_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x18641920)
#define KMJLIPHFMOE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18641730)
#define KMJLIPHFMOE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186417B0)
#define KMJLIPHFMOE__CTOR_OFFSET UNITYSDK_OFFSET(0x18641820)

inline static constexpr unsigned int KMJLIPHFMOE_TypeDefinitionIndex = 41551;

class KMJLIPHFMOE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x10D; // 0x0
	::MoleMole::Battle::Entity* GKPDIKKBNFL; // 0x20
	::MoleMole::Config::DamageElementType ABKKHCJGKKN; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMJLIPHFMOE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJLIPHFMOE__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJLIPHFMOE_PHOADBJGFBE_OFFSET))(this);
	}

	::MoleMole::Config::DamageElementType GGDJCAEMJIG()
	{
		return ((::MoleMole::Config::DamageElementType(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJLIPHFMOE_GGDJCAEMJIG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJLIPHFMOE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::DamageElementType LBPGLHIPIOB, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KMJLIPHFMOE_CNHBDOMKKDE_OFFSET))(this, LBPGLHIPIOB, JKELDNKGNDI);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJLIPHFMOE_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJLIPHFMOE_FIGPAOKNJLN_OFFSET))(this);
	}
};
