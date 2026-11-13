#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityStartElationTime; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FA92490)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA92580)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA92530)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA924E0)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_INIT_OFFSET UNITYSDK_OFFSET(0x1FA92430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityStartElationTime_TypeDefinitionIndex = 57980;

	class LevelEntityStartElationTime : public ::CMPGEAFHHDC
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Targets; // 0x18
		::RPG::GameCore::GameEntity* Caster; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityStartElationTime* Init(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::RPG::GameCore::LevelEntityStartElationTime*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
