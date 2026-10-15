#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageSubRegionConfig; }

#define RPG_GAMECORE_STAGESUBREGIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB150E0)
#define RPG_GAMECORE_STAGESUBREGIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB150A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageSubRegionConfig_TypeDefinitionIndex = 19192;

	class StageSubRegionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGESUBREGIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageSubRegionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageSubRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGESUBREGIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
