#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TRFLevelComponentConfig; }
namespace RPG::GameCore { class TRFStageConfig; }

#define RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB53900)
#define RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB53910)
#define RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB538A0)

namespace RPG::GameCore
{
	class TRFLevelComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TRFStageConfig*>* Stages; // 0x10
		::System::Single GridWidth; // 0x18
		::System::Single GridHeight; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFLevelComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFLevelComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFLevelComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFLevelComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
