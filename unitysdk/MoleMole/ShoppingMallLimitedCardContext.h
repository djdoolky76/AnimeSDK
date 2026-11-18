#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShoppingMallBaseContextBase.h"

class LGINJIKKBJA;
class NLHKPEDIGOI;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D5D230)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallLimitedCardContext_TypeDefinitionIndex = 65398;

	class ShoppingMallLimitedCardContext : public ::MoleMole::ShoppingMallBaseContextBase
	{
	public:
		::NLHKPEDIGOI* tabData; // 0x58
		::LGINJIKKBJA* Down_SingleBtn; // 0x60
		::UnityEngine::UI::Extension::UITimeWidget* Down_Timer; // 0x68
		::LGINJIKKBJA* Down_DetailBtn; // 0x70
		::MoleMole::UIGeneralButtonController* Down_ReceiveBtn; // 0x78
		::MoleMole::MonoGamepadModule* singleBuyModule; // 0x80

		::System::Void _ctor(::MoleMole::MonoGamepadModule* singleBuyButton, ::NLHKPEDIGOI* tabData, ::MoleMole::MonoGamepadRegion* region, ::LGINJIKKBJA* Down_SingleBtn, ::UnityEngine::UI::Extension::UITimeWidget* Down_Timer, ::LGINJIKKBJA* Down_DetailBtn, ::MoleMole::UIGeneralButtonController* Down_ReceiveBtn, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::NLHKPEDIGOI*, ::MoleMole::MonoGamepadRegion*, ::LGINJIKKBJA*, ::UnityEngine::UI::Extension::UITimeWidget*, ::LGINJIKKBJA*, ::MoleMole::UIGeneralButtonController*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDCONTEXT__CTOR_OFFSET))(this, singleBuyButton, tabData, region, Down_SingleBtn, Down_Timer, Down_DetailBtn, Down_ReceiveBtn, onClick);
		}
	};
}
