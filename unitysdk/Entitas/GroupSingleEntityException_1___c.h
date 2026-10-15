#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Entitas
{
	inline static constexpr unsigned int GroupSingleEntityException_1___c_TypeDefinitionIndex = 10031;

	template <typename T>
	class GroupSingleEntityException_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Entitas", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<T, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<T, ::System::String*>**)UnitySDK::FromName("Entitas", "<>c")->GetStaticField(0x0);
		}

	};
}
