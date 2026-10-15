#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int ObjectRepository_1___c_TypeDefinitionIndex = 45143;

	template <typename T>
	class ObjectRepository_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Coffee.UIParticleInternal", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)UnitySDK::FromName("Coffee.UIParticleInternal", "<>c")->GetStaticField(0x0);
		}

	};
}
