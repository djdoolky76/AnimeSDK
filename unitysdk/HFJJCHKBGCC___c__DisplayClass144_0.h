#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEBICGIOAB;
class HFJJCHKBGCC;
class ODGPPIHLOFF;
namespace System { class Action; }

#define HFJJCHKBGCC___C__DISPLAYCLASS144_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15C83BB0)
#define HFJJCHKBGCC___C__DISPLAYCLASS144_0__ACTIVEPROFILEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x15C87170)
#define HFJJCHKBGCC___C__DISPLAYCLASS144_0__ACTIVEPROFILEASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x15C871B0)

	class HFJJCHKBGCC___c__DisplayClass144_0 : public ::System::Object
	{
	public:
		::CBEBICGIOAB* source; // 0x10
		::System::Action* onChangeFinish; // 0x18
		::ODGPPIHLOFF* profileChangeAsyncHandle; // 0x20
		::HFJJCHKBGCC* __4__this; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C__DISPLAYCLASS144_0_CTOR_OFFSET))(this);
		}

		::System::Void _ActiveProfileAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C__DISPLAYCLASS144_0__ACTIVEPROFILEASYNC_B__0_OFFSET))(this);
		}

		::System::Void _ActiveProfileAsync_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C__DISPLAYCLASS144_0__ACTIVEPROFILEASYNC_B__1_OFFSET))(this, a1);
		}

	};
