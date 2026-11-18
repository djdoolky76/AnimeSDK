#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define LDKPANHJFBG_KEEJFMOAEAK_JPGLKKOFIEE_OFFSET UNITYSDK_OFFSET(0x7AB240)
#define LDKPANHJFBG_KEEJFMOAEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int LDKPANHJFBG_KEEJFMOAEAK_TypeDefinitionIndex = 77694;

struct alignas(4) LDKPANHJFBG_KEEJFMOAEAK
{
	// static const ::System::Int64 JMHDMKKMMIM = 0x7FFFFFFF; // 0x0
	::System::Int32 OKEPGOMHOMM; // 0x10
	::System::UInt32 LMLDFGKFIMD; // 0x14

	::System::Void _ctor(::System::Int32 DKOFFFNEFJC, ::System::UInt32 HFAFFNLNAJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + LDKPANHJFBG_KEEJFMOAEAK__CTOR_OFFSET))(this, DKOFFFNEFJC, HFAFFNLNAJE);
	}

	::System::UInt64 JPGLKKOFIEE()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKPANHJFBG_KEEJFMOAEAK_JPGLKKOFIEE_OFFSET))(this);
	}
};
