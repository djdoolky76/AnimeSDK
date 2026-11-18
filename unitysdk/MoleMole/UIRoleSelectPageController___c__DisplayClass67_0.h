#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15C68110)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS67_0__ONSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x15C68120)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass67_0_TypeDefinitionIndex = 59210;

	class UIRoleSelectPageController___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::BPHGNMNLLHF* robot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnShow_b__0(::BPHGNMNLLHF* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS67_0__ONSHOW_B__0_OFFSET))(this, match);
		}
	};
}
