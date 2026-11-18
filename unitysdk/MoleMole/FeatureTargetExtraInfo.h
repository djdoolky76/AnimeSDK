#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOMLOPBFHFD.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int FeatureTargetExtraInfo_TypeDefinitionIndex = 86656;

	struct alignas(8) FeatureTargetExtraInfo
	{
		::NOMLOPBFHFD Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Value; // 0x18
	};
}
