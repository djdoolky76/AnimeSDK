#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_TriggerLittleGameCustomEvent; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA87A60)
#define RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA87A70)
#define RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA87A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_TriggerLittleGameCustomEvent_TypeDefinitionIndex = 21325;

	class ST_Side_TriggerLittleGameCustomEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean TriggerOnEnter; // 0x18
		::System::Boolean TriggerOnExit; // 0x19
		::System::Byte _padding0[0x6];
		::System::String* EventName; // 0x20
		::System::Boolean UseVariable; // 0x28
		::System::Byte _padding1[0x7];
		::System::String* VariableName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
