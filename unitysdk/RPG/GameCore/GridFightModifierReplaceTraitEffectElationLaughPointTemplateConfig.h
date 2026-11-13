#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierReplaceTraitEffectElationLaughPointTemplateConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONLAUGHPOINTTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BAFB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONLAUGHPOINTTEMPLATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BAFC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONLAUGHPOINTTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BAF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReplaceTraitEffectElationLaughPointTemplateConfig_TypeDefinitionIndex = 19807;

	class GridFightModifierReplaceTraitEffectElationLaughPointTemplateConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONLAUGHPOINTTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationLaughPointTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationLaughPointTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONLAUGHPOINTTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationLaughPointTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationLaughPointTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONLAUGHPOINTTEMPLATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
