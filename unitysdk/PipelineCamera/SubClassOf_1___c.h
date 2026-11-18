#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class Assembly; }

namespace PipelineCamera
{
	inline static constexpr unsigned int SubClassOf_1___c_TypeDefinitionIndex = 36369;

	template <typename T>
	class SubClassOf_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SubClassOf_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>**)Il2CppClass::FromTypeDefinitionIndex(SubClassOf_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::Reflection::Assembly*, ::System::Type*, ::System::Object*>** StaticGet___9__0_1()
		{
			return (::System::Func_3<::System::Reflection::Assembly*, ::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SubClassOf_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SubClassOf_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Object*, ::System::Type*>** StaticGet___9__0_3()
		{
			return (::System::Func_2<::System::Object*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(SubClassOf_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
