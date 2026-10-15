#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KDLIDKMMNOA.h"
class BLPBNHJNGID;

#define DAEAOGMOHHA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDFC1870)
#define DAEAOGMOHHA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC1950)

	class DAEAOGMOHHA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEAOGMOHHA_CTOR_OFFSET))(this);
		}

		::BLPBNHJNGID* BPLPBPMEODA(::KDLIDKMMNOA a1)
		{
			return ((::BLPBNHJNGID*(*)(::PVOID, ::KDLIDKMMNOA))((::PBYTE)hIl2Cpp + DAEAOGMOHHA_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
