#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTask_1_TypeDefinitionIndex = 8075;

	template <typename T>
	class AssetLoadTask_1 : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x0
		::System::Boolean _captureResult; // 0x0
	};
}
