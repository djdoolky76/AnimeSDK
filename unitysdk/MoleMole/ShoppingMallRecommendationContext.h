#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShoppingMallBaseContextBase.h"

class LGINJIKKBJA;
class NLHKPEDIGOI;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadRegion; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SHOPPINGMALLRECOMMENDATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18963510)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallRecommendationContext_TypeDefinitionIndex = 52586;

	class ShoppingMallRecommendationContext : public ::MoleMole::ShoppingMallBaseContextBase
	{
	public:
		::LGINJIKKBJA* Down_PreviewBtn; // 0x58
		::MoleMole::MonoGamepadModule* singleBuyModule; // 0x60
		::NLHKPEDIGOI* tabData; // 0x68
		::LGINJIKKBJA* Down_BuyBtn; // 0x70

		::System::Void _ctor(::MoleMole::MonoGamepadModule* singleBuyButton, ::NLHKPEDIGOI* tabData, ::MoleMole::MonoGamepadRegion* region, ::LGINJIKKBJA* Down_BuyBtn, ::LGINJIKKBJA* Down_PreviewBtn, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::NLHKPEDIGOI*, ::MoleMole::MonoGamepadRegion*, ::LGINJIKKBJA*, ::LGINJIKKBJA*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECOMMENDATIONCONTEXT__CTOR_OFFSET))(this, singleBuyButton, tabData, region, Down_BuyBtn, Down_PreviewBtn, onClick);
		}
	};
}
