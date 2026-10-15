#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrackPhotoCanType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackPhotoTrashCanConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2C260)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC2BB00)

namespace RPG::GameCore
{
	class TrackPhotoTrashCanConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ExtraAnimList; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ExtraScore; // 0x20
		::RPG::GameCore::TrackPhotoCanType CanTypeID; // 0x24
		::System::UInt32 Score; // 0x28
		::System::UInt32 NpcTemplateID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrackPhotoTrashCanConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
