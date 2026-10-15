#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitUntilValueChangedStandardObjectPromise_2___c_TypeDefinitionIndex = 38265;

	template <typename T1, typename T2>
	class UniTask_WaitUntilValueChangedStandardObjectPromise_2___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x0);
		}

	};
}
