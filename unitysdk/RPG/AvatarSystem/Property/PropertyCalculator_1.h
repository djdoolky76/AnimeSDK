#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHCECAKHKJP;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyFormula_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::AvatarSystem::Property
{
	template <typename T>
	class PropertyCalculator_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::GHCECAKHKJP*, ::RPG::AvatarSystem::Property::IPropertyFormula_1<T>*>* _Formulas; // 0x0
	};
}
