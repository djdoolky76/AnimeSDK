#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_DKKEHHHIHLE_COMPARE_OFFSET UNITYSDK_OFFSET(0x7A9510)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_DKKEHHHIHLE_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x52F540)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_DKKEHHHIHLE_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x52F530)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_DKKEHHHIHLE__CTOR_OFFSET UNITYSDK_OFFSET(0x52F440)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameTwoPointsInCorePolicy_LevelSettlement_DKKEHHHIHLE_TypeDefinitionIndex = 61003;

	struct alignas(4) FrameTwoPointsInCorePolicy_LevelSettlement_DKKEHHHIHLE
	{
		::System::Single LKPMGBAAMMB; // 0x10
		::System::Single MKCPALBMJCK; // 0x14
		::System::Single JGKDPDBMGAP; // 0x18

		::System::Void _ctor(::UnityEngine::Quaternion FPNKBIPMBCA, ::System::Single KJHPKFCFAMP, ::System::Single BAFOIENGGLP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_DKKEHHHIHLE__CTOR_OFFSET))(this, FPNKBIPMBCA, KJHPKFCFAMP, BAFOIENGGLP);
		}

		::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> KILPCOMOCMD, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> BBCODANAFGI)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_DKKEHHHIHLE_COMPARE_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
		}

		::System::Double get_MinPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_DKKEHHHIHLE_GET_MINPITCH_OFFSET))(this);
		}

		::System::Double get_MaxPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_DKKEHHHIHLE_GET_MAXPITCH_OFFSET))(this);
		}
	};
}
