#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerCommentType.h"
#include "unitysdk/RPG/GameCore/DrinkMakerSatifyCommentTriggerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerGuestCommentRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERGUESTCOMMENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85C630)
#define RPG_GAMECORE_DRINKMAKERGUESTCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E85C310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerGuestCommentRow_TypeDefinitionIndex = 13269;

	class DrinkMakerGuestCommentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* TriggerTypeParamList; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::Client::TextID CommentContent; // 0x20
		::System::UInt32 Weight; // 0x30
		::System::UInt32 CommentID; // 0x34
		::RPG::GameCore::DrinkMakerSatifyCommentTriggerType SatisfyTriggerType; // 0x38
		::System::UInt32 GuestID; // 0x3C
		::RPG::GameCore::DrinkMakerCommentType Type; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTCOMMENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerGuestCommentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerGuestCommentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTCOMMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
