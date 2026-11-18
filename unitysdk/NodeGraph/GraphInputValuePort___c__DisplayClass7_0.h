#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/System/Object.h"

#define NODEGRAPH_GRAPHINPUTVALUEPORT___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB9B80)
#define NODEGRAPH_GRAPHINPUTVALUEPORT___C__DISPLAYCLASS7_0__SETVALUE_B__0_OFFSET UNITYSDK_OFFSET(0x15FB9B90)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphInputValuePort___c__DisplayClass7_0_TypeDefinitionIndex = 77780;

	class GraphInputValuePort___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::DPKOIBEFPAO value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO _SetValue_b__0()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT___C__DISPLAYCLASS7_0__SETVALUE_B__0_OFFSET))(this);
		}
	};
}
