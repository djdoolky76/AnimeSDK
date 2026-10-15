#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

namespace RPG::AvatarSystem::Property
{
	template <typename T>
	class PropertyContext_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<T>*>* _ModifierProviders; // 0x0
	};
}
