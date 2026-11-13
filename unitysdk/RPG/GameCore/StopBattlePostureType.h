#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopBattlePostureType; }

#define RPG_GAMECORE_STOPBATTLEPOSTURETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C9BD0)
#define RPG_GAMECORE_STOPBATTLEPOSTURETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E3C9BE0)
#define RPG_GAMECORE_STOPBATTLEPOSTURETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E3C9B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopBattlePostureType_TypeDefinitionIndex = 20786;

	class StopBattlePostureType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBATTLEPOSTURETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopBattlePostureType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBATTLEPOSTURETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopBattlePostureType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBATTLEPOSTURETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
