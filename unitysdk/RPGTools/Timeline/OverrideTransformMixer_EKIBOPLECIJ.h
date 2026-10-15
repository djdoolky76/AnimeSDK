#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/OverrideTransform_ControlType.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::Timeline { class OverrideTransform; }

#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_EKIBOPLECIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE912C80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int OverrideTransformMixer_EKIBOPLECIJ_TypeDefinitionIndex = 47997;

	class OverrideTransformMixer_EKIBOPLECIJ : public ::System::Object
	{
	public:
		::RPGTools::Timeline::OverrideTransform* DEMFJAMDLFP; // 0x10
		::RPGTools::Timeline::OverrideTransform_ControlType LGIPANDLPFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_EKIBOPLECIJ_CTOR_OFFSET))(this);
		}

	};
}
