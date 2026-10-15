#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }

inline static constexpr unsigned int AGEJMDMLAKO___c__2_2_TypeDefinitionIndex = 49986;

	template <typename T1, typename T2>
	class AGEJMDMLAKO___c__2_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c__2`2")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Action_1<::System::ValueTuple_2<T1, T2>>*, ::UnityEngine::Events::UnityAction_2<T1, T2>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Action_1<::System::ValueTuple_2<T1, T2>>*, ::UnityEngine::Events::UnityAction_2<T1, T2>*>**)UnitySDK::FromName("", "<>c__2`2")->GetStaticField(0x0);
		}

	};
