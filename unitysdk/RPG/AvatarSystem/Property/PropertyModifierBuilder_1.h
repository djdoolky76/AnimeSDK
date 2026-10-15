#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHCECAKHKJP;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::AvatarSystem::Property
{
	inline static constexpr unsigned int PropertyModifierBuilder_1_TypeDefinitionIndex = 52007;

	template <typename T>
	class PropertyModifierBuilder_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::GHCECAKHKJP*, ::RPG::AvatarSystem::Property::IPropertyModifier_1<T>*>* _Modifiers; // 0x0
		::System::Boolean _IsDirty_k__BackingField; // 0x0
	};
}
