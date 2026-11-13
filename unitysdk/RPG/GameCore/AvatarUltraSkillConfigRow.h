#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARULTRASKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F7B80)
#define RPG_GAMECORE_AVATARULTRASKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2F7940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarUltraSkillConfigRow_TypeDefinitionIndex = 12810;

	class AvatarUltraSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* UltraSkillResourcePath; // 0x10
		::Il2CppArray<::System::String*>* SpecialSPSkills; // 0x18
		::RPG::Client::TextID UltraSkillUse; // 0x20
		::System::UInt32 AvatarID; // 0x30
		::RPG::GameCore::AvatarSpecialUltraType UltraSkillType; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARULTRASKILLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarUltraSkillConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarUltraSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARULTRASKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
