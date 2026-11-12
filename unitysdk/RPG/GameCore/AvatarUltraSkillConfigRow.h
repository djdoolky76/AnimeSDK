#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARULTRASKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6523E0)
#define RPG_GAMECORE_AVATARULTRASKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6521A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarUltraSkillConfigRow_TypeDefinitionIndex = 12810;

	class AvatarUltraSkillConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* SpecialSPSkills; // 0x10
		::System::String* UltraSkillResourcePath; // 0x18
		::System::UInt32 AvatarID; // 0x20
		::RPG::GameCore::AvatarSpecialUltraType UltraSkillType; // 0x24
		::RPG::Client::TextID UltraSkillUse; // 0x28
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
