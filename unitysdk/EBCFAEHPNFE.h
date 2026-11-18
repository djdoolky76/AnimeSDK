#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIPFBDJMEPA.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define EBCFAEHPNFE_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1062AFA0)
#define EBCFAEHPNFE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1062B090)
#define EBCFAEHPNFE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1062AF10)
#define EBCFAEHPNFE_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1062AFF0)
#define EBCFAEHPNFE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1062AE00)
#define EBCFAEHPNFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1062AE90)
#define EBCFAEHPNFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1062AF00)

inline static constexpr unsigned int EBCFAEHPNFE_TypeDefinitionIndex = 82915;

class EBCFAEHPNFE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x15D; // 0x0
	::CIPFBDJMEPA FEOKCKPMGAJ; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBCFAEHPNFE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCFAEHPNFE__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCFAEHPNFE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCFAEHPNFE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::CIPFBDJMEPA CBBCJFPGBOK)
	{
		return ((::System::Void(*)(::PVOID, ::CIPFBDJMEPA))((::PBYTE)hIl2Cpp + EBCFAEHPNFE_CNHBDOMKKDE_OFFSET))(this, CBBCJFPGBOK);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCFAEHPNFE_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCFAEHPNFE_FIGPAOKNJLN_OFFSET))(this);
	}
};
