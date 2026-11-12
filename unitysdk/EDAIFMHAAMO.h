#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define EDAIFMHAAMO_CTOR_OFFSET UNITYSDK_OFFSET(0x280F940)
#define EDAIFMHAAMO_GET_BOARDINGATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0x94F0)
#define EDAIFMHAAMO_GET_BOARDINGEFFECTFINISHDELAY_OFFSET UNITYSDK_OFFSET(0x280FA00)
#define EDAIFMHAAMO_GET_BOARDINGFLIGHTDURATION_OFFSET UNITYSDK_OFFSET(0x280F9F0)
#define EDAIFMHAAMO_GET_BOARDINGSWITCHINEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1D30)
#define EDAIFMHAAMO_GET_EXITATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xAD00)
#define EDAIFMHAAMO_GET_EXITCAMERABLENDTIME_OFFSET UNITYSDK_OFFSET(0x280FA20)
#define EDAIFMHAAMO_GET_EXITEFFECTFINISHDELAY_OFFSET UNITYSDK_OFFSET(0x280FA40)
#define EDAIFMHAAMO_GET_EXITFLIGHTDURATION_OFFSET UNITYSDK_OFFSET(0x280FA10)
#define EDAIFMHAAMO_GET_EXITPLAYERSHOWDELAY_OFFSET UNITYSDK_OFFSET(0x280FA30)
#define EDAIFMHAAMO_GET_EXITSWITCHOUTEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1D40)
#define EDAIFMHAAMO_GET_FLIGHTBEZIERHEIGHT_OFFSET UNITYSDK_OFFSET(0x280F9E0)
#define EDAIFMHAAMO_GET_SKIPBOARDING_OFFSET UNITYSDK_OFFSET(0x280FA50)
#define EDAIFMHAAMO_GET_TELEPORTEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x94D0)

inline static constexpr unsigned int EDAIFMHAAMO_TypeDefinitionIndex = 81546;

	struct alignas(8) EDAIFMHAAMO
	{
		::System::String* _BoardingSwitchInEffectPath_k__BackingField; // 0x10
		::System::String* _ExitSwitchOutEffectPath_k__BackingField; // 0x18
		::System::String* _TeleportEffectPath_k__BackingField; // 0x20
		::System::String* _BoardingAttachPointName_k__BackingField; // 0x28
		::System::String* _ExitAttachPointName_k__BackingField; // 0x30
		::System::Single _FlightBezierHeight_k__BackingField; // 0x38
		::System::Single _BoardingFlightDuration_k__BackingField; // 0x3C
		::System::Single _BoardingEffectFinishDelay_k__BackingField; // 0x40
		::System::Single _ExitFlightDuration_k__BackingField; // 0x44
		::System::Single _ExitCameraBlendTime_k__BackingField; // 0x48
		::System::Single _ExitPlayerShowDelay_k__BackingField; // 0x4C
		::System::Single _ExitEffectFinishDelay_k__BackingField; // 0x50
		::System::Boolean _SkipBoarding_k__BackingField; // 0x54
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::String* get_BoardingSwitchInEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_BOARDINGSWITCHINEFFECTPATH_OFFSET))(this);
		}

		::System::String* get_ExitSwitchOutEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_EXITSWITCHOUTEFFECTPATH_OFFSET))(this);
		}

		::System::String* get_TeleportEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_TELEPORTEFFECTPATH_OFFSET))(this);
		}

		::System::String* get_BoardingAttachPointName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_BOARDINGATTACHPOINTNAME_OFFSET))(this);
		}

		::System::String* get_ExitAttachPointName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_EXITATTACHPOINTNAME_OFFSET))(this);
		}

		::System::Single get_FlightBezierHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_FLIGHTBEZIERHEIGHT_OFFSET))(this);
		}

		::System::Single get_BoardingFlightDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_BOARDINGFLIGHTDURATION_OFFSET))(this);
		}

		::System::Single get_BoardingEffectFinishDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_BOARDINGEFFECTFINISHDELAY_OFFSET))(this);
		}

		::System::Single get_ExitFlightDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_EXITFLIGHTDURATION_OFFSET))(this);
		}

		::System::Single get_ExitCameraBlendTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_EXITCAMERABLENDTIME_OFFSET))(this);
		}

		::System::Single get_ExitPlayerShowDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_EXITPLAYERSHOWDELAY_OFFSET))(this);
		}

		::System::Single get_ExitEffectFinishDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_EXITEFFECTFINISHDELAY_OFFSET))(this);
		}

		::System::Boolean get_SkipBoarding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAIFMHAAMO_GET_SKIPBOARDING_OFFSET))(this);
		}

	};
