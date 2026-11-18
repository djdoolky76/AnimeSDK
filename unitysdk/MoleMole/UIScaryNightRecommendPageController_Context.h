#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C68A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightRecommendPageController_Context_TypeDefinitionIndex = 71012;

	class UIScaryNightRecommendPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean OnlyShowSelectIndex; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 SelectAvatarIndex; // 0x2C
		::System::Int32 SelectBuildIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
