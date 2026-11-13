#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCMNECJNLBL_OEGPCGCIDCC;
class ODGPPIHLOFF;
namespace RPG { template <typename T> class PoolList_1; }

#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19EC5A70)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS21_0__RUNASYNCALL1_B__0_OFFSET UNITYSDK_OFFSET(0x19EC7BD0)

inline static constexpr unsigned int GCMNECJNLBL_OEGPCGCIDCC___c__DisplayClass21_0_TypeDefinitionIndex = 50301;

	class GCMNECJNLBL_OEGPCGCIDCC___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::GCMNECJNLBL_OEGPCGCIDCC* __4__this; // 0x10
		::RPG::PoolList_1<::ODGPPIHLOFF*>* handles; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Void _RunAsyncAll1_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS21_0__RUNASYNCALL1_B__0_OFFSET))(this, a1);
		}

	};
