#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Immutable { class ImmutableQueue; }
namespace System::Collections::Immutable { class ImmutableStack; }

namespace System::Collections::Immutable
{
	template <typename T>
	class ImmutableQueue_1 : public ::System::Object
	{
	public:
		::System::Collections::Immutable::ImmutableStack* _backwards; // 0x0
		::System::Collections::Immutable::ImmutableStack* _forwards; // 0x0
		::System::Collections::Immutable::ImmutableStack* _backwardsReversed; // 0x0
		static ::System::Collections::Immutable::ImmutableQueue** StaticGet_s_EmptyField()
		{
			return (::System::Collections::Immutable::ImmutableQueue**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableQueue`1")->GetStaticField(0x0);
		}

	};
}
