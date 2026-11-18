#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StraightPathFlags.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Experimental/AI/NavMeshLocation.h"
#include "unitysdk/UnityEngine/Experimental/AI/NavMeshQuery.h"
#include "unitysdk/UnityEngine/Experimental/AI/PolygonId.h"

#define NPCCROWD_ABILITY_FNPCNAVMESHDATA_DISPOSENAVMESHQUERY_OFFSET UNITYSDK_OFFSET(0x7A4650)
#define NPCCROWD_ABILITY_FNPCNAVMESHDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7A4640)
#define NPCCROWD_ABILITY_FNPCNAVMESHDATA_ENSURENAVMESHQUERY_OFFSET UNITYSDK_OFFSET(0x7A46B0)
#define NPCCROWD_ABILITY_FNPCNAVMESHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x7A4630)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCNavmeshData_TypeDefinitionIndex = 57811;

	struct alignas(8) FNPCNavmeshData
	{
		// static const ::System::Int32 MaxPolygonCnt = 0x96; // 0x0
		::UnityEngine::Experimental::AI::NavMeshQuery query; // 0x10
		::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::AI::PolygonId> polygons; // 0x18
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::AI::NavMeshLocation> straightPath; // 0x28
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::StraightPathFlags> straightPathFlags; // 0x38
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::System::Single> vertexSide; // 0x48
		::System::Byte _padding3[0x8];
		::System::Boolean inited; // 0x58

		::System::Void _ctor(::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHDATA__CTOR_OFFSET))(this, init);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void DisposeNavMeshQuery()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHDATA_DISPOSENAVMESHQUERY_OFFSET))(this);
		}

		::System::Void EnsureNavMeshQuery()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHDATA_ENSURENAVMESHQUERY_OFFSET))(this);
		}
	};
}
