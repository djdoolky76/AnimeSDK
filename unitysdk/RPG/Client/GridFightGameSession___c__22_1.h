#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession___c__22_1_TypeDefinitionIndex = 66414;

	template <typename T>
	class GridFightGameSession___c__22_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c__22`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<T, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<T, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c__22`1")->GetStaticField(0x0);
		}

	};
}
