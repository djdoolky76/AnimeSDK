#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS67_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0007A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS67_2__REFRESHGACHAVIEW_B__12_OFFSET UNITYSDK_OFFSET(0x1B000BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass67_2_TypeDefinitionIndex = 58558;

	template <typename T1, typename T2>
	class UIGachaPageController___c__DisplayClass67_2 : public ::System::Object
	{
	public:
		::System::Int32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS67_2__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshGachaView_b__12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS67_2__REFRESHGACHAVIEW_B__12_OFFSET))(this);
		}
	};
}
