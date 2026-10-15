#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class HGDELEAHIJO;
class KGPCBBIOGLB;
namespace RPG::Client { template <typename T> class AsyncActionProgress_1; }
namespace System { class Object; }
namespace System { class Tuple; }

#define EJLIOMPMHHI___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x154E5370)
#define EJLIOMPMHHI___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x154EAA00)
#define EJLIOMPMHHI___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x154EA990)

	class EJLIOMPMHHI___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::AsyncActionProgress_1<::System::Tuple*>* progress; // 0x10
		::EJLIOMPMHHI* __4__this; // 0x18
		::System::Boolean isThrow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void _AddLocalVerify_b__1(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__1_OFFSET))(this, a1);
		}

		::System::Void _AddLocalVerify_b__0(::KGPCBBIOGLB* a1, ::System::Tuple* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGPCBBIOGLB*, ::System::Tuple*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__0_OFFSET))(this, a1, a2);
		}

	};
