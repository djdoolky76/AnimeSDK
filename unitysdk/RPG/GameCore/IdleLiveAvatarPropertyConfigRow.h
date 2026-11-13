#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAvatarPropertyConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEAVATARPROPERTYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE83520)
#define RPG_GAMECORE_IDLELIVEAVATARPROPERTYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE82FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarPropertyConfigRow_TypeDefinitionIndex = 11769;

	class IdleLiveAvatarPropertyConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::FixPoint FrontPowerFactor; // 0x18
		::RPG::Client::TextID PropertyName; // 0x20
		::RPG::GameCore::IdleLiveAvatarPropertyType PropertyType; // 0x30
		::System::Boolean IsDisplay; // 0x34
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint BackgroundPowerFactor; // 0x38
		::RPG::Client::TextID PropertyDesc; // 0x40
		::System::UInt32 Order; // 0x50
		::RPG::GameCore::IdleLiveAvatarPropertyType BaseProperty; // 0x54
		::RPG::GameCore::FixPoint CaptainPowerFactor; // 0x58
		::RPG::GameCore::FixPoint SupportPowerFactor; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARPROPERTYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARPROPERTYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
