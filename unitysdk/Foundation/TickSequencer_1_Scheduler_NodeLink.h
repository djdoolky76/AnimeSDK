#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_Scheduler_NodeLink_TypeDefinitionIndex = 8807;

	template <typename T>
	struct alignas(4) TickSequencer_1_Scheduler_NodeLink
	{
		static ::System::Object** StaticGet_Null()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TickSequencer_1_Scheduler_NodeLink_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 _index; // 0x0
	};
}
