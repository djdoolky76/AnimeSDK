#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameLevelVarBinding; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E4270)
#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E41B0)

namespace RPG::GameCore
{
	class LittleGameLevelVarBindingMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameLevelVarBinding*>* Bindings; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVarBindingMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
