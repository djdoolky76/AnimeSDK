#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UINotifyMonopolyCellEventFinish; }

#define RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6FAC0)
#define RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6FAD0)
#define RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6FA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UINotifyMonopolyCellEventFinish_TypeDefinitionIndex = 21726;

	class UINotifyMonopolyCellEventFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UINotifyMonopolyCellEventFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UINotifyMonopolyCellEventFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UINotifyMonopolyCellEventFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UINotifyMonopolyCellEventFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
