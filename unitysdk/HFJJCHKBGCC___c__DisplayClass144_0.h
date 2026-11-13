#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEBICGIOAB;
class HFJJCHKBGCC;
class ODGPPIHLOFF;
namespace System { class Action; }

#define HFJJCHKBGCC___C__DISPLAYCLASS144_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C428780)
#define HFJJCHKBGCC___C__DISPLAYCLASS144_0__ACTIVEPROFILEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1C42BEF0)
#define HFJJCHKBGCC___C__DISPLAYCLASS144_0__ACTIVEPROFILEASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1C42BF30)

inline static constexpr unsigned int HFJJCHKBGCC___c__DisplayClass144_0_TypeDefinitionIndex = 50357;

	class HFJJCHKBGCC___c__DisplayClass144_0 : public ::System::Object
	{
	public:
		::HFJJCHKBGCC* __4__this; // 0x10
		::ODGPPIHLOFF* profileChangeAsyncHandle; // 0x18
		::System::Action* onChangeFinish; // 0x20
		::CBEBICGIOAB* source; // 0x28
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
