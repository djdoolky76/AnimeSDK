#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AGAFGMPKAFA.h"

class DIKCJLEKEEI;
class PKOPDFHFMMI;

#define DAHPIFDLKDP_LOCHIHKAPMG_MNPKMILCGGC_OFFSET UNITYSDK_OFFSET(0x19736CC0)
#define DAHPIFDLKDP_LOCHIHKAPMG__CTOR_OFFSET UNITYSDK_OFFSET(0x19736CB0)

inline static constexpr unsigned int DAHPIFDLKDP_LOCHIHKAPMG_TypeDefinitionIndex = 62133;

class DAHPIFDLKDP_LOCHIHKAPMG : public ::System::Object
{
public:
	::DIKCJLEKEEI* DFHMIOAKAMD; // 0x10
	::System::Boolean IENMFNBJMFG; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 AMCNCFDFMEM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHPIFDLKDP_LOCHIHKAPMG__CTOR_OFFSET))(this);
	}

	::PKOPDFHFMMI* MNPKMILCGGC(::AGAFGMPKAFA HNOPAJLDCFB)
	{
		return ((::PKOPDFHFMMI*(*)(::PVOID, ::AGAFGMPKAFA))((::PBYTE)hIl2Cpp + DAHPIFDLKDP_LOCHIHKAPMG_MNPKMILCGGC_OFFSET))(this, HNOPAJLDCFB);
	}
};
