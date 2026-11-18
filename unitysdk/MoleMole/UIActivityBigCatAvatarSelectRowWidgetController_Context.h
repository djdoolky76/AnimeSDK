#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;

#define MOLEMOLE_UIACTIVITYBIGCATAVATARSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A1A200)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBigCatAvatarSelectRowWidgetController_Context_TypeDefinitionIndex = 74279;

	class UIActivityBigCatAvatarSelectRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HGAJKHIMKJP* itemData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATAVATARSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
