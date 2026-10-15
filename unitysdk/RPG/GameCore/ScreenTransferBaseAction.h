#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ScreenTransferBaseAction; }

#define RPG_GAMECORE_SCREENTRANSFERBASEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5D060)
#define RPG_GAMECORE_SCREENTRANSFERBASEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA5D8D0)
#define RPG_GAMECORE_SCREENTRANSFERBASEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5D690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenTransferBaseAction_TypeDefinitionIndex = 20859;

	class ScreenTransferBaseAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERBASEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScreenTransferBaseAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScreenTransferBaseAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERBASEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScreenTransferBaseAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScreenTransferBaseAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERBASEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
