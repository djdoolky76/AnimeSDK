#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarGrowthGuide; }
namespace RPG::Client { class LightConeGrowthGuide; }
namespace RPG::Client { class RelicGrowthGuide; }
namespace RPG::Client { class SkillTreeGrowthGuide; }

#define RPG_CLIENT_GROWTHGUIDEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDD0EDB0)
#define RPG_CLIENT_GROWTHGUIDEDATA_GET_AVATARGUIDE_OFFSET UNITYSDK_OFFSET(0xDD0EE00)
#define RPG_CLIENT_GROWTHGUIDEDATA_GET_LIGHTCONEGUIDE_OFFSET UNITYSDK_OFFSET(0xDD0EE10)
#define RPG_CLIENT_GROWTHGUIDEDATA_GET_RELICGUIDE_OFFSET UNITYSDK_OFFSET(0xDD0EE30)
#define RPG_CLIENT_GROWTHGUIDEDATA_GET_SKILLTREEGUIDE_OFFSET UNITYSDK_OFFSET(0xDD0EE20)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthGuideData_TypeDefinitionIndex = 67463;

	class GrowthGuideData : public ::System::Object
	{
	public:
		::RPG::Client::AvatarGrowthGuide* _AvatarGuide_k__BackingField; // 0x10
		::RPG::Client::LightConeGrowthGuide* _LightConeGuide_k__BackingField; // 0x18
		::RPG::Client::RelicGrowthGuide* _RelicGuide_k__BackingField; // 0x20
		::RPG::Client::SkillTreeGrowthGuide* _SkillTreeGuide_k__BackingField; // 0x28
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHGUIDEDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarGrowthGuide* get_AvatarGuide()
		{
			return ((::RPG::Client::AvatarGrowthGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHGUIDEDATA_GET_AVATARGUIDE_OFFSET))(this);
		}

		::RPG::Client::LightConeGrowthGuide* get_LightConeGuide()
		{
			return ((::RPG::Client::LightConeGrowthGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHGUIDEDATA_GET_LIGHTCONEGUIDE_OFFSET))(this);
		}

		::RPG::Client::SkillTreeGrowthGuide* get_SkillTreeGuide()
		{
			return ((::RPG::Client::SkillTreeGrowthGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHGUIDEDATA_GET_SKILLTREEGUIDE_OFFSET))(this);
		}

		::RPG::Client::RelicGrowthGuide* get_RelicGuide()
		{
			return ((::RPG::Client::RelicGrowthGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHGUIDEDATA_GET_RELICGUIDE_OFFSET))(this);
		}

	};
}
