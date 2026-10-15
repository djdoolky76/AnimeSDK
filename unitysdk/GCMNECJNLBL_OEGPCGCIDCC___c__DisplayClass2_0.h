#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCMNECJNLBL_EDOKBCEFKNO;
class GCMNECJNLBL_OEGPCGCIDCC;
class ODGPPIHLOFF;

#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x159869E0)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS2_0__RUNASYNCLINKCANCEL__B__0_OFFSET UNITYSDK_OFFSET(0x1598D7A0)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS2_0__RUNASYNCLINKCANCEL__B__1_OFFSET UNITYSDK_OFFSET(0x1598D870)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS2_0__RUNASYNCLINKCANCEL__B__2_OFFSET UNITYSDK_OFFSET(0x1598DAA0)

inline static constexpr unsigned int GCMNECJNLBL_OEGPCGCIDCC___c__DisplayClass2_0_TypeDefinitionIndex = 49227;

	class GCMNECJNLBL_OEGPCGCIDCC___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::ODGPPIHLOFF* handle; // 0x10
		::ODGPPIHLOFF* handl1; // 0x18
		::GCMNECJNLBL_OEGPCGCIDCC* __4__this; // 0x20
		::System::Int32 h; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _RunAsyncLinkCancel__b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS2_0__RUNASYNCLINKCANCEL__B__0_OFFSET))(this, a1);
		}

		::System::Void _RunAsyncLinkCancel__b__1(::GCMNECJNLBL_EDOKBCEFKNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCMNECJNLBL_EDOKBCEFKNO*))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS2_0__RUNASYNCLINKCANCEL__B__1_OFFSET))(this, a1);
		}

		::System::Void _RunAsyncLinkCancel__b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS2_0__RUNASYNCLINKCANCEL__B__2_OFFSET))(this);
		}

	};
