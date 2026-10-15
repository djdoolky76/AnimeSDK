#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueStart; }

#define RPG_GAMECORE_ROGUESTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2EC80)
#define RPG_GAMECORE_ROGUESTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2EC90)
#define RPG_GAMECORE_ROGUESTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2EC50)

namespace RPG::GameCore
{
	class RogueStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x18
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x20
		::System::UInt32 AreaID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
