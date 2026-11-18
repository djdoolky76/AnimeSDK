#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShoppingMallBaseContextBase.h"

class LGINJIKKBJA;
class NBDLJECLJJO;
namespace MoleMole { class MonoGamepadRegion; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_SHOPPINGMALLCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A06E50)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallCardContext_TypeDefinitionIndex = 74352;

	class ShoppingMallCardContext : public ::MoleMole::ShoppingMallBaseContextBase
	{
	public:
		::LGINJIKKBJA* buyBtn; // 0x58
		::LGINJIKKBJA* infoBtn; // 0x60
		::UnityEngine::UI::Extension::UITimeWidget* timer; // 0x68
		::LGINJIKKBJA* infoConsoleBtn; // 0x70
		::UnityEngine::UI::Extension::UILocalizationText* priceText; // 0x78
		::UnityEngine::UI::Extension::UILocalizationText* buyText; // 0x80

		::System::Void _ctor(::System::Collections::Generic::List_1<::NBDLJECLJJO*>* goods, ::MoleMole::MonoGamepadRegion* region, ::System::Action_1<::System::Int32>* onClick, ::UnityEngine::UI::Extension::UITimeWidget* timer, ::LGINJIKKBJA* buyBtn, ::LGINJIKKBJA* infoBtn, ::LGINJIKKBJA* infoConsoleBtn, ::UnityEngine::UI::Extension::UILocalizationText* priceText, ::UnityEngine::UI::Extension::UILocalizationText* buyText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NBDLJECLJJO*>*, ::MoleMole::MonoGamepadRegion*, ::System::Action_1<::System::Int32>*, ::UnityEngine::UI::Extension::UITimeWidget*, ::LGINJIKKBJA*, ::LGINJIKKBJA*, ::LGINJIKKBJA*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLCARDCONTEXT__CTOR_OFFSET))(this, goods, region, onClick, timer, buyBtn, infoBtn, infoConsoleBtn, priceText, buyText);
		}
	};
}
