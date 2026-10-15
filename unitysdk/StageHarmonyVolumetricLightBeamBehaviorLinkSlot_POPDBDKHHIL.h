#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace VLB { class VolumetricLightBeam; }

#define STAGEHARMONYVOLUMETRICLIGHTBEAMBEHAVIORLINKSLOT_POPDBDKHHIL_CTOR_OFFSET UNITYSDK_OFFSET(0xE9982F0)

inline static constexpr unsigned int StageHarmonyVolumetricLightBeamBehaviorLinkSlot_POPDBDKHHIL_TypeDefinitionIndex = 47386;

	class StageHarmonyVolumetricLightBeamBehaviorLinkSlot_POPDBDKHHIL : public ::System::Object
	{
	public:
		::VLB::VolumetricLightBeam* JNDFNOIIIAG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYVOLUMETRICLIGHTBEAMBEHAVIORLINKSLOT_POPDBDKHHIL_CTOR_OFFSET))(this);
		}

	};
