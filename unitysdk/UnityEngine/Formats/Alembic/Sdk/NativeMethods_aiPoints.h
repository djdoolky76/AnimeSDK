#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPointsSample.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTS_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x1F17CD30)

namespace UnityEngine::Formats::Alembic::Sdk
{
	struct alignas(4) NativeMethods_aiPoints
	{
		static ::UnityEngine::Formats::Alembic::Sdk::aiPointsSample aiSchemaGetSample(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPointsSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTS_AISCHEMAGETSAMPLE_OFFSET))(a1);
		}

	};
}
