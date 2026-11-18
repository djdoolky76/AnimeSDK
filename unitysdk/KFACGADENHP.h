#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/LABDAGJPPLO.h"
#include "unitysdk/MoleMole/Config/LanguageTextStyleConfig.h"
#include "unitysdk/OHHAGPCBOKC.h"

class NLGBJFDJJIH;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigUITextStyle; }
namespace System { class String; }

#define KFACGADENHP_AJHCIPHHFID_OFFSET UNITYSDK_OFFSET(0xD3F1DA0)
#define KFACGADENHP_CREATEOP_OFFSET UNITYSDK_OFFSET(0xD3F1530)
#define KFACGADENHP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0xD3F16E0)
#define KFACGADENHP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0xD3F15E0)
#define KFACGADENHP_MKEPNPGHDBA_1_OFFSET UNITYSDK_OFFSET(0xD3F1B00)
#define KFACGADENHP_MKEPNPGHDBA_OFFSET UNITYSDK_OFFSET(0xD3F1A80)
#define KFACGADENHP_NHBHDHGLOJK_OFFSET UNITYSDK_OFFSET(0xD3F17B0)
#define KFACGADENHP_OHGAHOOCMHE_OFFSET UNITYSDK_OFFSET(0xD3F1C50)
#define KFACGADENHP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0xD3F1490)
#define KFACGADENHP__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F1400)

inline static constexpr unsigned int KFACGADENHP_TypeDefinitionIndex = 70873;

class KFACGADENHP
{
public:
	::NLGBJFDJJIH* PKFAFAJBDDE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFACGADENHP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KFACGADENHP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUITextStyle*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUITextStyle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFACGADENHP_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigUITextStyle* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigUITextStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFACGADENHP_KGNEJKNNODJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KFACGADENHP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NHBHDHGLOJK(::MoleMole::Config::ConfigUITextStyle* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUITextStyle*))((::PBYTE)hIl2Cpp + KFACGADENHP_NHBHDHGLOJK_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean MKEPNPGHDBA(::System::String* ABFOABHBENH, ::MoleMole::LanguageType MBABHIFLICA, ::OHHAGPCBOKC& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::LanguageType, ::OHHAGPCBOKC&))((::PBYTE)hIl2Cpp + KFACGADENHP_MKEPNPGHDBA_OFFSET))(this, ABFOABHBENH, MBABHIFLICA, IGAAKDOIPNN);
	}

	::System::Boolean OHGAHOOCMHE(::System::String* ABFOABHBENH, ::MoleMole::Config::LanguageTextStyleConfig& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::LanguageTextStyleConfig&))((::PBYTE)hIl2Cpp + KFACGADENHP_OHGAHOOCMHE_OFFSET))(this, ABFOABHBENH, IGAAKDOIPNN);
	}

	::System::Void AJHCIPHHFID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFACGADENHP_AJHCIPHHFID_OFFSET))(this);
	}

	::System::Boolean MKEPNPGHDBA_1(::LABDAGJPPLO& AAOCANGHBDG, ::OHHAGPCBOKC& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::LABDAGJPPLO&, ::OHHAGPCBOKC&))((::PBYTE)hIl2Cpp + KFACGADENHP_MKEPNPGHDBA_1_OFFSET))(this, AAOCANGHBDG, IGAAKDOIPNN);
	}
};
