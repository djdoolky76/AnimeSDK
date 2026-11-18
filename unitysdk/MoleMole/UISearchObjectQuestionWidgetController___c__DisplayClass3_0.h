#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISearchObjectQuestionWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14CCF480)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONCLICKNEXTOREND_B__0_OFFSET UNITYSDK_OFFSET(0x14CCF490)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectQuestionWidgetController___c__DisplayClass3_0_TypeDefinitionIndex = 75186;

	class UISearchObjectQuestionWidgetController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::UISearchObjectQuestionWidgetController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* correctList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickNextOrEnd_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONCLICKNEXTOREND_B__0_OFFSET))(this);
		}
	};
}
