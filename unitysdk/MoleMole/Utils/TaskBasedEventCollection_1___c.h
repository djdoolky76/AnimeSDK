#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class ITypeErasedCompletionSource; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

namespace MoleMole::Utils
{
	inline static constexpr unsigned int TaskBasedEventCollection_1___c_TypeDefinitionIndex = 60411;

	template <typename T>
	class TaskBasedEventCollection_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TaskBasedEventCollection_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*, ::MoleMole::Utils::ITypeErasedCompletionSource*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*, ::MoleMole::Utils::ITypeErasedCompletionSource*>**)Il2CppClass::FromTypeDefinitionIndex(TaskBasedEventCollection_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
