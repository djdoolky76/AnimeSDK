#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFOEBJMEFKG;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTASSISTANTCONTROL___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C4760)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTASSISTANTCONTROL___C__DISPLAYCLASS12_0___BIND_B__0_OFFSET UNITYSDK_OFFSET(0x1C6C56B0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftAssistantControl___c__DisplayClass12_0_TypeDefinitionIndex = 82615;

	class MechCraftCraftAssistantControl___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::IFOEBJMEFKG* vm; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTASSISTANTCONTROL___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void __Bind_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTASSISTANTCONTROL___C__DISPLAYCLASS12_0___BIND_B__0_OFFSET))(this);
		}

	};
}
