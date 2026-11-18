#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DBFEEDDJOPF;

#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTTABWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A141020)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenContrastTabWidgetControllerContext_TypeDefinitionIndex = 79881;

	class UIAvatarSpecialAwakenContrastTabWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DBFEEDDJOPF* Cfg; // 0x28
		::System::Int32 AvatarId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTTABWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
