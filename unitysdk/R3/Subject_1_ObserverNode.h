#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { template <typename T> class Observer_1; }
namespace R3 { template <typename T> class Subject_1; }
namespace System { class Object; }

namespace R3
{
	template <typename T>
	class Subject_1_ObserverNode : public ::System::Object
	{
	public:
		::R3::Observer_1<T>* Observer; // 0x0
		::R3::Subject_1<T>* parent; // 0x0
		::System::Object* _Previous_k__BackingField; // 0x0
		::System::Object* _Next_k__BackingField; // 0x0
		::System::UInt64 Version; // 0x0
	};
}
