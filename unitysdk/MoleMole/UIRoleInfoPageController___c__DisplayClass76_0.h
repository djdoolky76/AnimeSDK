#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18892B50)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__DISPLAYCLASS76_0__ONSTRATEGYBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x18892B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController___c__DisplayClass76_0_TypeDefinitionIndex = 52901;

	class UIRoleInfoPageController___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10
		::System::Boolean isPreviewMode; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStrategyBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__DISPLAYCLASS76_0__ONSTRATEGYBTNCLICKED_B__0_OFFSET))(this);
		}
	};
}
