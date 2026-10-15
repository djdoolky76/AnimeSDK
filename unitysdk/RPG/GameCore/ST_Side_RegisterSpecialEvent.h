#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STSpecialEventType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_RegisterSpecialEvent; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA58E10)
#define RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA58E20)
#define RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA58DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_RegisterSpecialEvent_TypeDefinitionIndex = 20133;

	class ST_Side_RegisterSpecialEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::STSpecialEventType SpecialEventType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* AiEventWhenNotify; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_RegisterSpecialEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_RegisterSpecialEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_RegisterSpecialEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_RegisterSpecialEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
