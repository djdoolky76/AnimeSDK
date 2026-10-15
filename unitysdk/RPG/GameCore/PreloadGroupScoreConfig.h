#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreloadGroupScoreConfig; }
namespace RPG::GameCore { class PreloadItemScoreConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PRELOADGROUPSCORECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93F9B0)
#define RPG_GAMECORE_PRELOADGROUPSCORECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93F880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadGroupScoreConfig_TypeDefinitionIndex = 16371;

	class PreloadGroupScoreConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PreloadGroupType GroupType; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PreloadItemScoreConfig*>* GroupIdScoreConfigMap; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADGROUPSCORECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadGroupScoreConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadGroupScoreConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADGROUPSCORECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
