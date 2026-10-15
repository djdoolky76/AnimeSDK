#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AdventureOnSetEnterBattleExtraTarget; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_CLEAR_OFFSET UNITYSDK_OFFSET(0xE57B020)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_CTOR_OFFSET UNITYSDK_OFFSET(0xE57B110)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE57B0C0)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE57B070)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_INIT_OFFSET UNITYSDK_OFFSET(0xE57AFD0)

namespace RPG::GameCore
{
	class AdventureOnSetEnterBattleExtraTarget : public ::CMPGEAFHHDC
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Targets; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureOnSetEnterBattleExtraTarget* Init(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::RPG::GameCore::AdventureOnSetEnterBattleExtraTarget*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
