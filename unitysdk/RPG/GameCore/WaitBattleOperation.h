#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialBattleOperationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitBattleOperation; }
namespace System { class String; }

#define RPG_GAMECORE_WAITBATTLEOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC94CB0)
#define RPG_GAMECORE_WAITBATTLEOPERATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC94CC0)
#define RPG_GAMECORE_WAITBATTLEOPERATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC94C70)

namespace RPG::GameCore
{
	class WaitBattleOperation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialBattleOperationType OperationType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Param; // 0x20
		::System::Single ProtectTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBattleOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBattleOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEOPERATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBattleOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBattleOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEOPERATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
