#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_NODECOUNTERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF03540)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest_NodeCounterState_TypeDefinitionIndex = 8120;

	class AssetLoadTaskTest_NodeCounterState : public ::System::Object
	{
	public:
		::System::Int32 StartCount; // 0x10
		::System::Int32 Value; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_NODECOUNTERSTATE__CTOR_OFFSET))(this);
		}
	};
}
