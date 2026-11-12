#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCMNECJNLBL_OEGPCGCIDCC;
class ODGPPIHLOFF;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0x168C1C00)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0__RUNASYNCALL_B__0_OFFSET UNITYSDK_OFFSET(0x168C3880)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0__RUNASYNCALL_B__1_OFFSET UNITYSDK_OFFSET(0x168C3920)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0__RUNASYNCALL_B__2_OFFSET UNITYSDK_OFFSET(0x168C3B40)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0__RUNASYNCALL_B__3_OFFSET UNITYSDK_OFFSET(0x168C3AB0)
#define GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0__RUNASYNCALL_B__4_OFFSET UNITYSDK_OFFSET(0x168C3CD0)

inline static constexpr unsigned int GCMNECJNLBL_OEGPCGCIDCC___c__DisplayClass20_0_TypeDefinitionIndex = 50300;

	class GCMNECJNLBL_OEGPCGCIDCC___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::ODGPPIHLOFF*>* handles; // 0x10
		::System::Action_1<::System::Boolean>* __9__4; // 0x18
		::System::Action* __9__3; // 0x20
		::GCMNECJNLBL_OEGPCGCIDCC* __4__this; // 0x28
		::ODGPPIHLOFF* handle; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Void _RunAsyncAll_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0__RUNASYNCALL_B__0_OFFSET))(this, a1);
		}

		::System::Void _RunAsyncAll_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0__RUNASYNCALL_B__1_OFFSET))(this);
		}

		::System::Void _RunAsyncAll_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0__RUNASYNCALL_B__3_OFFSET))(this);
		}

		::System::Void _RunAsyncAll_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0__RUNASYNCALL_B__2_OFFSET))(this);
		}

		::System::Void _RunAsyncAll_b__4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCMNECJNLBL_OEGPCGCIDCC___C__DISPLAYCLASS20_0__RUNASYNCALL_B__4_OFFSET))(this, a1);
		}

	};
