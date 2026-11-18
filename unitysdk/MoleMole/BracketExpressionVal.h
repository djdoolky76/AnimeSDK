#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDGBEDPCGDI.h"
#include "unitysdk/CFLFEHNOIAO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPKOIBEFPAO.h"

class BIOEANJKLPH;
class PNEHPPKBLAM;

#define MOLEMOLE_BRACKETEXPRESSIONVAL_BDOHALPBIFF_OFFSET UNITYSDK_OFFSET(0x13047810)
#define MOLEMOLE_BRACKETEXPRESSIONVAL_HPKOALKMGNI_OFFSET UNITYSDK_OFFSET(0x13047900)
#define MOLEMOLE_BRACKETEXPRESSIONVAL_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x13047850)
#define MOLEMOLE_BRACKETEXPRESSIONVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x13047B10)

namespace MoleMole
{
	inline static constexpr unsigned int BracketExpressionVal_TypeDefinitionIndex = 76472;

	class BracketExpressionVal : public ::System::Object
	{
	public:
		::CFLFEHNOIAO expressionRetValType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::BIOEANJKLPH*>* ExpressionVal; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BRACKETEXPRESSIONVAL__CTOR_OFFSET))(this);
		}

		::CDGBEDPCGDI BDOHALPBIFF()
		{
			return ((::CDGBEDPCGDI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BRACKETEXPRESSIONVAL_BDOHALPBIFF_OFFSET))(this);
		}

		::DPKOIBEFPAO KNDMMHPDPIB(::PNEHPPKBLAM* NOAMHIFNHGO)
		{
			return ((::DPKOIBEFPAO(*)(::PVOID, ::PNEHPPKBLAM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BRACKETEXPRESSIONVAL_KNDMMHPDPIB_OFFSET))(this, NOAMHIFNHGO);
		}

		::System::Boolean HPKOALKMGNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BRACKETEXPRESSIONVAL_HPKOALKMGNI_OFFSET))(this);
		}
	};
}
