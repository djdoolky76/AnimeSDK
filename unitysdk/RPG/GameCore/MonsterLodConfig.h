#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterLodConfig; }
namespace RPG::GameCore { class MonsterLodInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONSTERLODCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B6C80)
#define RPG_GAMECORE_MONSTERLODCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B6BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterLodConfig_TypeDefinitionIndex = 19108;

	class MonsterLodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MonsterLodInfo*>* MonsterLodInfoListMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERLODCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterLodConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterLodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERLODCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
