#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJCOHFGNAFB.h"

#define INLKPKFHNFK__CTOR_OFFSET UNITYSDK_OFFSET(0x18713210)

inline static constexpr unsigned int INLKPKFHNFK_TypeDefinitionIndex = 59458;

class INLKPKFHNFK : public ::NJCOHFGNAFB
{
public:
	::System::Int32 JDCOGCBPHDH; // 0x18

	::System::Void _ctor(::System::Int32 JDCOGCBPHDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INLKPKFHNFK__CTOR_OFFSET))(this, JDCOGCBPHDH);
	}
};
