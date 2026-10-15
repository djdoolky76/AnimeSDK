#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace RPG
{
	inline static constexpr unsigned int GCFreeLazy_1___c_TypeDefinitionIndex = 6370;

	template <typename T>
	class GCFreeLazy_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG", "<>c")->GetStaticField(0x0);
		}

	};
}
