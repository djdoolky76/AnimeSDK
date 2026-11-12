#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKNPMFDGADK;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROL___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE0C5AA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROL___C__DISPLAYCLASS10_0___BIND_B__0_OFFSET UNITYSDK_OFFSET(0xE0C6080)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftSubmitControl___c__DisplayClass10_0_TypeDefinitionIndex = 82722;

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
