#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleRightTopShortHintType.h"
#include "unitysdk/System/Object.h"

#define HOEAOFLACCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A388D60)

inline static constexpr unsigned int HOEAOFLACCM_TypeDefinitionIndex = 56304;

	class HOEAOFLACCM : public ::System::Object
	{
	public:
		::System::UInt32 AALPICLABCO; // 0x10
		::RPG::GameCore::BattleRightTopShortHintType GMPGDEINODK; // 0x14
		::RPG::Client::TextID PJHMJKEIGOA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEAOFLACCM_CTOR_OFFSET))(this);
		}

	};
