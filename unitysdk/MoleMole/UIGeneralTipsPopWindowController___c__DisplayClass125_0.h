#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODLBEJANMEG;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS125_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A271C30)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS125_0__SETJUMPACCESS_B__0_OFFSET UNITYSDK_OFFSET(0x1A271C40)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS125_0__SETJUMPACCESS_B__1_OFFSET UNITYSDK_OFFSET(0x1A271C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass125_0_TypeDefinitionIndex = 73795;

	class UIGeneralTipsPopWindowController___c__DisplayClass125_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* onJump; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x18
		::ODLBEJANMEG* accessData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS125_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetJumpAccess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS125_0__SETJUMPACCESS_B__0_OFFSET))(this);
		}

		::System::Void _SetJumpAccess_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS125_0__SETJUMPACCESS_B__1_OFFSET))(this);
		}
	};
}
