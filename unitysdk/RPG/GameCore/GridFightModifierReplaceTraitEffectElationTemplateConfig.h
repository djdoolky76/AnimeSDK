#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierReplaceTraitEffectElationTemplateConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D707B10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D707B20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReplaceTraitEffectElationTemplateConfig_TypeDefinitionIndex = 19489;

	class GridFightModifierReplaceTraitEffectElationTemplateConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
