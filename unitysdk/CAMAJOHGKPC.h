#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHDDFBJLHDM;

#define CAMAJOHGKPC_CTOR_OFFSET UNITYSDK_OFFSET(0xC48C820)

	class CAMAJOHGKPC : public ::System::Object
	{
	public:
		::HHDDFBJLHDM* OBEBOKBMJBG; // 0x10
		::System::UInt32 KAFEOFKIFEK; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::HHDDFBJLHDM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::HHDDFBJLHDM*))((::PBYTE)hIl2Cpp + CAMAJOHGKPC_CTOR_OFFSET))(this, a1, a2);
		}

	};
