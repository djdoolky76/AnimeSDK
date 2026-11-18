#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LIADCALCDAC;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define LIADCALCDAC_FKEGMCOAOEI_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0xD42E140)
#define LIADCALCDAC_FKEGMCOAOEI__CTOR_OFFSET UNITYSDK_OFFSET(0xD42E130)

inline static constexpr unsigned int LIADCALCDAC_FKEGMCOAOEI_TypeDefinitionIndex = 91494;

class LIADCALCDAC_FKEGMCOAOEI : public ::System::Object
{
public:
	::LIADCALCDAC* KLHPEBKNIFB; // 0x10
	::System::Boolean HIHPCLJCHKK; // 0x18
	::System::Boolean MEHMAIDOBKA; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADCALCDAC_FKEGMCOAOEI__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* LIDNPLMPHAL(::LGCNEDCMPKM HBMGHPEPBNC)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + LIADCALCDAC_FKEGMCOAOEI_LIDNPLMPHAL_OFFSET))(this, HBMGHPEPBNC);
	}
};
