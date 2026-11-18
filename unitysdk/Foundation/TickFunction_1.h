#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ETickFunctionFlags.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class InternalTickData_1; }
namespace Foundation { template <typename T> class TickFunction_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickFunction_1_TypeDefinitionIndex = 9072;

	template <typename T>
	class TickFunction_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_GenMergeTickTime()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TickFunction_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet_GenNoMergeTickTime()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TickFunction_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		T TickGroup; // 0x0
		T EndTickGroup; // 0x0
		::System::Single TickInterval; // 0x0
		::Foundation::ETickFunctionFlags _flags; // 0x0
		::System::Collections::Generic::List_1<::Foundation::TickFunction_1<T>*>* Prerequisites; // 0x0
		::Foundation::InternalTickData_1<T>* InternalData; // 0x0
		::System::Boolean _isEnabled; // 0x0
	};
}
