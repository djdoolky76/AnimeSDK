#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HimekoNovaAssistSkillUIConfig; }

#define RPG_GAMECORE_HIMEKONOVAASSISTSKILLUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73CB70)
#define RPG_GAMECORE_HIMEKONOVAASSISTSKILLUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73CAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HimekoNovaAssistSkillUIConfig_TypeDefinitionIndex = 18195;

	class HimekoNovaAssistSkillUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TrueSkillID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIMEKONOVAASSISTSKILLUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HimekoNovaAssistSkillUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HimekoNovaAssistSkillUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIMEKONOVAASSISTSKILLUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
