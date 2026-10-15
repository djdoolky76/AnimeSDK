#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Threading
{
	inline static constexpr unsigned int ThreadLocal_1_FinalizationHelper_TypeDefinitionIndex = 820;

	template <typename T>
	class ThreadLocal_1_FinalizationHelper : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* SlotArray; // 0x0
		::System::Boolean m_trackAllValues; // 0x0
	};
}
