#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BadgeLevel.h"
#include "unitysdk/RPG/GameCore/BadgePlayType.h"

#define IFAMLCKCBAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E81C60)
#define IFAMLCKCBAD_GET_BADGELEVEL_OFFSET UNITYSDK_OFFSET(0xACE0)
#define IFAMLCKCBAD_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xFDF0)
#define IFAMLCKCBAD_GET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0xE620)
#define IFAMLCKCBAD_SET_BADGELEVEL_OFFSET UNITYSDK_OFFSET(0xACF0)
#define IFAMLCKCBAD_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xFE00)
#define IFAMLCKCBAD_SET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0xAF40)

inline static constexpr unsigned int IFAMLCKCBAD_TypeDefinitionIndex = 74988;

	struct alignas(4) IFAMLCKCBAD
	{
		::RPG::GameCore::BadgePlayType _PlayType_k__BackingField; // 0x10
		::System::UInt32 _GroupID_k__BackingField; // 0x14
		::RPG::GameCore::BadgeLevel _BadgeLevel_k__BackingField; // 0x18
		::RPG::GameCore::BadgePlayType get_PlayType()
		{
			return ((::RPG::GameCore::BadgePlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAMLCKCBAD_GET_PLAYTYPE_OFFSET))(this);
		}

		::System::Void set_PlayType(::RPG::GameCore::BadgePlayType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BadgePlayType))((::PBYTE)hIl2Cpp + IFAMLCKCBAD_SET_PLAYTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAMLCKCBAD_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFAMLCKCBAD_SET_GROUPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::BadgeLevel get_BadgeLevel()
		{
			return ((::RPG::GameCore::BadgeLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAMLCKCBAD_GET_BADGELEVEL_OFFSET))(this);
		}

		::System::Void set_BadgeLevel(::RPG::GameCore::BadgeLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BadgeLevel))((::PBYTE)hIl2Cpp + IFAMLCKCBAD_SET_BADGELEVEL_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals(::IFAMLCKCBAD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFAMLCKCBAD))((::PBYTE)hIl2Cpp + IFAMLCKCBAD_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
