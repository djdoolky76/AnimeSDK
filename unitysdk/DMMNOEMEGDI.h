#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"
class CGMDGPBKKFD;
namespace RPG::AvatarSystem { class IAvatar; }

#define DMMNOEMEGDI_CHECKPARTISNEEDUPGRADE_OFFSET UNITYSDK_OFFSET(0xFEC7AE0)
#define DMMNOEMEGDI_CHECKTRACENODEISUPGRADED_OFFSET UNITYSDK_OFFSET(0xFEC7B60)
#define DMMNOEMEGDI_CONVERTTOORIGIN_OFFSET UNITYSDK_OFFSET(0xFEC7A30)
#define DMMNOEMEGDI_CONVERTTOUPGRADE_OFFSET UNITYSDK_OFFSET(0xFEC7990)
#define DMMNOEMEGDI_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC7CB0)
#define DMMNOEMEGDI_GET_UPGRADEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0xFEC7970)
#define DMMNOEMEGDI_SET_UPGRADEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0xFEC7980)

inline static constexpr unsigned int DMMNOEMEGDI_TypeDefinitionIndex = 62869;

	class DMMNOEMEGDI : public ::System::Object
	{
	public:
		::CGMDGPBKKFD* _UpgradeAvatarService_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMNOEMEGDI_CTOR_OFFSET))(this);
		}

		::CGMDGPBKKFD* get_UpgradeAvatarService()
		{
			return ((::CGMDGPBKKFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMNOEMEGDI_GET_UPGRADEAVATARSERVICE_OFFSET))(this);
		}

		::System::Void set_UpgradeAvatarService(::CGMDGPBKKFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGMDGPBKKFD*))((::PBYTE)hIl2Cpp + DMMNOEMEGDI_SET_UPGRADEAVATARSERVICE_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* ConvertToUpgrade(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + DMMNOEMEGDI_CONVERTTOUPGRADE_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* ConvertToOrigin(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + DMMNOEMEGDI_CONVERTTOORIGIN_OFFSET))(this, a1);
		}

		::System::Boolean CheckPartIsNeedUpgrade(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::AvatarUpgradePart a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + DMMNOEMEGDI_CHECKPARTISNEEDUPGRADE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckTraceNodeIsUpgraded(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + DMMNOEMEGDI_CHECKTRACENODEISUPGRADED_OFFSET))(this, a1, a2);
		}

	};
