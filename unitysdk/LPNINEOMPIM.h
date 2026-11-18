#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class AvatarScriptAndAnimOverrideConfig; }

#define LPNINEOMPIM_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x13D0E120)
#define LPNINEOMPIM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13D0DEE0)
#define LPNINEOMPIM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13D0E1E0)
#define LPNINEOMPIM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13D0DE40)
#define LPNINEOMPIM__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0DDB0)

inline static constexpr unsigned int LPNINEOMPIM_TypeDefinitionIndex = 53831;

class LPNINEOMPIM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNINEOMPIM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LPNINEOMPIM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNINEOMPIM_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::AvatarScriptAndAnimOverrideConfig* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNINEOMPIM_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LPNINEOMPIM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
