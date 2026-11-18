#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LKFLEAOHCNL;
class NEFNFIDEKEC;

#define OPLNNODNIJJ_ACBJBMBNPFD_OFFSET UNITYSDK_OFFSET(0x172E2DA0)
#define OPLNNODNIJJ_BNBILEFOPEM_OFFSET UNITYSDK_OFFSET(0x172E2DF0)
#define OPLNNODNIJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x172E2CD0)

inline static constexpr unsigned int OPLNNODNIJJ_TypeDefinitionIndex = 87653;

class OPLNNODNIJJ : public ::System::Object
{
public:
	::LKFLEAOHCNL* DENLCLBBNHI; // 0x10
	::NEFNFIDEKEC* NIKCNCPIMHH; // 0x18
	::System::Int32 IGGOPLGOHMA; // 0x20
	::System::Int32 LGNHMFKHPLD; // 0x24
	::System::Int32 NACGJJKHEJE; // 0x28

	::System::Void _ctor(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OPLNNODNIJJ__CTOR_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Void ACBJBMBNPFD(::System::Int32 EANEHHIBGFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OPLNNODNIJJ_ACBJBMBNPFD_OFFSET))(this, EANEHHIBGFL);
	}

	::System::Void BNBILEFOPEM(::LKFLEAOHCNL* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::LKFLEAOHCNL*))((::PBYTE)hIl2Cpp + OPLNNODNIJJ_BNBILEFOPEM_OFFSET))(this, HMMMOCJAEOA);
	}
};
