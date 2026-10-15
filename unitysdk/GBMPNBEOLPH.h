#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

	struct alignas(4) GBMPNBEOLPH
	{
		::RPG::GameCore::AttackDamageType JCCDPOCDGCD; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint CJMGFNIILIG; // 0x18
		::RPG::GameCore::FixPoint GICPKLPMOHL; // 0x20
		::System::Int32 ONHEINBLDNM; // 0x28
		::RPG::GameCore::AttackDamageType HBDKIJABMII; // 0x2C
		::System::Boolean IMEEEKIODMO; // 0x30
	};
