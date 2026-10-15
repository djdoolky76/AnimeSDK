#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STSpecialEventType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ST_Side_NotifySpecialEvent; }

#define RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA85790)
#define RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA857A0)
#define RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA85750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_NotifySpecialEvent_TypeDefinitionIndex = 20134;

	class ST_Side_NotifySpecialEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::STSpecialEventType SpecialEventType; // 0x18
		::System::Boolean TriggerOnEnter; // 0x1C
		::System::Boolean TriggerOnExit; // 0x1D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::DynamicFloat* Distance; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_NotifySpecialEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_NotifySpecialEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_NotifySpecialEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_NotifySpecialEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
