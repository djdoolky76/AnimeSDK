#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/ChunkComponentData_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ComponentChuckData_1_TypeDefinitionIndex = 36396;

	template <typename T>
	class ComponentChuckData_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 ChunkSize = 0x10000; // 0x0
		::PVOID _chunk; // 0x0
		::System::Int32 _numInstances; // 0x0
		::System::Int32 _serialNumber; // 0x0
		::PipelineCamera::DataOrientated::ChunkComponentData_1<T> _chunkData; // 0x0
	};
}
