#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitUntilPromise_1___c_TypeDefinitionIndex = 38255;

	template <typename T>
	class UniTask_WaitUntilPromise_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__12_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x0);
		}

	};
}
