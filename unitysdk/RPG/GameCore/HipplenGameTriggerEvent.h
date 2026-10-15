#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenGameTriggerEvent; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73E800)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73E810)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73E7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameTriggerEvent_TypeDefinitionIndex = 21321;

	class HipplenGameTriggerEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EventName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameTriggerEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameTriggerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameTriggerEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameTriggerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
