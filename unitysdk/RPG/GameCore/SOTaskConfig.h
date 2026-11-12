#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SOTaskConfig; }

#define RPG_GAMECORE_SOTASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC81C40)
#define RPG_GAMECORE_SOTASKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC83440)
#define RPG_GAMECORE_SOTASKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC81D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SOTaskConfig_TypeDefinitionIndex = 20388;

	class SOTaskConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOTASKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SOTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SOTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOTASKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SOTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SOTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOTASKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
