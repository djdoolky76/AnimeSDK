#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntityList; }

#define MDFIHKILAPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A33B0)

	class MDFIHKILAPL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntityList* KGKEPIJIABL; // 0x10
		::RPG::GameCore::GridFightBattleEventHintType INAHCAEDLEA; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint IENBBJKOCEN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFIHKILAPL_CTOR_OFFSET))(this);
		}

	};
