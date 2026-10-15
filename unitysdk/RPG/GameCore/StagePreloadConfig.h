#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePreloadConfig; }

#define RPG_GAMECORE_STAGEPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB13200)
#define RPG_GAMECORE_STAGEPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB13110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePreloadConfig_TypeDefinitionIndex = 16357;

	class StagePreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterIdList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
