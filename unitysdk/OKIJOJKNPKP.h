#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define OKIJOJKNPKP_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x16C1C460)
#define OKIJOJKNPKP_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x16C1C340)
#define OKIJOJKNPKP_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x16C1C4F0)
#define OKIJOJKNPKP_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x16C1C1F0)
#define OKIJOJKNPKP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1C1B0)

inline static constexpr unsigned int OKIJOJKNPKP_TypeDefinitionIndex = 75924;

class OKIJOJKNPKP : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + OKIJOJKNPKP__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKIJOJKNPKP_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKIJOJKNPKP_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKIJOJKNPKP_AGDBENMOGCD_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKIJOJKNPKP_JFNIMFIBFHA_OFFSET))(this);
	}
};
