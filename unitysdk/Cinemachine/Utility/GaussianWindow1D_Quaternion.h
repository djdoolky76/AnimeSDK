#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION_COMPUTE_OFFSET UNITYSDK_OFFSET(0x166B0F70)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION_CTOR_OFFSET UNITYSDK_OFFSET(0x166B0F20)

namespace Cinemachine::Utility
{
	class GaussianWindow1D_Quaternion
	{
	public:
		::System::Void _ctor(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion Compute(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION_COMPUTE_OFFSET))(this, a1);
		}

	};
}
