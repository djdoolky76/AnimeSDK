#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/OFJOJKAAPJC.h"

#define EJLMADENJFG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x11CAC2F0)
#define EJLMADENJFG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11CAC3F0)
#define EJLMADENJFG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11CAC260)
#define EJLMADENJFG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x11CAC350)
#define EJLMADENJFG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11CAC1A0)
#define EJLMADENJFG__CCTOR_OFFSET UNITYSDK_OFFSET(0x11CAC1E0)
#define EJLMADENJFG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CAC250)

inline static constexpr unsigned int EJLMADENJFG_TypeDefinitionIndex = 67771;

class EJLMADENJFG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x106; // 0x0
	::System::Int32 BLIFOCHPOCF; // 0x20
	::OFJOJKAAPJC CIKMKABJJLB; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJLMADENJFG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLMADENJFG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLMADENJFG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLMADENJFG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::OFJOJKAAPJC GHMGFPNADHO, ::System::Int32 BFLPMBFDAJM)
	{
		return ((::System::Void(*)(::PVOID, ::OFJOJKAAPJC, ::System::Int32))((::PBYTE)hIl2Cpp + EJLMADENJFG_CNHBDOMKKDE_OFFSET))(this, GHMGFPNADHO, BFLPMBFDAJM);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLMADENJFG_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLMADENJFG_FIGPAOKNJLN_OFFSET))(this);
	}
};
