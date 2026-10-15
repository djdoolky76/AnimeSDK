#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	struct alignas(4) RPGGrassSetting
	{
		::System::Int32 MaxInstancesPerLeafNode; // 0x10
		::System::Int32 HierachicalTreeSplitFactor; // 0x14
		::System::Int32 MaxInstancesPerLeafNodeNonGrass; // 0x18
		::System::Int32 HierachicalTreeSplitFactorNonGrass; // 0x1C
		::System::Single GrassOcclusionSize; // 0x20
		::System::Boolean EnableInOutFade; // 0x24
		::System::Boolean EnableGrassLodFade; // 0x25
		::System::Boolean EnableGrass; // 0x26
		::System::Byte _padding0[0x1];
		::System::Single OverallDensityFactor; // 0x28
		::System::Boolean EnableGrassDensityReduce; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Single GrassMaxDistance; // 0x30
		::System::Single GrassConstantDensityRangeFactor; // 0x34
		::System::Single GrassDensityReduceFactor; // 0x38
		::System::Boolean EnableLodVisible; // 0x3C
	};
}
