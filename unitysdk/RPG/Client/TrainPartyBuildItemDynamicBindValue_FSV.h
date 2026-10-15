#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainPartyBuildItemDynamicBindValue.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_CTOR_OFFSET UNITYSDK_OFFSET(0xE2FE180)
#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xE2FE0F0)

namespace RPG::Client
{
	class TrainPartyBuildItemDynamicBindValue_FSV : public ::RPG::Client::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::System::String* FloorSavedName; // 0x10
		::System::Int16 FloorSavedValue; // 0x18
		::System::Byte _padding0[0x2];
		::RPG::GameCore::CompareType Compare; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_CTOR_OFFSET))(this);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_KFGJEKJHIMB_OFFSET))(this);
		}

	};
}
