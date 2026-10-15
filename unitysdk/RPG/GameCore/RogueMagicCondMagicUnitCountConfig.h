#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicCondMagicUnitCountConfig; }

#define RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D36F0)
#define RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9D3700)
#define RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9D36B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondMagicUnitCountConfig_TypeDefinitionIndex = 19578;

	class RogueMagicCondMagicUnitCountConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
