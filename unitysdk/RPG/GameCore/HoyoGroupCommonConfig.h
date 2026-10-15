#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoGroupCommonConfig; }

#define RPG_GAMECORE_HOYOGROUPCOMMONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7437C0)
#define RPG_GAMECORE_HOYOGROUPCOMMONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7436F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoGroupCommonConfig_TypeDefinitionIndex = 17626;

	class HoyoGroupCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsGroupRefreshAsync; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPCOMMONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HoyoGroupCommonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HoyoGroupCommonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPCOMMONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
