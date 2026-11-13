#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPhotoExhibitionRow; }

#define RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA893F0)
#define RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA890E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPhotoExhibitionRow_TypeDefinitionIndex = 12173;

	class ActivityPhotoExhibitionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PhotoID; // 0x10
		::Il2CppArray<::System::UInt32>* CommentList; // 0x18
		::RPG::Client::TextID Tab; // 0x20
		::System::UInt32 GroupID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Daily; // 0x38
		::System::UInt32 ActivityModuleID; // 0x48
		::System::UInt32 QuestID; // 0x4C
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
