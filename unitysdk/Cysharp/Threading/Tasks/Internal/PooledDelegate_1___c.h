#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int PooledDelegate_1___c_TypeDefinitionIndex = 38664;

	template <typename T>
	class PooledDelegate_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "<>c")->GetStaticField(0x0);
		}

	};
}
