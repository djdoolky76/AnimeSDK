#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiMeshSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPolyMeshSample.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESH_GETSUMMARY_OFFSET UNITYSDK_OFFSET(0x3F28500)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESH_GET_SAMPLE_OFFSET UNITYSDK_OFFSET(0x3F28480)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESH_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E590AC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESH_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E5872B0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPolyMesh_TypeDefinitionIndex = 46858;

	struct alignas(4) aiPolyMesh
	{
		::System::IntPtr self; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::aiSchema schema; // 0x10
		/*
		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESH_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSchema op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESH_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample get_sample()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESH_GET_SAMPLE_OFFSET))(this);
		}

		::System::Void GetSummary(::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESH_GETSUMMARY_OFFSET))(this, a1);
		}

	};
}
