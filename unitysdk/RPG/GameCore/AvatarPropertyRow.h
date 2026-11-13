#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARPROPERTYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E52B0)
#define RPG_GAMECORE_AVATARPROPERTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2E38F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPropertyRow_TypeDefinitionIndex = 12812;

	class AvatarPropertyRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 PropertyInstructionID; // 0x18
		::System::UInt32 Order; // 0x1C
		::RPG::Client::TextID PropertyName; // 0x20
		::System::Boolean isBattleDisplay; // 0x30
		::System::Boolean IsDisplay; // 0x31
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID PropertyNameFilter; // 0x38
		::System::UInt32 PropertyClassify; // 0x48
		::System::UInt32 SubRelicFilter; // 0x4C
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x50
		::System::UInt32 MainRelicFilter; // 0x54
		::RPG::Client::TextID PropertyNameRelic; // 0x58
		::RPG::Client::TextID PropertyNameSkillTree; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarPropertyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarPropertyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
