#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByMultiModifierValueSum; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB71C00)
#define RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB71DD0)
#define RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB71D80)
#define RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB71C10)
#define RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB71BB0)

namespace RPG::GameCore
{
	class TargetSortByMultiModifierValueSum : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x10
		::RPG::GameCore::ModifierValueType ValueType; // 0x14
		::System::Boolean HighestFirst; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
