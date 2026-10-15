#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SubMissionMultiFinishParamConfig; }

#define RPG_GAMECORE_SUBMISSIONMULTIFINISHPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB36C60)
#define RPG_GAMECORE_SUBMISSIONMULTIFINISHPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB36C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionMultiFinishParamConfig_TypeDefinitionIndex = 19019;

	class SubMissionMultiFinishParamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONMULTIFINISHPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubMissionMultiFinishParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubMissionMultiFinishParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONMULTIFINISHPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
