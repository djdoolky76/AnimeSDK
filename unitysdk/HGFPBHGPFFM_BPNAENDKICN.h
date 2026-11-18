#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HBKGDHJEIGO;
class MPHLLEOEFID;

#define HGFPBHGPFFM_BPNAENDKICN_IBDPMIPNCMG_OFFSET UNITYSDK_OFFSET(0x13D8C320)
#define HGFPBHGPFFM_BPNAENDKICN__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8C310)

inline static constexpr unsigned int HGFPBHGPFFM_BPNAENDKICN_TypeDefinitionIndex = 79277;

class HGFPBHGPFFM_BPNAENDKICN : public ::System::Object
{
public:
	::HBKGDHJEIGO* BOBIKBDKFCK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFPBHGPFFM_BPNAENDKICN__CTOR_OFFSET))(this);
	}

	::MPHLLEOEFID* IBDPMIPNCMG()
	{
		return ((::MPHLLEOEFID*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFPBHGPFFM_BPNAENDKICN_IBDPMIPNCMG_OFFSET))(this);
	}
};
