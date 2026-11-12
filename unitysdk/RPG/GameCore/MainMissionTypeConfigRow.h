#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MainMissionTypeConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAINMISSIONTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA40540)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA3FBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionTypeConfigRow_TypeDefinitionIndex = 14306;

	class MainMissionTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* TypeChapterColor; // 0x10
		::System::String* MenuItemIcon; // 0x18
		::System::String* TypeColor; // 0x20
		::System::String* TypeIcon; // 0x28
		::System::String* TypeIconMini; // 0x30
		::RPG::Client::TextID TypeName; // 0x38
		::System::UInt32 IconMapStarted; // 0x48
		::System::UInt32 IconMapConnect; // 0x4C
		::System::UInt32 IconMapOptional; // 0x50
		::System::UInt32 TypePriority; // 0x54
		::System::UInt32 IconMapToTake; // 0x58
		::RPG::GameCore::MainMissionType Type; // 0x5C
		::System::UInt32 WaypointIconType; // 0x60
		::System::Boolean IsDelete; // 0x64
		::System::Boolean IsShowRedDot; // 0x65
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MainMissionTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MainMissionTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
