#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCMNECJNLBL_EDOKBCEFKNO;
class GCMNECJNLBL_OEGPCGCIDCC;
class ODGPPIHLOFF;

#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15987000)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS4_0__RUNASYNCLINKCANCEL_B__0_OFFSET UNITYSDK_OFFSET(0x1598E370)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS4_0__RUNASYNCLINKCANCEL_B__1_OFFSET UNITYSDK_OFFSET(0x1598E690)

	class GCMNECJNLBL_OEGPCGCIDCC___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::ODGPPIHLOFF* handl1; // 0x10
		::GCMNECJNLBL_OEGPCGCIDCC* __4__this; // 0x18
		::ODGPPIHLOFF* handle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _RunAsyncLinkCancel_b__0(::GCMNECJNLBL_EDOKBCEFKNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCMNECJNLBL_EDOKBCEFKNO*))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS4_0__RUNASYNCLINKCANCEL_B__0_OFFSET))(this, a1);
		}

		::System::Void _RunAsyncLinkCancel_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS4_0__RUNASYNCLINKCANCEL_B__1_OFFSET))(this, a1);
		}

	};
