#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int InternalListPool_1___c_TypeDefinitionIndex = 45140;

	template <typename T>
	class InternalListPool_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Coffee.UIParticleInternal", "<>c")->GetStaticField(0x0);
		}

	};
}
