#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define KEKNIAKEJJO_LIAGFOPMMLM_JPGLKKOFIEE_OFFSET UNITYSDK_OFFSET(0x7AAB80)
#define KEKNIAKEJJO_LIAGFOPMMLM__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int KEKNIAKEJJO_LIAGFOPMMLM_TypeDefinitionIndex = 64487;

struct alignas(4) KEKNIAKEJJO_LIAGFOPMMLM
{
	// static const ::System::Int64 JMHDMKKMMIM = 0x7FFFFFFF; // 0x0
	::System::Int32 OKEPGOMHOMM; // 0x10
	::System::UInt32 LMLDFGKFIMD; // 0x14

	::System::Void _ctor(::System::Int32 DKOFFFNEFJC, ::System::UInt32 HFAFFNLNAJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + KEKNIAKEJJO_LIAGFOPMMLM__CTOR_OFFSET))(this, DKOFFFNEFJC, HFAFFNLNAJE);
	}

	::System::UInt64 JPGLKKOFIEE()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKNIAKEJJO_LIAGFOPMMLM_JPGLKKOFIEE_OFFSET))(this);
	}
};
