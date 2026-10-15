#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DCHICFMEANN.h"

#define AILLIHEBFID___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEBB2200)
#define AILLIHEBFID___C__DISPLAYCLASS20_0___ONSELFMARBLESELECTEDREQUESTED_B__0_OFFSET UNITYSDK_OFFSET(0xEBB2F90)

	class AILLIHEBFID___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::UInt32 marbleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILLIHEBFID___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnSelfMarbleSelectedRequested_b__0(::DCHICFMEANN a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCHICFMEANN))((::PBYTE)hIl2Cpp + AILLIHEBFID___C__DISPLAYCLASS20_0___ONSELFMARBLESELECTEDREQUESTED_B__0_OFFSET))(this, a1);
		}

	};
