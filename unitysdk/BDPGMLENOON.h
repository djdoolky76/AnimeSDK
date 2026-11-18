#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace MoleMole::Config { class ConfigUIGachaRoleConfig; }
namespace MoleMole::Config { class ConfigUIPortraitItem; }
namespace System { class String; }

#define BDPGMLENOON_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17020380)
#define BDPGMLENOON_DAJBJAHAOJI_OFFSET UNITYSDK_OFFSET(0x17020690)
#define BDPGMLENOON_FLLIFAHOELG_OFFSET UNITYSDK_OFFSET(0x17020790)
#define BDPGMLENOON_JBIADCMHNKC_OFFSET UNITYSDK_OFFSET(0x170209C0)
#define BDPGMLENOON_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x170205C0)
#define BDPGMLENOON_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x170202E0)
#define BDPGMLENOON__CTOR_OFFSET UNITYSDK_OFFSET(0x17020250)

inline static constexpr unsigned int BDPGMLENOON_TypeDefinitionIndex = 87096;

class BDPGMLENOON
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPGMLENOON__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BDPGMLENOON_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIGachaPortrait*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIGachaPortrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPGMLENOON_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BDPGMLENOON_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigUIGachaPortrait* DAJBJAHAOJI()
	{
		return ((::MoleMole::Config::ConfigUIGachaPortrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPGMLENOON_DAJBJAHAOJI_OFFSET))(this);
	}

	::MoleMole::Config::ConfigUIGachaRoleConfig* FLLIFAHOELG(::System::String* FLALCACMFJJ, ::System::String* JBPIHLFAFFG, ::System::String* MPMLNDENDFO)
	{
		return ((::MoleMole::Config::ConfigUIGachaRoleConfig*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BDPGMLENOON_FLLIFAHOELG_OFFSET))(this, FLALCACMFJJ, JBPIHLFAFFG, MPMLNDENDFO);
	}

	::MoleMole::Config::ConfigUIPortraitItem* JBIADCMHNKC(::System::String* JBPIHLFAFFG, ::System::String* OKGKPMGCDMJ)
	{
		return ((::MoleMole::Config::ConfigUIPortraitItem*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BDPGMLENOON_JBIADCMHNKC_OFFSET))(this, JBPIHLFAFFG, OKGKPMGCDMJ);
	}
};
