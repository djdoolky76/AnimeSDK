#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEventSourceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TriggerLittleGameCustomEvent; }

#define RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC540B0)
#define RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC540C0)
#define RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_MNEPMMABANL_OFFSET UNITYSDK_OFFSET(0x1DC54220)
#define RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC54080)

namespace RPG::GameCore
{
	class TriggerLittleGameCustomEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LittleGameEventSourceType SourceType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* EntityID; // 0x20
		::RPG::GameCore::DynamicString* EventName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Void MNEPMMABANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_MNEPMMABANL_OFFSET))(this);
		}

	};
}
