#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByModifierValue; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB71650)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB71820)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB717D0)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB71660)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB71600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByModifierValue_TypeDefinitionIndex = 23987;

	class TargetSortByModifierValue : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* ModifierName; // 0x10
		::RPG::GameCore::ModifierValueType ValueType; // 0x18
		::System::Boolean HighestFirst; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERVALUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
