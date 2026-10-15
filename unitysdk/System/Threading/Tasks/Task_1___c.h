#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_1___c_TypeDefinitionIndex = 890;

	template <typename T>
	class Task_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Threading.Tasks", "<>c")->GetStaticField(0x0);
		}

	};
}
