#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFX/LightPositionMode.h"
#include "unitysdk/RPGTools/Timeline/VFX/LightTargetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFX_VOLUMELIGHTBLOOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE958830)

namespace RPGTools::Timeline::VFX
{
	class VolumeLightBloomConfig : public ::System::Object
	{
	public:
		::RPGTools::Timeline::VFX::LightPositionMode PositionMode; // 0x10
		::System::Boolean DestroyOnClipEnd; // 0x14
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 Position; // 0x18
		::RPGTools::Timeline::VFX::LightTargetType TargetType; // 0x24
		::System::String* CharacterUniqueName; // 0x28
		::System::String* AttachPoint; // 0x30
		::UnityEngine::Vector3 Offset; // 0x38
		::System::Byte _padding1[0x4];
		::System::String* AreaName; // 0x48
		::System::String* AnchorName; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VOLUMELIGHTBLOOMCONFIG_CTOR_OFFSET))(this);
		}

	};
}
