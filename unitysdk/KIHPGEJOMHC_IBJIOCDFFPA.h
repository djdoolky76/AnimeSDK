#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KIHPGEJOMHC_IBJIOCDFFPA_CTOR_OFFSET UNITYSDK_OFFSET(0x14D60)
#define KIHPGEJOMHC_IBJIOCDFFPA_GET_CENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0x1D10)
#define KIHPGEJOMHC_IBJIOCDFFPA_GET_HALFHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D20)
#define KIHPGEJOMHC_IBJIOCDFFPA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1D00)
#define KIHPGEJOMHC_IBJIOCDFFPA_GJBEEFPDFFK_OFFSET UNITYSDK_OFFSET(0x14DF0)
#define KIHPGEJOMHC_IBJIOCDFFPA_KPALKHLMMPL_OFFSET UNITYSDK_OFFSET(0x14D70)

	struct alignas(4) KIHPGEJOMHC_IBJIOCDFFPA
	{
		::System::Single _Radius_k__BackingField; // 0x10
		::System::Single _CenterOffsetY_k__BackingField; // 0x14
		::System::Single _HalfHeight_k__BackingField; // 0x18
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IBJIOCDFFPA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IBJIOCDFFPA_GET_RADIUS_OFFSET))(this);
		}

		::System::Single get_CenterOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IBJIOCDFFPA_GET_CENTEROFFSETY_OFFSET))(this);
		}

		::System::Single get_HalfHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IBJIOCDFFPA_GET_HALFHEIGHT_OFFSET))(this);
		}

		::System::Single KPALKHLMMPL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IBJIOCDFFPA_KPALKHLMMPL_OFFSET))(this, a1);
		}

		::System::Single GJBEEFPDFFK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IBJIOCDFFPA_GJBEEFPDFFK_OFFSET))(this, a1);
		}

	};
