#pragma once
#include "unitysdk/unitysdk.h"

#define JLKMNPMMJNO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17B48970)
#define JLKMNPMMJNO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17B48AD0)
#define JLKMNPMMJNO__CTOR_OFFSET UNITYSDK_OFFSET(0x17B48AB0)

inline static constexpr unsigned int JLKMNPMMJNO_TypeDefinitionIndex = 42361;

class JLKMNPMMJNO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKMNPMMJNO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKMNPMMJNO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKMNPMMJNO_GDEOPIBNOIN_OFFSET))(this);
	}
};
