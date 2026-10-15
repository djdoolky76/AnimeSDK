#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNCMHNDHKMG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNCMHNDHKMG___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB57D830)
#define KNCMHNDHKMG___C__DISPLAYCLASS17_0__COLLECTINCOME_B__0_OFFSET UNITYSDK_OFFSET(0xB57F0E0)

	class KNCMHNDHKMG___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::KNCMHNDHKMG* __4__this; // 0x10
		::System::UInt32 entityRuntimeId; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCMHNDHKMG___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Void _CollectIncome_b__0(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KNCMHNDHKMG___C__DISPLAYCLASS17_0__COLLECTINCOME_B__0_OFFSET))(this, a1);
		}

	};
