#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1___c_TypeDefinitionIndex = 39519;

	template <typename T>
	class Promise_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__50_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__50_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>c")->GetStaticField(0x0);
		}

	};
}
