#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeDataSourceType_TypeDefinitionIndex = 31126;

	enum class StateTreeDataSourceType : ::System::Byte
	{
		None = 0,
		GlobalInstanceData = 1,
		GlobalInstanceDataObject = 2,
		ActiveInstanceData = 3,
		ActiveInstanceDataObject = 4,
		SharedInstanceData = 5,
		SharedInstanceDataObject = 6,
		ContextData = 7,
		ExternalData = 8,
		GlobalParameterData = 9,
		SubtreeParameterData = 10,
		StateParameterData = 11,
	};
}
