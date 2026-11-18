#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/JAGAMDADMGP.h"

#define LJKFPDKDDBB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16374C90)
#define LJKFPDKDDBB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16374C00)
#define LJKFPDKDDBB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16374AD0)
#define LJKFPDKDDBB_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x16374B60)
#define LJKFPDKDDBB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x163749C0)
#define LJKFPDKDDBB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16374A50)
#define LJKFPDKDDBB__CTOR_OFFSET UNITYSDK_OFFSET(0x16374AC0)

inline static constexpr unsigned int LJKFPDKDDBB_TypeDefinitionIndex = 75542;

class LJKFPDKDDBB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xE3; // 0x0
	::JAGAMDADMGP MDHGNEPBHHM; // 0x20
	::System::Boolean CIGFBAFEGDD; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJKFPDKDDBB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKFPDKDDBB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKFPDKDDBB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKFPDKDDBB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKFPDKDDBB_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKFPDKDDBB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::JAGAMDADMGP BMCDKKIEHFO, ::System::Boolean BMDMCNBLABI)
	{
		return ((::System::Void(*)(::PVOID, ::JAGAMDADMGP, ::System::Boolean))((::PBYTE)hIl2Cpp + LJKFPDKDDBB_CNHBDOMKKDE_OFFSET))(this, BMCDKKIEHFO, BMDMCNBLABI);
	}
};
