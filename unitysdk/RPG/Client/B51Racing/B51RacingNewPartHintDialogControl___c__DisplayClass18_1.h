#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::B51Racing { class B51RacingNewPartHintDialogViewModel; }
namespace System { class Object; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS18_1_CTOR_OFFSET UNITYSDK_OFFSET(0xC7B4170)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS18_1__ONCONFIRMCLICK_B__1_OFFSET UNITYSDK_OFFSET(0xC7B4180)

namespace RPG::Client::B51Racing
{
	template <typename T>
	class B51RacingNewPartHintDialogControl___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel* vm; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS18_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnConfirmClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS18_1__ONCONFIRMCLICK_B__1_OFFSET))(this);
		}

	};
}
