#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RedDotGroupType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RedDotConfig; }
namespace RPG::GameCore { class RedDotGroupConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_REDDOTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D975290)
#define RPG_GAMECORE_REDDOTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D975190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotConfig_TypeDefinitionIndex = 24415;

	class RedDotConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RedDotGroupType, ::RPG::GameCore::RedDotGroupConfig*>* RedDotMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RedDotConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RedDotConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
