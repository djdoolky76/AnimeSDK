#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANLBKGJIFGK.h"

class NILGNGDBENM;

#define IOGKLFEPJCK_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x13825E90)
#define IOGKLFEPJCK__CTOR_OFFSET UNITYSDK_OFFSET(0x13825F40)

inline static constexpr unsigned int IOGKLFEPJCK_TypeDefinitionIndex = 41898;

class IOGKLFEPJCK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGKLFEPJCK__CTOR_OFFSET))(this);
	}

	::System::Int32 FHDJDIIPGGP(::NILGNGDBENM* DEKJDEPKKLH, ::ANLBKGJIFGK OBIPHBKODPP)
	{
		return ((::System::Int32(*)(::PVOID, ::NILGNGDBENM*, ::ANLBKGJIFGK))((::PBYTE)hIl2Cpp + IOGKLFEPJCK_FHDJDIIPGGP_OFFSET))(this, DEKJDEPKKLH, OBIPHBKODPP);
	}
};
