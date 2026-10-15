#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroup; }
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupTemplate; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A31C0)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A30D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashGroup_TypeDefinitionIndex = 17887;

	class RogueAdvRoomCandyCrashGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate*>* Templates; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
