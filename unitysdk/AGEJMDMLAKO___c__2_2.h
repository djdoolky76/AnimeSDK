#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

	template <typename T1, typename T2>
	class AGEJMDMLAKO___c__2_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c__2`2")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Action*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Action*, ::UnityEngine::Events::UnityAction*>**)UnitySDK::FromName("", "<>c__2`2")->GetStaticField(0x0);
		}

	};
