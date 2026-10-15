#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameConstConfig; }

#define RPG_GAMECORE_LITTLEGAMECONSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DFD30)
#define RPG_GAMECORE_LITTLEGAMECONSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DFD40)
#define RPG_GAMECORE_LITTLEGAMECONSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DF7C0)

namespace RPG::GameCore
{
	class LittleGameConstConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECONSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameConstConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameConstConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECONSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameConstConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameConstConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECONSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
