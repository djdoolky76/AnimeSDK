#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCurseChestEventEffectConfig; }

#define RPG_GAMECORE_ROGUECURSECHESTEVENTEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984F60)
#define RPG_GAMECORE_ROGUECURSECHESTEVENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCurseChestEventEffectConfig_TypeDefinitionIndex = 17907;

	class RogueCurseChestEventEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTEVENTEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCurseChestEventEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCurseChestEventEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTEVENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
