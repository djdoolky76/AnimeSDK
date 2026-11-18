#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickTime.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class TickFunction_1; }
namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_Node_TypeDefinitionIndex = 8737;

	template <typename T>
	struct alignas(8) TickCollector_1_Node
	{
		static ::System::Object** StaticGet_Null()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TickCollector_1_Node_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Foundation::TickTime Time; // 0x0
		::Foundation::TickFunction_1<T>* Function; // 0x0
		::System::Int32 _nodeIndex; // 0x0
		::System::Object* _PreviousTimeNode_k__BackingField; // 0x0
		::System::Object* _NextTimeNode_k__BackingField; // 0x0
		::System::Object* _PreviousFunctionNode_k__BackingField; // 0x0
		::System::Object* _NextFunctionNode_k__BackingField; // 0x0
	};
}
