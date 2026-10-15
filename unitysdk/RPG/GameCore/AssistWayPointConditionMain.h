#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointConditionMain; }
namespace RPG::GameCore { class AssistWayPointConditionPack; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC2B0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3FC2C0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_NHEJBMLCDMH_OFFSET UNITYSDK_OFFSET(0x1D3FC150)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3FC1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointConditionMain_TypeDefinitionIndex = 15474;

	class AssistWayPointConditionMain : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AssistWayPointConditionPack*>* ConditionPackList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_CTOR_OFFSET))(this);
		}

		::System::Boolean NHEJBMLCDMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_NHEJBMLCDMH_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointConditionMain* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointConditionMain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionMain* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionMain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
