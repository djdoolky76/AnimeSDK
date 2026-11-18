#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x178575E0)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_2__ONSCROLLITEMUPDATE_B__7_OFFSET UNITYSDK_OFFSET(0x178575F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookItemWidgetController___c__DisplayClass9_2_TypeDefinitionIndex = 90053;

	template <typename T1, typename T2>
	class UIHandBookItemWidgetController___c__DisplayClass9_2 : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::System::Int32, ::System::Int32> suitPair; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_2__ONSCROLLITEMUPDATE_B__7_OFFSET))(this);
		}
	};
}
