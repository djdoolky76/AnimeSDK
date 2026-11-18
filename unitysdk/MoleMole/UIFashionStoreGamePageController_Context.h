#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class OCCHEBFLDEG;

#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D66BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreGamePageController_Context_TypeDefinitionIndex = 41451;

	class UIFashionStoreGamePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::OCCHEBFLDEG* LevelConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
