#pragma once
#include "unitysdk/unitysdk.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define INMKBDFGBIE_CTOR_OFFSET UNITYSDK_OFFSET(0x164F7320)
#define INMKBDFGBIE__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x164F75D0)
#define INMKBDFGBIE__REMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0x164F7B10)
#define INMKBDFGBIE__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x164F7520)

	class INMKBDFGBIE
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x40
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + INMKBDFGBIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMKBDFGBIE__TEARDOWN_OFFSET))(this);
		}

		::System::Void _CreateTrigger(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + INMKBDFGBIE__CREATETRIGGER_OFFSET))(this, a1);
		}

		::System::Void _RemoveTrigger(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + INMKBDFGBIE__REMOVETRIGGER_OFFSET))(this, a1);
		}

	};
