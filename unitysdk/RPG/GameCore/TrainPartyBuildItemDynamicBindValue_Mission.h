#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyBuildItemDynamicBindValue.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyBuildItemDynamicBindValue_Mission; }

#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC00C50)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC00C60)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC00E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_Mission_TypeDefinitionIndex = 16268;

	class TrainPartyBuildItemDynamicBindValue_Mission : public ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::System::UInt32 SubMissionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_Mission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_Mission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_Mission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_Mission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
