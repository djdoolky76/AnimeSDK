#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPhotoExhibitionRow; }

#define RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36FB90)
#define RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D36F880)

namespace RPG::GameCore
{
	class ActivityPhotoExhibitionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PhotoID; // 0x10
		::Il2CppArray<::System::UInt32>* CommentList; // 0x18
		::System::UInt32 ActivityModuleID; // 0x20
		::System::UInt32 QuestID; // 0x24
		::RPG::Client::TextID Tab; // 0x28
		::System::UInt32 GroupID; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Daily; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityPhotoExhibitionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityPhotoExhibitionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
