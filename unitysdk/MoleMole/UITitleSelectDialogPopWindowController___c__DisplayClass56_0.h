#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MELFFONPBBD;
class NEHAIOGEKMN;

#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1055C530)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0__ONUPDATETITLEDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1055C540)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleSelectDialogPopWindowController___c__DisplayClass56_0_TypeDefinitionIndex = 79086;

	class UITitleSelectDialogPopWindowController___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::NEHAIOGEKMN* variableTemplateExt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUpdateTitleData_b__0(::MELFFONPBBD* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::MELFFONPBBD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0__ONUPDATETITLEDATA_B__0_OFFSET))(this, data);
		}
	};
}
