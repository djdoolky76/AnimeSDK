#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Tuple; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::Promises
{
	template <typename T1, typename T2, typename T3>
	class PromiseHelpers___c__1_3 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Promises", "<>c__1`3")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Tuple*, ::System::Tuple*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Tuple*, ::System::Tuple*>**)UnitySDK::FromName("RPG.Client.Promises", "<>c__1`3")->GetStaticField(0x0);
		}

	};
}
