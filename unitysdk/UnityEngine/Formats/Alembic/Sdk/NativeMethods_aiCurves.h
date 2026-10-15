#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCurvesSample.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVES_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x1F17CCB0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	struct alignas(4) NativeMethods_aiCurves
	{
		static ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample aiSchemaGetSample(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVES_AISCHEMAGETSAMPLE_OFFSET))(a1);
		}

	};
}
