#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillUIPreShowType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntityList; }

#define EFJCLCMOLGO_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4EBE0)

	class EFJCLCMOLGO : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntityList* KGKEPIJIABL; // 0x10
		::RPG::GameCore::FixPoint IFLBAAABKAI; // 0x18
		::RPG::GameCore::SkillUIPreShowType LFGLFCLEHMB; // 0x20
		::System::Boolean MOKNCFJICIC; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJCLCMOLGO_CTOR_OFFSET))(this);
		}

	};
