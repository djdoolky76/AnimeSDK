#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_AFPOMKDJNPO_OFFSET UNITYSDK_OFFSET(0xE8AC0B0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_ANGMBHGDBBD_OFFSET UNITYSDK_OFFSET(0xE8AC220)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE8ACA60)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_DCHOMCKDPLL_OFFSET UNITYSDK_OFFSET(0xE8ACA10)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_DFKIMPGDGML_OFFSET UNITYSDK_OFFSET(0xE8AC9C0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_EPHPOJNAABH_OFFSET UNITYSDK_OFFSET(0xE8AC010)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_FBPIMILLGHI_OFFSET UNITYSDK_OFFSET(0xE8AC1E0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_FORCESTARTTOOLTIP_OFFSET UNITYSDK_OFFSET(0xE8AC190)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_LOOPMOTIONLENGTH_OFFSET UNITYSDK_OFFSET(0xE8ABCC0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_MOTIONLENGTH_OFFSET UNITYSDK_OFFSET(0xE8ABD40)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_SOURCESTARTEXITTIME_OFFSET UNITYSDK_OFFSET(0xE8ABFF0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_SOURCETRANSITIONDURATION_OFFSET UNITYSDK_OFFSET(0xE8ABFD0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_STARTMOTIONLENGTH_OFFSET UNITYSDK_OFFSET(0xE8ABC40)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_IBNGNNGPDIH_OFFSET UNITYSDK_OFFSET(0xE8AC110)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_OFILDEPANFI_OFFSET UNITYSDK_OFFSET(0xE8AC3E0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_OGAOJDHFMEC_OFFSET UNITYSDK_OFFSET(0xE8AC1A0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_ONDDIEOJEHN_OFFSET UNITYSDK_OFFSET(0xE8AC150)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_PIKDKDJNDPP_OFFSET UNITYSDK_OFFSET(0xE8AC270)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_SET_SOURCESTARTEXITTIME_OFFSET UNITYSDK_OFFSET(0xE8AC000)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_SET_SOURCETRANSITIONDURATION_OFFSET UNITYSDK_OFFSET(0xE8ABFE0)

namespace RPGTools::Timeline
{
	class AniamtorControlConfig : public ::System::Object
	{
	public:
		::System::Boolean ShowMotionConflictedInfo; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* CharacterUniqueName; // 0x18
		::System::Single NormalizedTransitionDuration; // 0x20
		::System::Single NormalizedTimeStart; // 0x24
		::System::Boolean ForceStart; // 0x28
		::System::Boolean FastStartWhenNotForceStart; // 0x29
		::System::Boolean DisableAnimEvent; // 0x2A
		::System::Boolean KeepStoryMove; // 0x2B
		::System::UInt32 MotionID; // 0x2C
		::System::String* AvatarID; // 0x30
		::System::String* LayerName; // 0x38
		::System::Boolean ShowLayer; // 0x40
		::System::Byte _padding1[0x7];
		::System::String* TargetAvatarID; // 0x48
		::System::String* StartMotion; // 0x50
		::System::Single OverrideStartMotionExitNormalizedTime; // 0x58
		::System::Boolean OverrideMotionConfig; // 0x5C
		::System::Byte _padding2[0x3];
		::System::Single StartMotionSpeed; // 0x60
		::System::Single LoopMotionSpeed; // 0x64
		::System::Boolean HasStartExitTime; // 0x68
		::System::Boolean OverrideMotionTransitionInfo; // 0x69
		::System::Byte _padding3[0x2];
		::System::Single StartExitTime; // 0x6C
		::System::Single TransitionDuration; // 0x70
		::System::Single _SourceTransitionDuration_k__BackingField; // 0x74
		::System::Single _SourceStartExitTime_k__BackingField; // 0x78
		::System::Single _StartMotionClipLength; // 0x7C
		::System::Single _LoopMotionClipLength; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_CTOR_OFFSET))(this);
		}

		::System::Single get_StartMotionLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_STARTMOTIONLENGTH_OFFSET))(this);
		}

		::System::Single get_LoopMotionLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_LOOPMOTIONLENGTH_OFFSET))(this);
		}

		::System::Single get_MotionLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_MOTIONLENGTH_OFFSET))(this);
		}

		::System::Single get_SourceTransitionDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_SOURCETRANSITIONDURATION_OFFSET))(this);
		}

		::System::Void set_SourceTransitionDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_SET_SOURCETRANSITIONDURATION_OFFSET))(this, a1);
		}

		::System::Single get_SourceStartExitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_SOURCESTARTEXITTIME_OFFSET))(this);
		}

		::System::Void set_SourceStartExitTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_SET_SOURCESTARTEXITTIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* EPHPOJNAABH()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_EPHPOJNAABH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* AFPOMKDJNPO()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_AFPOMKDJNPO_OFFSET))(this);
		}

		::System::Void IBNGNNGPDIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_IBNGNNGPDIH_OFFSET))(this);
		}

		::System::Void ONDDIEOJEHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_ONDDIEOJEHN_OFFSET))(this);
		}

		::System::String* get_ForceStartToolTip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_FORCESTARTTOOLTIP_OFFSET))(this);
		}

		::System::Boolean OGAOJDHFMEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_OGAOJDHFMEC_OFFSET))(this);
		}

		::System::Boolean FBPIMILLGHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_FBPIMILLGHI_OFFSET))(this);
		}

		::System::Void ANGMBHGDBBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_ANGMBHGDBBD_OFFSET))(this);
		}

		::System::UInt32 DFKIMPGDGML(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_DFKIMPGDGML_OFFSET))(this, a1);
		}

		::System::String* PIKDKDJNDPP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_PIKDKDJNDPP_OFFSET))(this);
		}

		::System::Void DCHOMCKDPLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_DCHOMCKDPLL_OFFSET))(this);
		}

		::System::Void OFILDEPANFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_OFILDEPANFI_OFFSET))(this);
		}

	};
}
