#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchOnPartialFlipDevice; }

#define RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17230)
#define RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB17240)
#define RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB17170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchOnPartialFlipDevice_TypeDefinitionIndex = 22337;

	class SwitchOnPartialFlipDevice : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchOnPartialFlipDevice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchOnPartialFlipDevice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchOnPartialFlipDevice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchOnPartialFlipDevice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
