#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantQuestGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTQUESTGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D993E10)
#define RPG_GAMECORE_RESTAURANTQUESTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D993AA0)

namespace RPG::GameCore
{
	class RestaurantQuestGroupRow : public ::System::Object
	{
	public:
		::System::String* IMGPath; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 QuestGroupID; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CharacterName; // 0x40
		::RPG::Client::TextID Content; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTQUESTGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantQuestGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantQuestGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTQUESTGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
