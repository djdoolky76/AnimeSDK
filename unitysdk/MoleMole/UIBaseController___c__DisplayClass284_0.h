#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS284_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19661FA0)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS284_0__SHOWWITHANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x19661FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass284_0_TypeDefinitionIndex = 55819;

	class UIBaseController___c__DisplayClass284_0 : public ::System::Object
	{
	public:
		::System::Action* callBack; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS284_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowWithAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS284_0__SHOWWITHANIMATION_B__0_OFFSET))(this);
		}
	};
}
