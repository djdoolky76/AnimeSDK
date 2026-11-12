#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARPROPERTYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63FB10)
#define RPG_GAMECORE_AVATARPROPERTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E63E150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPropertyRow_TypeDefinitionIndex = 12812;

	class AvatarPropertyRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 PropertyClassify; // 0x18
		::System::Boolean IsDisplay; // 0x1C
		::System::Boolean isBattleDisplay; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 MainRelicFilter; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID PropertyNameRelic; // 0x28
		::System::UInt32 PropertyInstructionID; // 0x38
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x3C
		::System::UInt32 Order; // 0x40
		::System::UInt32 SubRelicFilter; // 0x44
		::RPG::Client::TextID PropertyNameFilter; // 0x48
		::RPG::Client::TextID PropertyNameSkillTree; // 0x58
		::RPG::Client::TextID PropertyName; // 0x68
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
