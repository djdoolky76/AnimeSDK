#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantQuestGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTQUESTGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9664A0)
#define RPG_GAMECORE_RESTAURANTQUESTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D966130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantQuestGroupRow_TypeDefinitionIndex = 11392;

	class RestaurantQuestGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::System::String* IMGPath; // 0x20
		::System::UInt32 QuestGroupID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x30
		::RPG::Client::TextID Content; // 0x40
		::RPG::Client::TextID CharacterName; // 0x50
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
