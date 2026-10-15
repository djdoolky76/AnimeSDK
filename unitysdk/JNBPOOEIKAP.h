#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAHCLJPMCIG;

#define JNBPOOEIKAP_CTOR_OFFSET UNITYSDK_OFFSET(0xB278B40)

	class JNBPOOEIKAP : public ::System::Object
	{
	public:
		::EAHCLJPMCIG* HNEOOKPBCNK; // 0x10
		::System::Void _ctor(::EAHCLJPMCIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAHCLJPMCIG*))((::PBYTE)hIl2Cpp + JNBPOOEIKAP_CTOR_OFFSET))(this, a1);
		}

	};
