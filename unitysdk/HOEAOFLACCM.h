#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleRightTopShortHintType.h"
#include "unitysdk/System/Object.h"

#define HOEAOFLACCM_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB0F80)

	class HOEAOFLACCM : public ::System::Object
	{
	public:
		::RPG::Client::TextID PJHMJKEIGOA; // 0x10
		::RPG::GameCore::BattleRightTopShortHintType GMPGDEINODK; // 0x20
		::System::UInt32 AALPICLABCO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEAOFLACCM_CTOR_OFFSET))(this);
		}

	};
