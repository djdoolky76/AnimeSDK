#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCameraSample.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICAMERA_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x1F17CC30)

namespace UnityEngine::Formats::Alembic::Sdk
{
	struct alignas(4) NativeMethods_aiCamera
	{
		static ::UnityEngine::Formats::Alembic::Sdk::aiCameraSample aiSchemaGetSample(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCameraSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICAMERA_AISCHEMAGETSAMPLE_OFFSET))(a1);
		}

	};
}
