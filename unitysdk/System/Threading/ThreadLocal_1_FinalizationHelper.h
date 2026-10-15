#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Threading
{
	template <typename T>
	class ThreadLocal_1_FinalizationHelper : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* SlotArray; // 0x0
		::System::Boolean m_trackAllValues; // 0x0
	};
}
