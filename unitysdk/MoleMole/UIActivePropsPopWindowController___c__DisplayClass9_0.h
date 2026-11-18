#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKGKJNHLCKC;

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BE90C0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x14BE90D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 68096;

	class UIActivePropsPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__1(::BKGKJNHLCKC* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKGKJNHLCKC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONUIOPEN_B__1_OFFSET))(this, b);
		}
	};
}
