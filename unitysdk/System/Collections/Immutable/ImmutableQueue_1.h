#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Immutable { template <typename T> class ImmutableQueue_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableStack_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableQueue_1_TypeDefinitionIndex = 6644;

	template <typename T>
	class ImmutableQueue_1 : public ::System::Object
	{
	public:
		::System::Collections::Immutable::ImmutableStack_1<T>* _backwards; // 0x0
		::System::Collections::Immutable::ImmutableStack_1<T>* _forwards; // 0x0
		::System::Collections::Immutable::ImmutableStack_1<T>* _backwardsReversed; // 0x0
		static ::System::Collections::Immutable::ImmutableQueue_1<T>** StaticGet_s_EmptyField()
		{
			return (::System::Collections::Immutable::ImmutableQueue_1<T>**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableQueue`1")->GetStaticField(0x0);
		}

	};
}
