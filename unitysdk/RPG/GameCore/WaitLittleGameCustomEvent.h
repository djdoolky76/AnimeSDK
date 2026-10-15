#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/LittleGameEventSourceType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitLittleGameCustomEvent; }

#define RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6D730)
#define RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6D740)
#define RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_MNEPMMABANL_OFFSET UNITYSDK_OFFSET(0x1DC6D960)
#define RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6D6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLittleGameCustomEvent_TypeDefinitionIndex = 21421;

	class WaitLittleGameCustomEvent : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::LittleGameEventSourceType SourceType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* EntityID; // 0x28
		::RPG::GameCore::DynamicString* EventName; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Void MNEPMMABANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_MNEPMMABANL_OFFSET))(this);
		}

	};
}
