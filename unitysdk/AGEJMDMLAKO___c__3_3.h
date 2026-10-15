#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3> class UnityAction_3; }

inline static constexpr unsigned int AGEJMDMLAKO___c__3_3_TypeDefinitionIndex = 49987;

	template <typename T1, typename T2, typename T3>
	class AGEJMDMLAKO___c__3_3 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c__3`3")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Action_1<::System::ValueTuple_3<T1, T2, T3>>*, ::UnityEngine::Events::UnityAction_3<T1, T2, T3>*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Action_1<::System::ValueTuple_3<T1, T2, T3>>*, ::UnityEngine::Events::UnityAction_3<T1, T2, T3>*>**)UnitySDK::FromName("", "<>c__3`3")->GetStaticField(0x0);
		}

	};
