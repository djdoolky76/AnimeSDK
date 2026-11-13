#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/INGNCPPMOFG.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelDoExternalApplyOpEvent; }

#define RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FA90570)
#define RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA90660)
#define RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA90610)
#define RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA905C0)
#define RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1FA904F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDoExternalApplyOpEvent_TypeDefinitionIndex = 58033;

	class LevelDoExternalApplyOpEvent : public ::CMPGEAFHHDC
	{
	public:
		::INGNCPPMOFG Operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelDoExternalApplyOpEvent* Init(::INGNCPPMOFG a1)
		{
			return ((::RPG::GameCore::LevelDoExternalApplyOpEvent*(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
