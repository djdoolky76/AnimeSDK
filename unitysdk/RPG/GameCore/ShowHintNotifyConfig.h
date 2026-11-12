#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowHintNotifyConfig; }

#define RPG_GAMECORE_SHOWHINTNOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF2C30)
#define RPG_GAMECORE_SHOWHINTNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECF2B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHintNotifyConfig_TypeDefinitionIndex = 17128;

	class ShowHintNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Visible; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHINTNOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowHintNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowHintNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHINTNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
