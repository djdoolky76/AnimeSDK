#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191AC070)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooMainPageController_Context_TypeDefinitionIndex = 65883;

	class UIDigibooMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 initUID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
