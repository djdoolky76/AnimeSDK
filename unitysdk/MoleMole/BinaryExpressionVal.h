#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDGBEDPCGDI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPKOIBEFPAO.h"

class BIOEANJKLPH;
class PNEHPPKBLAM;

#define MOLEMOLE_BINARYEXPRESSIONVAL_BDOHALPBIFF_OFFSET UNITYSDK_OFFSET(0x12756F00)
#define MOLEMOLE_BINARYEXPRESSIONVAL_HPKOALKMGNI_OFFSET UNITYSDK_OFFSET(0x12756FF0)
#define MOLEMOLE_BINARYEXPRESSIONVAL_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x12756F40)
#define MOLEMOLE_BINARYEXPRESSIONVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x127571B0)

namespace MoleMole
{
	inline static constexpr unsigned int BinaryExpressionVal_TypeDefinitionIndex = 47156;

	class BinaryExpressionVal : public ::System::Object
	{
	public:
		::BIOEANJKLPH* Left; // 0x10
		::BIOEANJKLPH* Right; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BINARYEXPRESSIONVAL__CTOR_OFFSET))(this);
		}

		::CDGBEDPCGDI BDOHALPBIFF()
		{
			return ((::CDGBEDPCGDI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BINARYEXPRESSIONVAL_BDOHALPBIFF_OFFSET))(this);
		}

		::DPKOIBEFPAO KNDMMHPDPIB(::PNEHPPKBLAM* NOAMHIFNHGO)
		{
			return ((::DPKOIBEFPAO(*)(::PVOID, ::PNEHPPKBLAM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BINARYEXPRESSIONVAL_KNDMMHPDPIB_OFFSET))(this, NOAMHIFNHGO);
		}

		::System::Boolean HPKOALKMGNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BINARYEXPRESSIONVAL_HPKOALKMGNI_OFFSET))(this);
		}
	};
}
