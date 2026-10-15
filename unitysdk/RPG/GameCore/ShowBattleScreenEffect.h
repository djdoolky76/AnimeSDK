#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleScreenEffect; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWBATTLESCREENEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8480)
#define RPG_GAMECORE_SHOWBATTLESCREENEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD8490)
#define RPG_GAMECORE_SHOWBATTLESCREENEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD8450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleScreenEffect_TypeDefinitionIndex = 23250;

	class ShowBattleScreenEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleScreenEffectType Type; // 0x18
		::System::Boolean Active; // 0x1C
		::System::Byte _padding0[0x3];
		::System::String* UniqueName; // 0x20
		::System::String* Priority; // 0x28
		::System::String* EffectPath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESCREENEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleScreenEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleScreenEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESCREENEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleScreenEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleScreenEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESCREENEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
