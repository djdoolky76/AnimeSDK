#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class InitLittleGameWithLevelConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D788840)
#define RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D788870)
#define RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7887F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitLittleGameWithLevelConfig_TypeDefinitionIndex = 20987;

	class InitLittleGameWithLevelConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGameOwner; // 0x18
		::RPG::GameCore::DynamicString* LevelConfigPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitLittleGameWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitLittleGameWithLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitLittleGameWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitLittleGameWithLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
