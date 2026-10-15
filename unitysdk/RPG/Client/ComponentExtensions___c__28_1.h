#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Component; }

namespace RPG::Client
{
	template <typename T>
	class ComponentExtensions___c__28_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c__28`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<::UnityEngine::Component*, T>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::UnityEngine::Component*, T>**)UnitySDK::FromName("RPG.Client", "<>c__28`1")->GetStaticField(0x0);
		}

	};
}
