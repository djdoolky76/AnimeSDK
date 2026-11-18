#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x185D85C0)

namespace MoleMole
{
	inline static constexpr unsigned int UITheGunMainPageController_Context_TypeDefinitionIndex = 56257;

	class UITheGunMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 questID; // 0x28
		::System::Int32 focusTab; // 0x2C
		::System::Boolean openLevelDetail; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
