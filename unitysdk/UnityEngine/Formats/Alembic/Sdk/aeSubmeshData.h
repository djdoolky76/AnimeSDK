#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeTopology.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_INDEXES_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0x6C28C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x3D73BE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_INDEXES_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0x3EF7FD0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aeSubmeshData_TypeDefinitionIndex = 46815;

	struct alignas(4) aeSubmeshData
	{
		::System::IntPtr _indexes_k__BackingField; // 0x10
		::System::Int32 _indexCount_k__BackingField; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::aeTopology _topology_k__BackingField; // 0x1C
		::System::IntPtr get_indexes()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_INDEXES_OFFSET))(this);
		}

		::System::Void set_indexes(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_INDEXES_OFFSET))(this, a1);
		}

		::System::Int32 get_indexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_INDEXCOUNT_OFFSET))(this);
		}

		::System::Void set_indexCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_INDEXCOUNT_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::aeTopology get_topology()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeTopology(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_TOPOLOGY_OFFSET))(this);
		}

		::System::Void set_topology(::UnityEngine::Formats::Alembic::Sdk::aeTopology a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aeTopology))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_TOPOLOGY_OFFSET))(this, a1);
		}

	};
}
