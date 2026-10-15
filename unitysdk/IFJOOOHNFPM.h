#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define IFJOOOHNFPM_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1ECD0)

	class IFJOOOHNFPM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Boolean MEIPHCEJAOH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJOOOHNFPM_CTOR_OFFSET))(this);
		}

	};
