#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyBuildBlock; }
namespace RPG::GameCore { class TrainPartyBuildItemConfig; }

#define RPG_GAMECORE_TRAINPARTYBUILDITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2DF00)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2DE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemConfig_TypeDefinitionIndex = 16272;

	class TrainPartyBuildItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartyBuildBlock*>* Blocks; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyBuildItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyBuildItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
