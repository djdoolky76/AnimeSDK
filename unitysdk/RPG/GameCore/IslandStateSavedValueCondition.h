#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IslandStateSavedValueCondition; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ISLANDSTATESAVEDVALUECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D78DDF0)
#define RPG_GAMECORE_ISLANDSTATESAVEDVALUECONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D78DE00)
#define RPG_GAMECORE_ISLANDSTATESAVEDVALUECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D78DC50)

namespace RPG::GameCore
{
	class IslandStateSavedValueCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SavedValueName; // 0x10
		::RPG::GameCore::CompareType Operation; // 0x18
		::System::Int16 Value; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATESAVEDVALUECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::IslandStateSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IslandStateSavedValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATESAVEDVALUECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateSavedValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATESAVEDVALUECONDITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
