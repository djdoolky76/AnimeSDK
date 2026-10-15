#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3, typename T4> class UnityAction_4; }

inline static constexpr unsigned int AGEJMDMLAKO___c__4_4_TypeDefinitionIndex = 49988;

	template <typename T1, typename T2, typename T3, typename T4>
	class AGEJMDMLAKO___c__4_4 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c__4`4")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Action_1<::System::ValueTuple_4<T1, T2, T3, T4>>*, ::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Action_1<::System::ValueTuple_4<T1, T2, T3, T4>>*, ::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*>**)UnitySDK::FromName("", "<>c__4`4")->GetStaticField(0x0);
		}

	};
