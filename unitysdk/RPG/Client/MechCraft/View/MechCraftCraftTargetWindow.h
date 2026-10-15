#pragma once
#include "unitysdk/unitysdk.h"
class BJDBKICFGAM;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xD638DC0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftTargetWindow_TypeDefinitionIndex = 79951;

	class MechCraftCraftTargetWindow
	{
	public:
		::System::Void _ctor(::BJDBKICFGAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJDBKICFGAM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETWINDOW_CTOR_OFFSET))(this, a1);
		}

	};
}
