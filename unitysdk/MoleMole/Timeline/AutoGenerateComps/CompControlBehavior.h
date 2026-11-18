#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline::AutoGenerateComps { class CompTimelineBaseConfig; }

#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR_GET_COMPTIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0x198D54F0)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x198D5500)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x198D5540)

namespace MoleMole::Timeline::AutoGenerateComps
{
	inline static constexpr unsigned int CompControlBehavior_TypeDefinitionIndex = 44326;

	class CompControlBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* _CompTimelineConfig_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR__CTOR_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* get_CompTimelineConfig()
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR_GET_COMPTIMELINECONFIG_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* NMBJIKEJKCK()
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR_NMBJIKEJKCK_OFFSET))(this);
		}
	};
}
