#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_ANGMBHGDBBD_OFFSET UNITYSDK_OFFSET(0xE8B0450)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE8AE110)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_DFKIMPGDGML_OFFSET UNITYSDK_OFFSET(0xE8B0970)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_GET_LOOPMOTIONLENGTH_OFFSET UNITYSDK_OFFSET(0xE8B0400)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_GET_STARTMOTIONLENGTH_OFFSET UNITYSDK_OFFSET(0xE8B03F0)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_OFILDEPANFI_OFFSET UNITYSDK_OFFSET(0xE8B05E0)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_ONDDIEOJEHN_OFFSET UNITYSDK_OFFSET(0xE8B0410)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_PIKDKDJNDPP_OFFSET UNITYSDK_OFFSET(0xE8B04A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorStaticFrameConfig_TypeDefinitionIndex = 47856;

	class AnimatorStaticFrameConfig : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Boolean DisableAnimEvent; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 MotionID; // 0x1C
		::System::String* AvatarID; // 0x20
		::System::Single Normalize; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* TargetAvatarID; // 0x30
		::System::String* StartMotion; // 0x38
		::System::Single _StartMotionClipLength; // 0x40
		::System::Single _LoopMotionClipLength; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_CTOR_OFFSET))(this);
		}

		::System::Single get_StartMotionLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_GET_STARTMOTIONLENGTH_OFFSET))(this);
		}

		::System::Single get_LoopMotionLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_GET_LOOPMOTIONLENGTH_OFFSET))(this);
		}

		::System::Void ONDDIEOJEHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_ONDDIEOJEHN_OFFSET))(this);
		}

		::System::Void ANGMBHGDBBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_ANGMBHGDBBD_OFFSET))(this);
		}

		::System::UInt32 DFKIMPGDGML(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_DFKIMPGDGML_OFFSET))(this, a1);
		}

		::System::String* PIKDKDJNDPP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_PIKDKDJNDPP_OFFSET))(this);
		}

		::System::Void OFILDEPANFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMECONFIG_OFILDEPANFI_OFFSET))(this);
		}

	};
}
