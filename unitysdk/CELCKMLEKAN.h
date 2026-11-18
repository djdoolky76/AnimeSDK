#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CELCKMLEKAN_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x15329B30)
#define CELCKMLEKAN_GKFHGHHMOLN_OFFSET UNITYSDK_OFFSET(0x15328FC0)
#define CELCKMLEKAN_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x153293B0)
#define CELCKMLEKAN_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x15329AA0)
#define CELCKMLEKAN_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x15329060)
#define CELCKMLEKAN__CTOR_OFFSET UNITYSDK_OFFSET(0x15328F80)

inline static constexpr unsigned int CELCKMLEKAN_TypeDefinitionIndex = 53261;

class CELCKMLEKAN : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CELCKMLEKAN__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::MoleMole::ConfigUICommon_Input_SceneType GKFHGHHMOLN()
	{
		return ((::MoleMole::ConfigUICommon_Input_SceneType(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCKMLEKAN_GKFHGHHMOLN_OFFSET))(this);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCKMLEKAN_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCKMLEKAN_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCKMLEKAN_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCKMLEKAN_AGDBENMOGCD_OFFSET))(this);
	}
};
