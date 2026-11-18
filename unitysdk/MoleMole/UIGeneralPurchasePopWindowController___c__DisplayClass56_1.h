#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;

#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16EEA6C0)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_1__DOPURCHASE_B__1_OFFSET UNITYSDK_OFFSET(0x16EEA6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchasePopWindowController___c__DisplayClass56_1_TypeDefinitionIndex = 56609;

	template <typename T>
	class UIGeneralPurchasePopWindowController___c__DisplayClass56_1 : public ::System::Object
	{
	public:
		::System::Int32 itemIdToFind; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _DoPurchase_b__1(::HGAJKHIMKJP* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_1__DOPURCHASE_B__1_OFFSET))(this, x);
		}
	};
}
