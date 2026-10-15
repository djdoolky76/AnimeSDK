#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::Timeline { class AniamtorControlConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE8AD5F0)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE8AD630)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C__UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_B__6_0_OFFSET UNITYSDK_OFFSET(0xE8AD640)

namespace RPGTools::Timeline
{
	class AnimatorControlClip___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPGTools::Timeline::AniamtorControlConfig*, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPGTools::Timeline::AniamtorControlConfig*, ::System::String*>**)UnitySDK::FromName("RPGTools.Timeline", "<>c")->GetStaticField(0x6F850);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPGTools.Timeline", "<>c")->GetStaticField(0x6F858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C_CTOR_OFFSET))(this);
		}

		::System::String* _UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName_b__6_0(::RPGTools::Timeline::AniamtorControlConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::AniamtorControlConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP___C__UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_B__6_0_OFFSET))(this, a1);
		}

	};
}
