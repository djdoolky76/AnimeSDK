#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKNPMFDGADK;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROL___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD636DF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROL___C__DISPLAYCLASS10_0___BIND_B__0_OFFSET UNITYSDK_OFFSET(0xD6373D0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftCraftSubmitControl___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::IKNPMFDGADK* vm; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROL___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void __Bind_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROL___C__DISPLAYCLASS10_0___BIND_B__0_OFFSET))(this);
		}

	};
}
