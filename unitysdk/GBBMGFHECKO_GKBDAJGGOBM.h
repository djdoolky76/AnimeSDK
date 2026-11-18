#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class GBBMGFHECKO;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define GBBMGFHECKO_GKBDAJGGOBM_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0xBB7FA90)
#define GBBMGFHECKO_GKBDAJGGOBM__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7FA80)

inline static constexpr unsigned int GBBMGFHECKO_GKBDAJGGOBM_TypeDefinitionIndex = 39018;

class GBBMGFHECKO_GKBDAJGGOBM : public ::System::Object
{
public:
	::GBBMGFHECKO* KLHPEBKNIFB; // 0x10
	::System::Boolean HIHPCLJCHKK; // 0x18
	::System::Boolean MEHMAIDOBKA; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMGFHECKO_GKBDAJGGOBM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* LIDNPLMPHAL(::LGCNEDCMPKM HBMGHPEPBNC)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + GBBMGFHECKO_GKBDAJGGOBM_LIDNPLMPHAL_OFFSET))(this, HBMGHPEPBNC);
	}
};
