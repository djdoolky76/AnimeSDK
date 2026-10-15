#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointLittleGameCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D09B0)
#define RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3D09C0)
#define RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3D08C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointLittleGameCondition_TypeDefinitionIndex = 19006;

	class AssistWayPointLittleGameCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AssistWayPointLittleGameGroupID; // 0x10
		::System::UInt32 AssistWayPointLittleGameEntityID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointLittleGameCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointLittleGameCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointLittleGameCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointLittleGameCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
