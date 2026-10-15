#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define RPG_CUSTOMRP_VOXELBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0xE496F30)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VoxelBlock_TypeDefinitionIndex = 51851;

	class VoxelBlock : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* m_Data; // 0x10
		::UnityEngine::Vector3Int m_LowerLeftCoordinate; // 0x18
		::System::Int32 m_GridSize; // 0x24
		// static const ::System::Object BLOCK_SIZE; // 0x0
		// static const ::System::Object GRID_ELEMENT_COUNT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOXELBLOCK_CTOR_OFFSET))(this);
		}

	};
}
