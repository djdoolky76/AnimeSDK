#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimExtraLevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEXTRALEVELGRAPHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BD8C0)
#define RPG_GAMECORE_FIVEDIMEXTRALEVELGRAPHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BD7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimExtraLevelGraphConfig_TypeDefinitionIndex = 18515;

	class FiveDimExtraLevelGraphConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LevelGraph; // 0x10
		::RPG::GameCore::LevelGraphValueSource* LevelGraphValueSource; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEXTRALEVELGRAPHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimExtraLevelGraphConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimExtraLevelGraphConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEXTRALEVELGRAPHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
