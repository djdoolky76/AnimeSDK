#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions___c__32_1_TypeDefinitionIndex = 38411;

	template <typename T>
	class UniTaskExtensions___c__32_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c__32`1")->GetStaticField(0x0);
		}

		static ::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>** StaticGet___9__32_0()
		{
			return (::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c__32`1")->GetStaticField(0x0);
		}

	};
}
