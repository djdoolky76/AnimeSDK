#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/FHOOIKAKDME_CCDCBELFBPP.h"

#define FHOOIKAKDME_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15E63370)
#define FHOOIKAKDME_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15E63330)
#define FHOOIKAKDME_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15E632A0)
#define FHOOIKAKDME_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x15E633C0)
#define FHOOIKAKDME_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15E63190)
#define FHOOIKAKDME__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E63220)
#define FHOOIKAKDME__CTOR_OFFSET UNITYSDK_OFFSET(0x15E63290)

inline static constexpr unsigned int FHOOIKAKDME_TypeDefinitionIndex = 69702;

class FHOOIKAKDME : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x154; // 0x0
	::FHOOIKAKDME_CCDCBELFBPP CEHGFFDBHOJ; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHOOIKAKDME__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOOIKAKDME__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOOIKAKDME_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOOIKAKDME_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOOIKAKDME_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::FHOOIKAKDME_CCDCBELFBPP JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::PVOID, ::FHOOIKAKDME_CCDCBELFBPP))((::PBYTE)hIl2Cpp + FHOOIKAKDME_CNHBDOMKKDE_OFFSET))(this, JBCNPOHMGPE);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOOIKAKDME_OHFHFOHMBJH_OFFSET))(this);
	}
};
