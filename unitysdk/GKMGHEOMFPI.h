#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

namespace MoleMole::Battle { class Entity; }

#define GKMGHEOMFPI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x179F5780)
#define GKMGHEOMFPI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x179F56F0)
#define GKMGHEOMFPI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x179F55C0)
#define GKMGHEOMFPI_GGDJCAEMJIG_OFFSET UNITYSDK_OFFSET(0x179F5500)
#define GKMGHEOMFPI_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x179F5650)
#define GKMGHEOMFPI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x179F54C0)
#define GKMGHEOMFPI__CCTOR_OFFSET UNITYSDK_OFFSET(0x179F5540)
#define GKMGHEOMFPI__CTOR_OFFSET UNITYSDK_OFFSET(0x179F55B0)

inline static constexpr unsigned int GKMGHEOMFPI_TypeDefinitionIndex = 43438;

class GKMGHEOMFPI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x10F; // 0x0
	::MoleMole::Battle::Entity* GKPDIKKBNFL; // 0x20
	::MoleMole::Config::DamageElementType PIAFKNFELFF; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKMGHEOMFPI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMGHEOMFPI__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMGHEOMFPI_PHOADBJGFBE_OFFSET))(this);
	}

	::MoleMole::Config::DamageElementType GGDJCAEMJIG()
	{
		return ((::MoleMole::Config::DamageElementType(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMGHEOMFPI_GGDJCAEMJIG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMGHEOMFPI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMGHEOMFPI_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMGHEOMFPI_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::DamageElementType GGLLGODOFIF, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKMGHEOMFPI_CNHBDOMKKDE_OFFSET))(this, GGLLGODOFIF, JKELDNKGNDI);
	}
};
