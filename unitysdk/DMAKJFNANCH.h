#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBMMKDOEHDB.h"

#define DMAKJFNANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x13455850)

inline static constexpr unsigned int DMAKJFNANCH_TypeDefinitionIndex = 69914;

class DMAKJFNANCH : public ::CBMMKDOEHDB
{
public:
	::System::Void _ctor(::CBMMKDOEHDB* FFKBEGIHIGG, ::CBMMKDOEHDB* CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::CBMMKDOEHDB*, ::CBMMKDOEHDB*))((::PBYTE)hIl2Cpp + DMAKJFNANCH__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
