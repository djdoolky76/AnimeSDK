#pragma once
#include "unitysdk/unitysdk.h"

#define OIIAEJAIEJF_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x12933450)
#define OIIAEJAIEJF_KOOLDDIFEFA_OFFSET UNITYSDK_OFFSET(0x12933430)
#define OIIAEJAIEJF_MIOCPIHMCFF_OFFSET UNITYSDK_OFFSET(0x12933440)
#define OIIAEJAIEJF_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x129333B0)
#define OIIAEJAIEJF__CTOR_OFFSET UNITYSDK_OFFSET(0x129333F0)

inline static constexpr unsigned int OIIAEJAIEJF_TypeDefinitionIndex = 71842;

class OIIAEJAIEJF
{
public:
	::System::Boolean _BFLHBNBAFHN_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIAEJAIEJF__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIAEJAIEJF_ONRECYCLE_OFFSET))(this);
	}

	::System::Boolean KOOLDDIFEFA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIAEJAIEJF_KOOLDDIFEFA_OFFSET))(this);
	}

	::System::Void MIOCPIHMCFF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIIAEJAIEJF_MIOCPIHMCFF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIAEJAIEJF_ANEOCOIFDDJ_OFFSET))(this);
	}
};
