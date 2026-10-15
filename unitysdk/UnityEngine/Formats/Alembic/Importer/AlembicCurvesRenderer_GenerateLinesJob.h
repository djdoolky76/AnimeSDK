#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATELINESJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3C5F7E0)

namespace UnityEngine::Formats::Alembic::Importer
{
	struct alignas(8) AlembicCurvesRenderer_GenerateLinesJob
	{
		::Unity::Collections::NativeArray_1<::System::Int32> indices; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> particleTangent; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> particleUV; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> curveCounts; // 0x40
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> strideArray; // 0x50
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> vertices; // 0x60
		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATELINESJOB_EXECUTE_OFFSET))(this, a1);
		}

	};
}
