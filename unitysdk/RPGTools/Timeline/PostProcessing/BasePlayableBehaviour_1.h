#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour.h"

namespace RPGTools::Timeline::PostProcessing
{
	template <typename T>
	class BasePlayableBehaviour_1 : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour
	{
	public:
		T _Comp; // 0x0
	};
}
