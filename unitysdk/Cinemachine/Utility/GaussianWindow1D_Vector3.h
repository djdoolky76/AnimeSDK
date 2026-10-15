#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3_COMPUTE_OFFSET UNITYSDK_OFFSET(0x166B1440)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3_CTOR_OFFSET UNITYSDK_OFFSET(0x166B13F0)

namespace Cinemachine::Utility
{
	class GaussianWindow1D_Vector3
	{
	public:
		::System::Void _ctor(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Compute(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3_COMPUTE_OFFSET))(this, a1);
		}

	};
}
