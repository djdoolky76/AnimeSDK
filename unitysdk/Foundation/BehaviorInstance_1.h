#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EBehaviorStatus.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int BehaviorInstance_1_TypeDefinitionIndex = 8920;

	template <typename T>
	class BehaviorInstance_1 : public ::System::Object
	{
	public:
		::System::Double _delayTime; // 0x0
		::System::Double _blendInTime; // 0x0
		::System::Double _activeTime; // 0x0
		::System::Double _blendOutTime; // 0x0
		::System::Double _createTime; // 0x0
		::System::Object* _finishOperation; // 0x0
		::Foundation::EBehaviorStatus _status; // 0x0
		::System::Double _timeSinceCreation; // 0x0
		::Foundation::Variable_2<T, ::System::Double> _data; // 0x0
	};
}
