#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigSwitchTeamActivity; }

#define BGKDILAGODH_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x14C426E0)
#define BGKDILAGODH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14C424A0)
#define BGKDILAGODH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14C427A0)
#define BGKDILAGODH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14C42400)
#define BGKDILAGODH__CTOR_OFFSET UNITYSDK_OFFSET(0x14C42370)

inline static constexpr unsigned int BGKDILAGODH_TypeDefinitionIndex = 91831;

class BGKDILAGODH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDILAGODH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BGKDILAGODH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSwitchTeamActivity*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSwitchTeamActivity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDILAGODH_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSwitchTeamActivity* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigSwitchTeamActivity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDILAGODH_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BGKDILAGODH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
