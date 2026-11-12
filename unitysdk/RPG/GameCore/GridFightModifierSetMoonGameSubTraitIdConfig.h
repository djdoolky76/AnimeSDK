#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetMoonGameSubTraitIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETMOONGAMESUBTRAITIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E943800)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETMOONGAMESUBTRAITIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E943810)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETMOONGAMESUBTRAITIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9437C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetMoonGameSubTraitIdConfig_TypeDefinitionIndex = 19810;

	class GridFightModifierSetMoonGameSubTraitIdConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETMOONGAMESUBTRAITIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetMoonGameSubTraitIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetMoonGameSubTraitIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETMOONGAMESUBTRAITIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetMoonGameSubTraitIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetMoonGameSubTraitIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETMOONGAMESUBTRAITIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
