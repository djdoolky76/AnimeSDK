#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MemberData; }

#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS82_2_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B5210)
#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS82_2__GETDEFAULTRAIDTEAMWITHTRIAL_B__2_OFFSET UNITYSDK_OFFSET(0xE8B5220)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidModule___c__DisplayClass82_2_TypeDefinitionIndex = 68714;

	template <typename T1, typename T2>
	class RaidModule___c__DisplayClass82_2 : public ::System::Object
	{
	public:
		::RPG::Client::MemberData* memberData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS82_2_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultRaidTeamWithTrial_b__2(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS82_2__GETDEFAULTRAIDTEAMWITHTRIAL_B__2_OFFSET))(this, a1);
		}

	};
}
