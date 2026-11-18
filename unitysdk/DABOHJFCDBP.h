#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DABOHJFCDBP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x19D4E2F0)
#define DABOHJFCDBP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x19D4E1C0)
#define DABOHJFCDBP_HIEBBBOOMEH_OFFSET UNITYSDK_OFFSET(0x19D4E100)
#define DABOHJFCDBP_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x19D4E250)
#define DABOHJFCDBP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19D4E0B0)
#define DABOHJFCDBP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D4E140)
#define DABOHJFCDBP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4E1B0)

inline static constexpr unsigned int DABOHJFCDBP_TypeDefinitionIndex = 74839;

class DABOHJFCDBP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x1; // 0x0
	::System::UInt32 HCEPJPFPBLH; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DABOHJFCDBP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABOHJFCDBP__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABOHJFCDBP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::UInt32 HIEBBBOOMEH()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABOHJFCDBP_HIEBBBOOMEH_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABOHJFCDBP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABOHJFCDBP_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABOHJFCDBP_FIGPAOKNJLN_OFFSET))(this);
	}
};
