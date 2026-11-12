#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBHPDJNGECA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class CBMGEIGCPHG;
class GIDHOABFFFP;
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_UPGRADEAVATARPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0xEED12D0)
#define RPG_CLIENT_UPGRADEAVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEED14B0)
#define RPG_CLIENT_UPGRADEAVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xEED1330)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xEED1230)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xEED1050)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xEED1090)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xEED12B0)
#define RPG_CLIENT_UPGRADEAVATARPROXY_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xEED12C0)
#define RPG_CLIENT_UPGRADEAVATARPROXY__ENSUREENTRYREFRESHED_OFFSET UNITYSDK_OFFSET(0xEED10F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UpgradeAvatarProxy_TypeDefinitionIndex = 64301;

	class UpgradeAvatarProxy : public ::System::Object
	{
	public:
		::CBMGEIGCPHG* _UpgradeAvatarRefresher; // 0x10
		::PBHPDJNGECA _Entry; // 0x18
		::System::UInt32 _Version_k__BackingField; // 0x40
		::System::Void _ctor(::PBHPDJNGECA a1, ::CBMGEIGCPHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PBHPDJNGECA, ::CBMGEIGCPHG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* get_Origin()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_GET_ORIGIN_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Upgrade()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_GET_UPGRADE_OFFSET))(this);
		}

		::AHHNGJGLOKA get_Identifier()
		{
			return ((::AHHNGJGLOKA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_SET_VERSION_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void _EnsureEntryRefreshed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY__ENSUREENTRYREFRESHED_OFFSET))(this);
		}

	};
}
