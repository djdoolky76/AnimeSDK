#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadBattleArea; }

#define RPG_GAMECORE_LOADBATTLEAREA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BC260)
#define RPG_GAMECORE_LOADBATTLEAREA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7BC270)
#define RPG_GAMECORE_LOADBATTLEAREA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7BC230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadBattleArea_TypeDefinitionIndex = 23320;

	class LoadBattleArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLoad; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBATTLEAREA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadBattleArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadBattleArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBATTLEAREA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadBattleArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadBattleArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBATTLEAREA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
