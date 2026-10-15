#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamRandomGetMasterAvatarIDConfig; }

#define RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69C910)
#define RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69C920)
#define RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69C8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamRandomGetMasterAvatarIDConfig_TypeDefinitionIndex = 16632;

	class FateParamRandomGetMasterAvatarIDConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
