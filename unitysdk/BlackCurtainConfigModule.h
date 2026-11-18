#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigBlackCurtain; }
namespace MoleMole::Config { class ConfigBlackCurtains; }
namespace System { class String; }

#define BLACKCURTAINCONFIGMODULE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x169364E0)
#define BLACKCURTAINCONFIGMODULE_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x16935B60)
#define BLACKCURTAINCONFIGMODULE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16936440)
#define BLACKCURTAINCONFIGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x169363B0)
#define BLACKCURTAINCONFIGMODULE___BASE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16936670)

inline static constexpr unsigned int BlackCurtainConfigModule_TypeDefinitionIndex = 64243;

class BlackCurtainConfigModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIGMODULE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase phase)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIGMODULE_PRELOADFORPHASE_OFFSET))(this, phase);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigBlackCurtains*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigBlackCurtains*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIGMODULE_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigBlackCurtain* GetConfig(::System::String* key)
	{
		return ((::MoleMole::Config::ConfigBlackCurtain*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIGMODULE_GETCONFIG_OFFSET))(this, key);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle __base_PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase P0)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIGMODULE___BASE_PRELOADFORPHASE_OFFSET))(this, P0);
	}
};
