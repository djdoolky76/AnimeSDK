#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/B8AC70DD96553B07.h"

#define UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x41AF220)
#define UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_OFFSET UNITYSDK_OFFSET(0x41AF220)
#define UNITYENGINE_CONTACTFILTER2D_CREATELEGACYFILTER_OFFSET UNITYSDK_OFFSET(0x41AF260)
#define UNITYENGINE_CONTACTFILTER2D_SETDEPTH_OFFSET UNITYSDK_OFFSET(0x41AF370)
#define UNITYENGINE_CONTACTFILTER2D_SETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x41AF3C0)

namespace UnityEngine
{
	inline static constexpr unsigned int ContactFilter2D_TypeDefinitionIndex = 21374;

	struct alignas(4) ContactFilter2D
	{
		::System::Boolean useTriggers; // 0x10
		::System::Boolean useLayerMask; // 0x11
		::System::Boolean useDepth; // 0x12
		::System::Boolean useOutsideDepth; // 0x13
		::System::Boolean useNormalAngle; // 0x14
		::System::Boolean useOutsideNormalAngle; // 0x15
		::System::Byte _padding0[0x2];
		::UnityEngine::B8AC70DD96553B07 layerMask; // 0x18
		::System::Single minDepth; // 0x1C
		::System::Single maxDepth; // 0x20
		::System::Single minNormalAngle; // 0x24
		::System::Single maxNormalAngle; // 0x28

		/*
		static ::System::Void CheckConsistency_Injected(::UnityEngine::ContactFilter2D& EDB794C900A30CB0)
		{
			return ((::System::Void(*)(::UnityEngine::ContactFilter2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_INJECTED_OFFSET))(EDB794C900A30CB0);
		}
		*/

		/*
		static ::UnityEngine::ContactFilter2D CreateLegacyFilter(::System::Int32 ED6A79BC42F10D49, ::System::Single B2E3290230A54AB1, ::System::Single A6D90280DBE7846A)
		{
			return ((::UnityEngine::ContactFilter2D(*)(::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_CREATELEGACYFILTER_OFFSET))(ED6A79BC42F10D49, B2E3290230A54AB1, A6D90280DBE7846A);
		}
		*/

		::System::Void SetLayerMask(::UnityEngine::B8AC70DD96553B07 ED6A79BC42F10D49)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::B8AC70DD96553B07))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_SETLAYERMASK_OFFSET))(this, ED6A79BC42F10D49);
		}

		::System::Void CheckConsistency()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_OFFSET))(this);
		}

		::System::Void SetDepth(::System::Single B2E3290230A54AB1, ::System::Single A6D90280DBE7846A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_SETDEPTH_OFFSET))(this, B2E3290230A54AB1, A6D90280DBE7846A);
		}
	};
}
