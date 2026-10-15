#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPolyMeshSample.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESH_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x1F17CDB0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	struct alignas(4) NativeMethods_aiPolyMesh
	{
		static ::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample aiSchemaGetSample(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESH_AISCHEMAGETSAMPLE_OFFSET))(a1);
		}

	};
}
