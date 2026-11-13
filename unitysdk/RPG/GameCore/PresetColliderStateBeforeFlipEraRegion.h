#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PresetColliderStateBeforeFlipEraRegion; }

#define RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF7D070)
#define RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EF7D080)
#define RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EF7CFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PresetColliderStateBeforeFlipEraRegion_TypeDefinitionIndex = 22740;

	class PresetColliderStateBeforeFlipEraRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
