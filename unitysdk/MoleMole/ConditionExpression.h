#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDGBEDPCGDI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPKOIBEFPAO.h"

class BIOEANJKLPH;
class PNEHPPKBLAM;

#define MOLEMOLE_CONDITIONEXPRESSION_BDOHALPBIFF_OFFSET UNITYSDK_OFFSET(0x19226920)
#define MOLEMOLE_CONDITIONEXPRESSION_HPKOALKMGNI_OFFSET UNITYSDK_OFFSET(0x19226BC0)
#define MOLEMOLE_CONDITIONEXPRESSION_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x19226960)
#define MOLEMOLE_CONDITIONEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19226910)
#define MOLEMOLE_CONDITIONEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19226900)

namespace MoleMole
{
	inline static constexpr unsigned int ConditionExpression_TypeDefinitionIndex = 80008;

	class ConditionExpression : public ::System::Object
	{
	public:
		::BIOEANJKLPH* Condition; // 0x10
		::System::Boolean isNot; // 0x18

		::System::Void _ctor(::BIOEANJKLPH* KANJODNFFOI, ::System::Boolean KMNPKGGMNGD)
		{
			return ((::System::Void(*)(::PVOID, ::BIOEANJKLPH*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONDITIONEXPRESSION__CTOR_OFFSET))(this, KANJODNFFOI, KMNPKGGMNGD);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONDITIONEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::CDGBEDPCGDI BDOHALPBIFF()
		{
			return ((::CDGBEDPCGDI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONDITIONEXPRESSION_BDOHALPBIFF_OFFSET))(this);
		}

		::DPKOIBEFPAO KNDMMHPDPIB(::PNEHPPKBLAM* NOAMHIFNHGO)
		{
			return ((::DPKOIBEFPAO(*)(::PVOID, ::PNEHPPKBLAM*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONDITIONEXPRESSION_KNDMMHPDPIB_OFFSET))(this, NOAMHIFNHGO);
		}

		::System::Boolean HPKOALKMGNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONDITIONEXPRESSION_HPKOALKMGNI_OFFSET))(this);
		}
	};
}
