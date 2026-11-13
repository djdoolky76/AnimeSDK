#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define KFOLFICBCEL_CTOR_OFFSET UNITYSDK_OFFSET(0x3DD9BA0)
#define KFOLFICBCEL_GET_ROUTEBGCURVEEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define KFOLFICBCEL_GET_ROUTEBGCURVEEFFECTSPEEDLEVEL1_OFFSET UNITYSDK_OFFSET(0xFDCAE0)
#define KFOLFICBCEL_GET_ROUTEBGCURVEEFFECTSPEEDLEVEL2_OFFSET UNITYSDK_OFFSET(0xFDD0D0)
#define KFOLFICBCEL_GET_ROUTEBGCURVEEFFECTSPEEDLEVEL3_OFFSET UNITYSDK_OFFSET(0xAECE00)

inline static constexpr unsigned int KFOLFICBCEL_TypeDefinitionIndex = 81570;

	struct alignas(8) KFOLFICBCEL
	{
		::System::String* _RouteBgCurveEffectPath_k__BackingField; // 0x10
		::System::Single _RouteBgCurveEffectSpeedLevel1_k__BackingField; // 0x18
		::System::Single _RouteBgCurveEffectSpeedLevel2_k__BackingField; // 0x1C
		::System::Single _RouteBgCurveEffectSpeedLevel3_k__BackingField; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KFOLFICBCEL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_RouteBgCurveEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOLFICBCEL_GET_ROUTEBGCURVEEFFECTPATH_OFFSET))(this);
		}

		::System::Single get_RouteBgCurveEffectSpeedLevel1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOLFICBCEL_GET_ROUTEBGCURVEEFFECTSPEEDLEVEL1_OFFSET))(this);
		}

		::System::Single get_RouteBgCurveEffectSpeedLevel2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOLFICBCEL_GET_ROUTEBGCURVEEFFECTSPEEDLEVEL2_OFFSET))(this);
		}

		::System::Single get_RouteBgCurveEffectSpeedLevel3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOLFICBCEL_GET_ROUTEBGCURVEEFFECTSPEEDLEVEL3_OFFSET))(this);
		}

	};
