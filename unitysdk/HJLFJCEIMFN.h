#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEEFFCPKNKP.h"
#include "unitysdk/System/Object.h"

class KBDGKAJPALP;
class KDDOGILFJEI;

#define HJLFJCEIMFN_BEDGKPELGOF_OFFSET UNITYSDK_OFFSET(0x1E1C71D0)
#define HJLFJCEIMFN_KBMFKANENAJ_OFFSET UNITYSDK_OFFSET(0x1E1C7310)
#define HJLFJCEIMFN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1E1C7240)
#define HJLFJCEIMFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C7230)

inline static constexpr unsigned int HJLFJCEIMFN_TypeDefinitionIndex = 94001;

class HJLFJCEIMFN : public ::System::Object
{
public:
	::OEEFFCPKNKP ONLFJHIGHOF; // 0x10
	::KDDOGILFJEI* DGDENJKAJDB; // 0x20
	::KBDGKAJPALP* GEEHGDABNJF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLFJCEIMFN__CTOR_OFFSET))(this);
	}

	::OEEFFCPKNKP BEDGKPELGOF()
	{
		return ((::OEEFFCPKNKP(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLFJCEIMFN_BEDGKPELGOF_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLFJCEIMFN_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void KBMFKANENAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLFJCEIMFN_KBMFKANENAJ_OFFSET))(this);
	}
};
