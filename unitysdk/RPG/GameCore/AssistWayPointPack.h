#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPoint; }
namespace RPG::GameCore { class AssistWayPointFastComplete; }
namespace RPG::GameCore { class AssistWayPointLittleGameCondition; }
namespace RPG::GameCore { class AssistWayPointPack; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTPACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FE8C0)
#define RPG_GAMECORE_ASSISTWAYPOINTPACK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3FE8D0)
#define RPG_GAMECORE_ASSISTWAYPOINTPACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3FE6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointPack_TypeDefinitionIndex = 19007;

	class AssistWayPointPack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AssistWayPointFloorID; // 0x10
		::System::UInt32 AssistWayPointRegionID; // 0x14
		::Il2CppArray<::RPG::GameCore::AssistWayPointLittleGameCondition*>* AssistWayPointLittleGameConditionList; // 0x18
		::Il2CppArray<::RPG::GameCore::AssistWayPoint*>* AssistWayPointList; // 0x20
		::Il2CppArray<::RPG::GameCore::AssistWayPointFastComplete*>* AssistWayPointFastCompleteList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointPack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPACK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
