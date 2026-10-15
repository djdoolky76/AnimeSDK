#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Immutable { template <typename T> class ImmutableStack_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableStack_1_TypeDefinitionIndex = 6658;

	template <typename T>
	class ImmutableStack_1 : public ::System::Object
	{
	public:
		T _head; // 0x0
		::System::Collections::Immutable::ImmutableStack_1<T>* _tail; // 0x0
		static ::System::Collections::Immutable::ImmutableStack_1<T>** StaticGet_s_EmptyField()
		{
			return (::System::Collections::Immutable::ImmutableStack_1<T>**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableStack`1")->GetStaticField(0x0);
		}

	};
}
