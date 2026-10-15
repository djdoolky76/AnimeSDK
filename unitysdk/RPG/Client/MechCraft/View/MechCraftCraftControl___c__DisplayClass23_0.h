#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAMCAOCNLGB;
namespace RPG::Client::MechCraft::View { class MechCraftCraftControl; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD6100C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL___C__DISPLAYCLASS23_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD610D80)

namespace RPG::Client::MechCraft::View
{
	class MechCraftCraftControl___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftCraftControl* __4__this; // 0x10
		::HAMCAOCNLGB* vm; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL___C__DISPLAYCLASS23_0___REFRESH_B__0_OFFSET))(this, a1);
		}

	};
}
