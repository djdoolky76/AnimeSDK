#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMFOPIJNNDI.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
namespace RPG::GameCore { class GameEntity; }

#define CECCNCOACPK_CTOR_OFFSET UNITYSDK_OFFSET(0xC77CEA0)
#define CECCNCOACPK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC77CEB0)
#define CECCNCOACPK_GET_PUZZLEEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC77CF00)
#define CECCNCOACPK_SET_PUZZLEEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC77CF10)

	class CECCNCOACPK : public ::HMFOPIJNNDI
	{
	public:
		::RPG::GameCore::PuzzleCustomEvent _PuzzleEventType_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PuzzleCustomEvent a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CECCNCOACPK_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CECCNCOACPK_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::PuzzleCustomEvent get_PuzzleEventType()
		{
			return ((::RPG::GameCore::PuzzleCustomEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + CECCNCOACPK_GET_PUZZLEEVENTTYPE_OFFSET))(this);
		}

		::System::Void set_PuzzleEventType(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CECCNCOACPK_SET_PUZZLEEVENTTYPE_OFFSET))(this, a1);
		}

	};
