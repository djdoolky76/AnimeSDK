#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PuManHintNotifyConfig; }

#define RPG_GAMECORE_PUMANHINTNOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92F630)
#define RPG_GAMECORE_PUMANHINTNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92F530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuManHintNotifyConfig_TypeDefinitionIndex = 16963;

	class PuManHintNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsGold; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHINTNOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PuManHintNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PuManHintNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHINTNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
