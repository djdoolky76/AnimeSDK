#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_AVATARSKILLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FB150)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarSkillData_TypeDefinitionIndex = 63892;

	class AvatarSkillData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParams; // 0x10
		::System::String* SkillTriggerKey; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::Client::TextID Tag; // 0x28
		::RPG::Client::TextID Desc; // 0x38
		::RPG::Client::TextID Name; // 0x48
		::RPG::Client::TextID TypeDesc; // 0x58
		::System::UInt32 SkillLv; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLDATA_CTOR_OFFSET))(this);
		}

	};
}
