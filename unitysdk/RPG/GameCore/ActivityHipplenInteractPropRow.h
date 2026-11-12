#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenInteractLikeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenInteractPropRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E576760)
#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E576450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenInteractPropRow_TypeDefinitionIndex = 11708;

	class ActivityHipplenInteractPropRow : public ::System::Object
	{
	public:
		::System::String* StringParam; // 0x10
		::System::String* SmallIconPath; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::GameCore::HipplenInteractLikeType LikeType; // 0x28
		::System::UInt32 UnlockPhaseID; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 UnlockCycleID; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenInteractPropRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenInteractPropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
