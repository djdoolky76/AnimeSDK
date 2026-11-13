#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TriggerEffectOnAnchor; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TRIGGEREFFECTONANCHORDATA_ADGHAIFHEFD_OFFSET UNITYSDK_OFFSET(0x1DA300B0)
#define RPGTOOLS_TIMELINE_TRIGGEREFFECTONANCHORDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA30170)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TriggerEffectOnAnchorData_TypeDefinitionIndex = 49379;

	class TriggerEffectOnAnchorData : public ::System::Object
	{
	public:
		::System::String* AreaName; // 0x10
		::System::String* AnchorName; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueEffectName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGEREFFECTONANCHORDATA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::TriggerEffectOnAnchor* ADGHAIFHEFD()
		{
			return ((::RPG::GameCore::TriggerEffectOnAnchor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGEREFFECTONANCHORDATA_ADGHAIFHEFD_OFFSET))(this);
		}

	};
}
