#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PKOKDGDLNAD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1371DF40)
#define PKOKDGDLNAD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1371DEB0)
#define PKOKDGDLNAD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1371DD80)
#define PKOKDGDLNAD_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1371DE10)
#define PKOKDGDLNAD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1371DC70)
#define PKOKDGDLNAD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1371DD00)
#define PKOKDGDLNAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1371DD70)

inline static constexpr unsigned int PKOKDGDLNAD_TypeDefinitionIndex = 73208;

class PKOKDGDLNAD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xA; // 0x0
	::System::UInt32 BPPJMCJLPHM; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKOKDGDLNAD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKDGDLNAD__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKDGDLNAD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKDGDLNAD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKDGDLNAD_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOKDGDLNAD_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 AHAADDPIABN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKOKDGDLNAD_CNHBDOMKKDE_OFFSET))(this, AHAADDPIABN);
	}
};
