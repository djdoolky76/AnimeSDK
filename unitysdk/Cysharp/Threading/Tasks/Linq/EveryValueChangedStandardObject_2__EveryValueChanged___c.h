#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int EveryValueChangedStandardObject_2__EveryValueChanged___c_TypeDefinitionIndex = 45720;

	template <typename T1, typename T2>
	class EveryValueChangedStandardObject_2__EveryValueChanged___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c")->GetStaticField(0x0);
		}

	};
}
