#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDGBEDPCGDI.h"
#include "unitysdk/CFLFEHNOIAO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPKOIBEFPAO.h"

class BIOEANJKLPH;
class PNEHPPKBLAM;
namespace System { class String; }

#define MOLEMOLE_REFEXPRESSIONVALUE_ONEPARAM_BDOHALPBIFF_OFFSET UNITYSDK_OFFSET(0x13A050C0)
#define MOLEMOLE_REFEXPRESSIONVALUE_ONEPARAM_HPKOALKMGNI_OFFSET UNITYSDK_OFFSET(0x13A05320)
#define MOLEMOLE_REFEXPRESSIONVALUE_ONEPARAM_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x13A05100)
#define MOLEMOLE_REFEXPRESSIONVALUE_ONEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A050B0)

namespace MoleMole
{
	inline static constexpr unsigned int RefExpressionValue_OneParam_TypeDefinitionIndex = 89737;

	class RefExpressionValue_OneParam : public ::System::Object
	{
	public:
		::System::String* RefName; // 0x10
		::BIOEANJKLPH* Param; // 0x18
		::CFLFEHNOIAO ExpressionRetValType; // 0x20

		::System::Void _ctor(::System::String* LPKKGCEHJOE, ::BIOEANJKLPH* HNOPAJLDCFB, ::CFLFEHNOIAO OBNIAHNMHPF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BIOEANJKLPH*, ::CFLFEHNOIAO))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_ONEPARAM__CTOR_OFFSET))(this, LPKKGCEHJOE, HNOPAJLDCFB, OBNIAHNMHPF);
		}

		::CDGBEDPCGDI BDOHALPBIFF()
		{
			return ((::CDGBEDPCGDI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_ONEPARAM_BDOHALPBIFF_OFFSET))(this);
		}

		::DPKOIBEFPAO KNDMMHPDPIB(::PNEHPPKBLAM* NOAMHIFNHGO)
		{
			return ((::DPKOIBEFPAO(*)(::PVOID, ::PNEHPPKBLAM*))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_ONEPARAM_KNDMMHPDPIB_OFFSET))(this, NOAMHIFNHGO);
		}

		::System::Boolean HPKOALKMGNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REFEXPRESSIONVALUE_ONEPARAM_HPKOALKMGNI_OFFSET))(this);
		}
	};
}
