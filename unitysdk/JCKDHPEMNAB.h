#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define JCKDHPEMNAB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14A50D60)
#define JCKDHPEMNAB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14A50E50)
#define JCKDHPEMNAB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14A50CD0)
#define JCKDHPEMNAB_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14A50DB0)
#define JCKDHPEMNAB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14A50BD0)
#define JCKDHPEMNAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A50C50)
#define JCKDHPEMNAB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A50CC0)

inline static constexpr unsigned int JCKDHPEMNAB_TypeDefinitionIndex = 65982;

class JCKDHPEMNAB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x42; // 0x0
	::System::Boolean KKIBKGLJKHD; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCKDHPEMNAB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKDHPEMNAB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKDHPEMNAB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKDHPEMNAB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean GELCBJDLBII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCKDHPEMNAB_CNHBDOMKKDE_OFFSET))(this, GELCBJDLBII);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKDHPEMNAB_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKDHPEMNAB_FIGPAOKNJLN_OFFSET))(this);
	}
};
