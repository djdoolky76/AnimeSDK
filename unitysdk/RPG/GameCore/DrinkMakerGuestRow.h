#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerGuestRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERGUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85D710)
#define RPG_GAMECORE_DRINKMAKERGUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E85CE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerGuestRow_TypeDefinitionIndex = 13258;

	class DrinkMakerGuestRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* EmotionProblemList; // 0x18
		::Il2CppArray<::System::UInt32>* FavorTagList; // 0x20
		::System::String* BigIconPath; // 0x28
		::System::String* LinePath; // 0x30
		::System::UInt32 MaxFaithReward; // 0x38
		::System::UInt32 FinishQuestID; // 0x3C
		::RPG::Client::TextID BartenderGuestName; // 0x40
		::System::UInt32 MaxFaith; // 0x50
		::System::UInt32 FinishSubMissionID; // 0x54
		::System::UInt32 GuestID; // 0x58
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BartenderGuestDesc; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerGuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerGuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
