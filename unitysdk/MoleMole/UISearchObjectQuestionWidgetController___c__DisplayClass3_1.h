#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14CCF4C0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_1__ONCLICKNEXTOREND_B__1_OFFSET UNITYSDK_OFFSET(0x14CCF4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectQuestionWidgetController___c__DisplayClass3_1_TypeDefinitionIndex = 75187;

	template <typename T>
	class UISearchObjectQuestionWidgetController___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnClickNextOrEnd_b__1(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_1__ONCLICKNEXTOREND_B__1_OFFSET))(this, x);
		}
	};
}
