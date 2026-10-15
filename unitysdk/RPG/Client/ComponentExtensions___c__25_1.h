#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Component; }

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentExtensions___c__25_1_TypeDefinitionIndex = 72774;

	template <typename T>
	class ComponentExtensions___c__25_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c__25`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<::UnityEngine::Component*, T>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::UnityEngine::Component*, T>**)UnitySDK::FromName("RPG.Client", "<>c__25`1")->GetStaticField(0x0);
		}

	};
}
