#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHGNMNLLHF;
class KDBIOOOHKEL;
namespace System { class String; }

#define MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A140FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenBtnRowWidgetControllerContext_TypeDefinitionIndex = 50245;

	class UIAvatarSpecialAwakenBtnRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BPHGNMNLLHF* AvatarData; // 0x28
		::System::String* Name; // 0x30
		::KDBIOOOHKEL* Cfg; // 0x38
		::System::Boolean CanOperateAwake; // 0x40
		::System::Boolean IsUp; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
