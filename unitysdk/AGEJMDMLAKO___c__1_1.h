#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

inline static constexpr unsigned int AGEJMDMLAKO___c__1_1_TypeDefinitionIndex = 49985;

	template <typename T>
	class AGEJMDMLAKO___c__1_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c__1`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Action_1<T>*, ::UnityEngine::Events::UnityAction_1<T>*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Action_1<T>*, ::UnityEngine::Events::UnityAction_1<T>*>**)UnitySDK::FromName("", "<>c__1`1")->GetStaticField(0x0);
		}

	};
