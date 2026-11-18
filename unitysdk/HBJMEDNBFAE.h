#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define HBJMEDNBFAE_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x16F22C50)
#define HBJMEDNBFAE_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x16F22B30)
#define HBJMEDNBFAE_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x16F22AB0)
#define HBJMEDNBFAE_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x16F22BC0)
#define HBJMEDNBFAE_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x16F22740)
#define HBJMEDNBFAE_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x16F22910)
#define HBJMEDNBFAE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F22700)

inline static constexpr unsigned int HBJMEDNBFAE_TypeDefinitionIndex = 40632;

class HBJMEDNBFAE : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + HBJMEDNBFAE__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJMEDNBFAE_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJMEDNBFAE_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJMEDNBFAE_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJMEDNBFAE_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJMEDNBFAE_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJMEDNBFAE_AGDBENMOGCD_OFFSET))(this);
	}
};
