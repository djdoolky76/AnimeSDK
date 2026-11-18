#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIAJBFBDOFH.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define NPPLJJBPPNO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1004B190)
#define NPPLJJBPPNO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1004B040)
#define NPPLJJBPPNO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1004B250)
#define NPPLJJBPPNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1004B1E0)

inline static constexpr unsigned int NPPLJJBPPNO_TypeDefinitionIndex = 39783;

class NPPLJJBPPNO : public ::FIAJBFBDOFH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLJJBPPNO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLJJBPPNO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NPPLJJBPPNO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLJJBPPNO_GDEOPIBNOIN_OFFSET))(this);
	}
};
