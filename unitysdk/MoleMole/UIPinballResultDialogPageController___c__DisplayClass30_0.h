#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1906ED20)
#define MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__ONAGAINBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x1906ED30)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballResultDialogPageController___c__DisplayClass30_0_TypeDefinitionIndex = 84421;

	class UIPinballResultDialogPageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Int32 levelId; // 0x10
		::System::Int32 ballId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAgainBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER___C__DISPLAYCLASS30_0__ONAGAINBTNCLICK_B__0_OFFSET))(this);
		}
	};
}
