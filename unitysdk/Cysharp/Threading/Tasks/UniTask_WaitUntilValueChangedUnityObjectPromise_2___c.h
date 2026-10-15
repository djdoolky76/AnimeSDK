#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitUntilValueChangedUnityObjectPromise_2___c_TypeDefinitionIndex = 38263;

	template <typename T1, typename T2>
	class UniTask_WaitUntilValueChangedUnityObjectPromise_2___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x0);
		}

	};
}
