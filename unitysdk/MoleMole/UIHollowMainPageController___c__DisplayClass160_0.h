#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DDAIJPPLLEI;
class OBKNEEOLOPB;
namespace MoleMole { class UIHollowMainPageController; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196AA7D0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__ONPUNISHOVERLOAD_G__AFTERPERFORM_1_OFFSET UNITYSDK_OFFSET(0x196C6900)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__ONPUNISHOVERLOAD_G__BEFOREPERFORM_0_OFFSET UNITYSDK_OFFSET(0x196AAA30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass160_0_TypeDefinitionIndex = 84636;

	class UIHollowMainPageController___c__DisplayClass160_0 : public ::System::Object
	{
	public:
		::DDAIJPPLLEI* data; // 0x10
		::OBKNEEOLOPB* hollowModel; // 0x18
		::MoleMole::UIHollowMainPageController* __4__this; // 0x20
		::System::Boolean maxState; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 curseCount; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPunishOverload_g__BeforePerform_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__ONPUNISHOVERLOAD_G__BEFOREPERFORM_0_OFFSET))(this);
		}

		::System::Void _OnPunishOverload_g__AfterPerform_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__ONPUNISHOVERLOAD_G__AFTERPERFORM_1_OFFSET))(this);
		}
	};
}
