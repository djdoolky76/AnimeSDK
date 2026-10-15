#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_AVATARSKILLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC7113A0)

namespace RPG::Client
{
	class AvatarSkillData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParams; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Tag; // 0x38
		::System::UInt32 SkillLv; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TypeDesc; // 0x50
		::RPG::Client::TextID Desc; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLDATA_CTOR_OFFSET))(this);
		}

	};
}
