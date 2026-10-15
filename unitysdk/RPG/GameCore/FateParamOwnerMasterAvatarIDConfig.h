#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamOwnerMasterAvatarIDConfig; }

#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69C7B0)
#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69C7C0)
#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69C770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamOwnerMasterAvatarIDConfig_TypeDefinitionIndex = 16629;

	class FateParamOwnerMasterAvatarIDConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
