#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyValue; }

#define RPG_GAMECORE_AVATARPROPERTYVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D41F4C0)
#define RPG_GAMECORE_AVATARPROPERTYVALUE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D41F370)

namespace RPG::GameCore
{
	class AvatarPropertyValue : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x10
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarPropertyValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarPropertyValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYVALUE_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
