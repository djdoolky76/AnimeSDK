#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int Graph_BinarySerializer___c__7_1_TypeDefinitionIndex = 30368;

	template <typename T>
	class Graph_BinarySerializer___c__7_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer___c__7_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::String*>, ::System::Object*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::String*>, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer___c__7_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__7_1()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer___c__7_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
