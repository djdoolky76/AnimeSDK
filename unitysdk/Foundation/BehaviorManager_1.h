#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITimestamp; }
namespace Foundation { template <typename T> class IBehaviorBlender_1; }

namespace Foundation
{
	inline static constexpr unsigned int BehaviorManager_1_TypeDefinitionIndex = 8985;

	template <typename T>
	class BehaviorManager_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _activeInstances; // 0x0
		::System::Int32 _freeSlot; // 0x0
		::System::Int32 _activeCount; // 0x0
		::System::Int32 _activeIndex; // 0x0
		T _data; // 0x0
		::Foundation::IBehaviorBlender_1<T>* _blender; // 0x0
		::Foundation::Variable_2<T, ::System::Double> _defaultData; // 0x0
		::Foundation::ITimestamp* _timestamp; // 0x0
	};
}
