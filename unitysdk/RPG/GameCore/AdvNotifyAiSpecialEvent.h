#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STSpecialEventType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNotifyAiSpecialEvent; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A5990)
#define RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A59A0)
#define RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A5960)

namespace RPG::GameCore
{
	class AdvNotifyAiSpecialEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::STSpecialEventType SpecialEventType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Distance; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNotifyAiSpecialEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNotifyAiSpecialEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNotifyAiSpecialEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNotifyAiSpecialEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
