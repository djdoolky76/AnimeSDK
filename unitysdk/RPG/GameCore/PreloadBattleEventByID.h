#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreloadBattleEventByID; }

#define RPG_GAMECORE_PRELOADBATTLEEVENTBYID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D911C90)
#define RPG_GAMECORE_PRELOADBATTLEEVENTBYID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D911CA0)
#define RPG_GAMECORE_PRELOADBATTLEEVENTBYID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D911C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadBattleEventByID_TypeDefinitionIndex = 22978;

	class PreloadBattleEventByID : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* BattleEventID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENTBYID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadBattleEventByID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadBattleEventByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENTBYID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadBattleEventByID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadBattleEventByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENTBYID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
