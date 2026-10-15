#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchCharacterAnchor; }
namespace RPG::GameCore { class SwitchCharacterAnchorV2; }

#define RPG_GAMECORE_SWITCHCHARACTERANCHORV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41220)
#define RPG_GAMECORE_SWITCHCHARACTERANCHORV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB41230)
#define RPG_GAMECORE_SWITCHCHARACTERANCHORV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB411F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCharacterAnchorV2_TypeDefinitionIndex = 20571;

	class SwitchCharacterAnchorV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SwitchCharacterAnchor* SwitchCharacterAnchorConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHORV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCharacterAnchorV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCharacterAnchorV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHORV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCharacterAnchorV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCharacterAnchorV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHORV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
