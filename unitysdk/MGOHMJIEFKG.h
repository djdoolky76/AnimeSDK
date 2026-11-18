#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define MGOHMJIEFKG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15930C30)
#define MGOHMJIEFKG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15930C90)
#define MGOHMJIEFKG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15930B00)
#define MGOHMJIEFKG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x15930B90)
#define MGOHMJIEFKG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x159309F0)
#define MGOHMJIEFKG__CCTOR_OFFSET UNITYSDK_OFFSET(0x15930A80)
#define MGOHMJIEFKG__CTOR_OFFSET UNITYSDK_OFFSET(0x15930AF0)

inline static constexpr unsigned int MGOHMJIEFKG_TypeDefinitionIndex = 48829;

class MGOHMJIEFKG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x105; // 0x0
	::System::Boolean CDIPBMMDICL; // 0x20
	::System::Boolean LOCFEKAHECF; // 0x21
	::System::Boolean IGGBLHGPPHD; // 0x22

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGOHMJIEFKG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOHMJIEFKG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOHMJIEFKG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOHMJIEFKG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOHMJIEFKG_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean HPINBCPMHJE, ::System::Boolean IMEHMFONCLH, ::System::Boolean JKEIGNHKJGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MGOHMJIEFKG_CNHBDOMKKDE_OFFSET))(this, HPINBCPMHJE, IMEHMFONCLH, JKEIGNHKJGD);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOHMJIEFKG_FIGPAOKNJLN_OFFSET))(this);
	}
};
