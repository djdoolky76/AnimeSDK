#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OHIAJFJDKAO;
namespace RPG::GameCore { class ActivityDiceCombatRankConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E502410)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E501C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatRankConfigRow_TypeDefinitionIndex = 11328;

	class ActivityDiceCombatRankConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::OHIAJFJDKAO*>* RuleGroupMapList; // 0x10
		::System::String* IconSmallPath; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 DiceRankID; // 0x38
		::System::UInt32 RankMaxScore; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityDiceCombatRankConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
