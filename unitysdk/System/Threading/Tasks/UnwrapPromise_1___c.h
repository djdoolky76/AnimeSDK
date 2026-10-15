#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Threading { class WaitCallback; }

namespace System::Threading::Tasks
{
	template <typename T>
	class UnwrapPromise_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Threading.Tasks", "<>c")->GetStaticField(0x0);
		}

		static ::System::Threading::WaitCallback** StaticGet___9__8_0()
		{
			return (::System::Threading::WaitCallback**)UnitySDK::FromName("System.Threading.Tasks", "<>c")->GetStaticField(0x0);
		}

	};
}
