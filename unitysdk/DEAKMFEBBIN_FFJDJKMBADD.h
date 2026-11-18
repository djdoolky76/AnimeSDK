#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DEAKMFEBBIN;
namespace System { class Action; }

#define DEAKMFEBBIN_FFJDJKMBADD_KBOFLDOIAHO_OFFSET UNITYSDK_OFFSET(0x12BADEE0)
#define DEAKMFEBBIN_FFJDJKMBADD__CTOR_OFFSET UNITYSDK_OFFSET(0x12BADED0)

inline static constexpr unsigned int DEAKMFEBBIN_FFJDJKMBADD_TypeDefinitionIndex = 67720;

class DEAKMFEBBIN_FFJDJKMBADD : public ::System::Object
{
public:
	::System::Action* HKEBHFKHBCC; // 0x10
	::DEAKMFEBBIN* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_FFJDJKMBADD__CTOR_OFFSET))(this);
	}

	::System::Void KBOFLDOIAHO(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_FFJDJKMBADD_KBOFLDOIAHO_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}
};
