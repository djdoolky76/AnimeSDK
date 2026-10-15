#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/INGNCPPMOFG.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelFinishExternalApplyOpEvent; }

#define RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6E4080)
#define RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E4170)
#define RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6E4120)
#define RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6E40D0)
#define RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xE6E4000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFinishExternalApplyOpEvent_TypeDefinitionIndex = 56811;

	class LevelFinishExternalApplyOpEvent : public ::CMPGEAFHHDC
	{
	public:
		::INGNCPPMOFG Operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelFinishExternalApplyOpEvent* Init(::INGNCPPMOFG a1)
		{
			return ((::RPG::GameCore::LevelFinishExternalApplyOpEvent*(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
