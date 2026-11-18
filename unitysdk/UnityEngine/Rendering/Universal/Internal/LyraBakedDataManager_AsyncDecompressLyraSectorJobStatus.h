#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus_TypeDefinitionIndex = 26743;

	enum class LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus : ::System::Int32
	{
		kFinishedDecompressingDistanceFieldBlock = 4,
		kToDo = 0,
		kToDecompressingDistanceFieldBlock1 = 3,
		kFinishedBinaryDecompression = 1,
		kToDecompressingDistanceFieldBlock0 = 2,
	};
}
