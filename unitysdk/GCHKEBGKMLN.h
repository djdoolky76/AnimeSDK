#pragma once
#include "unitysdk/unitysdk.h"

#define GCHKEBGKMLN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x116DFBE0)
#define GCHKEBGKMLN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x116DFD40)
#define GCHKEBGKMLN__CTOR_OFFSET UNITYSDK_OFFSET(0x116DFD20)

inline static constexpr unsigned int GCHKEBGKMLN_TypeDefinitionIndex = 58638;

class GCHKEBGKMLN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHKEBGKMLN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHKEBGKMLN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHKEBGKMLN_GDEOPIBNOIN_OFFSET))(this);
	}
};
