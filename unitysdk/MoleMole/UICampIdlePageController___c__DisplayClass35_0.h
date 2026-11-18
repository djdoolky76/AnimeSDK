#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
namespace MoleMole { class UILineupSelectContext; }

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17055AF0)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__ONCLICKSTARTBATTLE_B__0_OFFSET UNITYSDK_OFFSET(0x17055F00)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__ONCLICKSTARTBATTLE_B__1_OFFSET UNITYSDK_OFFSET(0x17055B00)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass35_0_TypeDefinitionIndex = 38823;

	class UICampIdlePageController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectContext* context; // 0x10
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickStartBattle_b__1(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__ONCLICKSTARTBATTLE_B__1_OFFSET))(this, data);
		}

		::System::Void _OnClickStartBattle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__ONCLICKSTARTBATTLE_B__0_OFFSET))(this);
		}
	};
}
