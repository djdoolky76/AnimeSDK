#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Function/Sinusoidal.h"
#include "unitysdk/Foundation/Function/WithConstant_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CAMERASPACEVECTORPROXYWITHXZ_CREATE_OFFSET UNITYSDK_OFFSET(0x1F2F4AF0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CAMERASPACEVECTORPROXYWITHXZ__CTOR_OFFSET UNITYSDK_OFFSET(0x9660F0)

namespace PipelineCamera::Data
{
	inline static constexpr unsigned int LookAtInCore_ByRotationY_CameraSpaceVectorProxyWithXZ_TypeDefinitionIndex = 36437;

	struct alignas(8) LookAtInCore_ByRotationY_CameraSpaceVectorProxyWithXZ
	{
		::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> Right; // 0x10
		::System::Byte _padding0[0x28];
		::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> Forward; // 0x40
		::System::Byte _padding1[0x28];
		::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> Up; // 0x70

		::System::Void _ctor(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> right, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> forward, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> up)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CAMERASPACEVECTORPROXYWITHXZ__CTOR_OFFSET))(this, right, forward, up);
		}

		/*
		static ::PipelineCamera::Data::LookAtInCore_ByRotationY_CameraSpaceVectorProxyWithXZ Create(::UnityEngine::Vector3& worldSpaceVector, ::System::Single pitch, ::System::Single roll)
		{
			return ((::PipelineCamera::Data::LookAtInCore_ByRotationY_CameraSpaceVectorProxyWithXZ(*)(::UnityEngine::Vector3&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CAMERASPACEVECTORPROXYWITHXZ_CREATE_OFFSET))(worldSpaceVector, pitch, roll);
		}
		*/
	};
}
