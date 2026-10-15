#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAdventureDynamicValue; }

#define RPG_GAMECORE_SETADVENTUREDYNAMICVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA93B50)
#define RPG_GAMECORE_SETADVENTUREDYNAMICVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA93B60)
#define RPG_GAMECORE_SETADVENTUREDYNAMICVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA93B20)

namespace RPG::GameCore
{
	class SetAdventureDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVENTUREDYNAMICVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdventureDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdventureDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVENTUREDYNAMICVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdventureDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdventureDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVENTUREDYNAMICVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
