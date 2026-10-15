#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem::Property { template <typename T> class EmptyModifier_1; }

namespace RPG::AvatarSystem::Property
{
	inline static constexpr unsigned int EmptyModifier_1_TypeDefinitionIndex = 52003;

	template <typename T>
	class EmptyModifier_1 : public ::System::Object
	{
	public:
		static ::RPG::AvatarSystem::Property::EmptyModifier_1<T>** StaticGet__Instance()
		{
			return (::RPG::AvatarSystem::Property::EmptyModifier_1<T>**)UnitySDK::FromName("RPG.AvatarSystem.Property", "EmptyModifier`1")->GetStaticField(0x0);
		}

	};
}
