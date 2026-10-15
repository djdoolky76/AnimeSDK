#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCMNECJNLBL_OEGPCGCIDCC;
class ODGPPIHLOFF;
namespace RPG { template <typename T> class PoolList_1; }

#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1598B510)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS22_0__RUNASYNCALL2_B__0_OFFSET UNITYSDK_OFFSET(0x1598D700)

	class GCMNECJNLBL_OEGPCGCIDCC___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::ODGPPIHLOFF*>* handles; // 0x10
		::GCMNECJNLBL_OEGPCGCIDCC* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Void _RunAsyncAll2_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS22_0__RUNASYNCALL2_B__0_OFFSET))(this, a1);
		}

	};
