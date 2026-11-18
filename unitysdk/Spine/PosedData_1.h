#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace Spine
{
	inline static constexpr unsigned int PosedData_1_TypeDefinitionIndex = 33049;

	template <typename T>
	class PosedData_1 : public ::System::Object
	{
	public:
		::System::String* name; // 0x0
		T setupPose; // 0x0
		::System::Boolean skinRequired; // 0x0
	};
}
