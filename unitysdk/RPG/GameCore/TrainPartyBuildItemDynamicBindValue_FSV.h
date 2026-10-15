#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/TrainPartyBuildItemDynamicBindValue.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyBuildItemDynamicBindValue_FSV; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2E380)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2E390)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2E660)

namespace RPG::GameCore
{
	class TrainPartyBuildItemDynamicBindValue_FSV : public ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::System::String* FloorSavedName; // 0x10
		::System::Int16 FloorSavedValue; // 0x18
		::System::Byte _padding0[0x2];
		::RPG::GameCore::CompareType Compare; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_FSV* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_FSV*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_FSV* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_FSV*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
