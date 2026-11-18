#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/OOKDFNFBADN.h"

#define HEHNMLLEKKF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15DA22A0)
#define HEHNMLLEKKF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15DA2170)
#define HEHNMLLEKKF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15DA20E0)
#define HEHNMLLEKKF_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x15DA2200)
#define HEHNMLLEKKF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15DA1FD0)
#define HEHNMLLEKKF__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DA2060)
#define HEHNMLLEKKF__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA20D0)

inline static constexpr unsigned int HEHNMLLEKKF_TypeDefinitionIndex = 56482;

class HEHNMLLEKKF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x14B; // 0x0
	::System::Boolean ALJLFOCDHHI; // 0x20
	::System::Boolean LOKNNHAFHPG; // 0x21
	::System::Boolean MEMCJPNPLBC; // 0x22
	::System::Byte _padding0[0x1];
	::OOKDFNFBADN EENPJFLINHK; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEHNMLLEKKF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNMLLEKKF__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNMLLEKKF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNMLLEKKF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNMLLEKKF_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNMLLEKKF_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean CCGMFJMNBJJ, ::System::Boolean DNLLEPBJCBM, ::OOKDFNFBADN CHAFJLDOBHM, ::System::Boolean EGELJGDGIGE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::OOKDFNFBADN, ::System::Boolean))((::PBYTE)hIl2Cpp + HEHNMLLEKKF_CNHBDOMKKDE_OFFSET))(this, CCGMFJMNBJJ, DNLLEPBJCBM, CHAFJLDOBHM, EGELJGDGIGE);
	}
};
