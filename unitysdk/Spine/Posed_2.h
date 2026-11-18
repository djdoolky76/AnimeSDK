#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine
{
	inline static constexpr unsigned int Posed_2_TypeDefinitionIndex = 33045;

	template <typename T1, typename T2>
	class Posed_2 : public ::System::Object
	{
	public:
		T1 data; // 0x0
		T2 pose; // 0x0
		T2 constrainedPose; // 0x0
		T2 appliedPose; // 0x0
	};
}
