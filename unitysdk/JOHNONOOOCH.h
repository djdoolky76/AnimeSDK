#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JOHNONOOOCH__CTOR_OFFSET UNITYSDK_OFFSET(0x75E180)

inline static constexpr unsigned int JOHNONOOOCH_TypeDefinitionIndex = 89357;

struct alignas(4) JOHNONOOOCH
{
	::System::Boolean POGEHJGHFLM; // 0x10
	::System::Boolean BBELAGJLJBF; // 0x11
	::System::Boolean JCLCOPCHDGN; // 0x12
	::System::Boolean KLADGOPMNIB; // 0x13
	::System::Boolean JDKICJDICDC; // 0x14

	::System::Void _ctor(::System::Boolean PFPJFCGFNFL, ::System::Boolean AEHJGBAMDEI, ::System::Boolean JHHGNJHIKBL, ::System::Boolean BENDGPAMFOB, ::System::Boolean FIBDHFDNIEB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JOHNONOOOCH__CTOR_OFFSET))(this, PFPJFCGFNFL, AEHJGBAMDEI, JHHGNJHIKBL, BENDGPAMFOB, FIBDHFDNIEB);
	}
};
