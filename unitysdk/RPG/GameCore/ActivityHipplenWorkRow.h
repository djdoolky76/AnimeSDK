#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenWorkType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenWorkRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENWORKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5783C0)
#define RPG_GAMECORE_ACTIVITYHIPPLENWORKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E578050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenWorkRow_TypeDefinitionIndex = 11688;

	class ActivityHipplenWorkRow : public ::System::Object
	{
	public:
		::System::String* WorkSmallIcon; // 0x10
		::System::String* WorkIcon; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 Param; // 0x24
		::RPG::Client::TextID WorkDesc; // 0x28
		::RPG::GameCore::HipplenWorkType Type; // 0x38
		::System::UInt32 Cost; // 0x3C
		::RPG::Client::TextID WorkTitle; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENWORKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenWorkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenWorkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENWORKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
