#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJJKJNPEHCH;
class GNHNLFFMCMF;

#define AJJKJNPEHCH_IEADEEACHBF_MJGEFMEOECJ_OFFSET UNITYSDK_OFFSET(0x135EC760)
#define AJJKJNPEHCH_IEADEEACHBF__CTOR_OFFSET UNITYSDK_OFFSET(0x135EC750)

inline static constexpr unsigned int AJJKJNPEHCH_IEADEEACHBF_TypeDefinitionIndex = 83677;

class AJJKJNPEHCH_IEADEEACHBF : public ::System::Object
{
public:
	::AJJKJNPEHCH* KLHPEBKNIFB; // 0x10
	::System::Int32 OOEOHNBJMGD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_IEADEEACHBF__CTOR_OFFSET))(this);
	}

	::System::Void MJGEFMEOECJ(::GNHNLFFMCMF* DIEFNGMBMKF)
	{
		return ((::System::Void(*)(::PVOID, ::GNHNLFFMCMF*))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_IEADEEACHBF_MJGEFMEOECJ_OFFSET))(this, DIEFNGMBMKF);
	}
};
