#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectAdaptCharaScaleDataItem; }

#define RPG_GAMECORE_EFFECTADAPTCHARASCALEDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D62E780)
#define RPG_GAMECORE_EFFECTADAPTCHARASCALEDATAITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D62E620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectAdaptCharaScaleDataItem_TypeDefinitionIndex = 16492;

	class EffectAdaptCharaScaleDataItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MazeScale; // 0x10
		::System::Single BattleScale; // 0x14
		::System::Single ActivityScale; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTADAPTCHARASCALEDATAITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectAdaptCharaScaleDataItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectAdaptCharaScaleDataItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTADAPTCHARASCALEDATAITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
