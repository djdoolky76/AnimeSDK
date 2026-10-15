#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAnyPromise_1___c_TypeDefinitionIndex = 38329;

	template <typename T>
	class UniTask_WhenAnyPromise_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x0);
		}

	};
}
