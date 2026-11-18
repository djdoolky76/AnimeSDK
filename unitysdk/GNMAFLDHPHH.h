#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class KPNIFGIKELE;

#define GNMAFLDHPHH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13DF2D30)
#define GNMAFLDHPHH_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x13DF2A50)
#define GNMAFLDHPHH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13DF2DE0)
#define GNMAFLDHPHH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13DF2C00)
#define GNMAFLDHPHH_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13DF2C90)
#define GNMAFLDHPHH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13DF2A90)
#define GNMAFLDHPHH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DF2B80)
#define GNMAFLDHPHH__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF2BF0)

inline static constexpr unsigned int GNMAFLDHPHH_TypeDefinitionIndex = 88583;

class GNMAFLDHPHH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x48; // 0x0
	::KPNIFGIKELE* IKHJEGECGJA; // 0x20
	::System::UInt32 FGKHKCIPJGK; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNMAFLDHPHH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMAFLDHPHH__CTOR_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMAFLDHPHH_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMAFLDHPHH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMAFLDHPHH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMAFLDHPHH_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NOKEPJMHBDN, ::KPNIFGIKELE* CDGEMEKPGJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + GNMAFLDHPHH_CNHBDOMKKDE_OFFSET))(this, NOKEPJMHBDN, CDGEMEKPGJH);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMAFLDHPHH_FIGPAOKNJLN_OFFSET))(this);
	}
};
