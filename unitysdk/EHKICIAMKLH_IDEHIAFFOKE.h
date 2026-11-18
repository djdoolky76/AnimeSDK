#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKIIJMMHMKO;
class EHKICIAMKLH;

#define EHKICIAMKLH_IDEHIAFFOKE_HCAKNEMJBMM_OFFSET UNITYSDK_OFFSET(0xFE0C540)
#define EHKICIAMKLH_IDEHIAFFOKE__CTOR_OFFSET UNITYSDK_OFFSET(0xFE0C530)

inline static constexpr unsigned int EHKICIAMKLH_IDEHIAFFOKE_TypeDefinitionIndex = 72727;

class EHKICIAMKLH_IDEHIAFFOKE : public ::System::Object
{
public:
	::EHKICIAMKLH* KLHPEBKNIFB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKICIAMKLH_IDEHIAFFOKE__CTOR_OFFSET))(this);
	}

	::DKIIJMMHMKO* HCAKNEMJBMM()
	{
		return ((::DKIIJMMHMKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKICIAMKLH_IDEHIAFFOKE_HCAKNEMJBMM_OFFSET))(this);
	}
};
