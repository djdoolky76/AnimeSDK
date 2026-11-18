#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class NBDLJECLJJO;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17596CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralAvatarGesturePurchaseWidgetController_Context_TypeDefinitionIndex = 73751;

	class UIGeneralAvatarGesturePurchaseWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NBDLJECLJJO* GoodsData; // 0x28
		::System::Action_1<::System::Object*>* OnPurchase; // 0x30
		::System::Boolean ShowInfoText; // 0x38
		::System::Boolean DoubleConfirm; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
