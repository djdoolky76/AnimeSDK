#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Immutable { class ImmutableStack; }

namespace System::Collections::Immutable
{
	template <typename T>
	class ImmutableStack_1 : public ::System::Object
	{
	public:
		T _head; // 0x0
		::System::Collections::Immutable::ImmutableStack* _tail; // 0x0
		static ::System::Collections::Immutable::ImmutableStack** StaticGet_s_EmptyField()
		{
			return (::System::Collections::Immutable::ImmutableStack**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableStack`1")->GetStaticField(0x0);
		}

	};
}
