#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleInstance; }

#define GIHHAHEAIHD_MKCCBFFIJHC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A392F0)

	class GIHHAHEAIHD_MKCCBFFIJHC : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHHAHEAIHD_MKCCBFFIJHC_CTOR_OFFSET))(this);
		}

	};
