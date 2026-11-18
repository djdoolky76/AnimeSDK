#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_InternalSequenceVoStateRequestType_TypeDefinitionIndex = 66693;

	enum class ViewObjectManager_InternalSequenceVoStateRequestType : ::System::Int32
	{
		WRITE = 1,
		UNKNOWN = -1,
		READ = 0,
	};
}
