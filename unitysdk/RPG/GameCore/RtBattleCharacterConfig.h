#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCharacterConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleCharacterCameraConfig; }
namespace RPG::GameCore { class RtBattleCharacterConfig; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_RTBATTLECHARACTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4B9A0)
#define RPG_GAMECORE_RTBATTLECHARACTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4BA20)
#define RPG_GAMECORE_RTBATTLECHARACTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4B900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleCharacterConfig_TypeDefinitionIndex = 18037;

	class RtBattleCharacterConfig : public ::RPG::GameCore::RtCharacterConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBattleCharacterCameraConfig*>* CameraConfigList; // 0x100
		::RPG::GameCore::ValueEvaluatorConfig* BornGridEvaluator; // 0x108
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECHARACTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleCharacterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECHARACTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleCharacterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECHARACTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
