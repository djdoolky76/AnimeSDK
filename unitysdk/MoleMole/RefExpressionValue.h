#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDGBEDPCGDI.h"
#include "unitysdk/CFLFEHNOIAO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPKOIBEFPAO.h"

class PNEHPPKBLAM;
namespace System { class String; }

#define MOLEMOLE_REFEXPRESSIONVALUE_BDOHALPBIFF_OFFSET UNITYSDK_OFFSET(0x162ED620)
#define MOLEMOLE_REFEXPRESSIONVALUE_HPKOALKMGNI_OFFSET UNITYSDK_OFFSET(0x162ED790)
#define MOLEMOLE_REFEXPRESSIONVALUE_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x162ED660)
#define MOLEMOLE_REFEXPRESSIONVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x162ED610)

namespace MoleMole
{
	inline static constexpr unsigned int RefExpressionValue_TypeDefinitionIndex = 45772;

	class RefExpressionValue : public ::System::Object
	{
	public:
		::System::String* RefName; // 0x10
		::CFLFEHNOIAO ExpressionRetValType; // 0x18

		::System::Void _ctor(::System::String* LPKKGCEHJOE, ::CFLFEHNOIAO OBNIAHNMHPF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::CFLFEHNOIAO))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE__CTOR_OFFSET))(this, LPKKGCEHJOE, OBNIAHNMHPF);
		}

		::CDGBEDPCGDI BDOHALPBIFF()
		{
			return ((::CDGBEDPCGDI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_BDOHALPBIFF_OFFSET))(this);
		}

		::DPKOIBEFPAO KNDMMHPDPIB(::PNEHPPKBLAM* NOAMHIFNHGO)
		{
			return ((::DPKOIBEFPAO(*)(::PVOID, ::PNEHPPKBLAM*))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_KNDMMHPDPIB_OFFSET))(this, NOAMHIFNHGO);
		}

		::System::Boolean HPKOALKMGNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_HPKOALKMGNI_OFFSET))(this);
		}
	};
}
