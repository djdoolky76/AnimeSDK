#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMMNJLDKJMD;
namespace System { class Action; }

#define NMMNJLDKJMD___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8E5F0)
#define NMMNJLDKJMD___C__DISPLAYCLASS7_0__UNLOADAREAWITHLOADING_B__0_OFFSET UNITYSDK_OFFSET(0xBC8F340)
#define NMMNJLDKJMD___C__DISPLAYCLASS7_0__UNLOADAREAWITHLOADING_B__1_OFFSET UNITYSDK_OFFSET(0xBC8F530)

	class NMMNJLDKJMD___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::System::Action* __9__1; // 0x18
		::NMMNJLDKJMD* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _UnloadAreaWithLoading_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD___C__DISPLAYCLASS7_0__UNLOADAREAWITHLOADING_B__0_OFFSET))(this);
		}

		::System::Void _UnloadAreaWithLoading_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD___C__DISPLAYCLASS7_0__UNLOADAREAWITHLOADING_B__1_OFFSET))(this);
		}

	};
