#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideEndTransferColor; }

#define RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13AC10)
#define RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F13AC20)
#define RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F13ABD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideEndTransferColor_TypeDefinitionIndex = 22311;

	class OverrideEndTransferColor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ScreenTransferType Color; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideEndTransferColor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideEndTransferColor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideEndTransferColor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideEndTransferColor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERCOLOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
