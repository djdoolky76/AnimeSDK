#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchMascotEnableCameraLookAt; }

#define RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB16830)
#define RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB16840)
#define RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB16800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotEnableCameraLookAt_TypeDefinitionIndex = 22004;

	class SwitchMascotEnableCameraLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotEnableCameraLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotEnableCameraLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotEnableCameraLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotEnableCameraLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
