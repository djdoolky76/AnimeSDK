#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindMaterialOverlayConfig; }
namespace RPG::GameCore { class TimeRewindOverlayMaterials; }

#define RPG_GAMECORE_TIMEREWINDMATERIALOVERLAYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5AF20)
#define RPG_GAMECORE_TIMEREWINDMATERIALOVERLAYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5ADC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindMaterialOverlayConfig_TypeDefinitionIndex = 17568;

	class TimeRewindMaterialOverlayConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TimeRewindView>* ExcludeView; // 0x10
		::Il2CppArray<::RPG::GameCore::TimeRewindOverlayMaterials*>* Paths; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDMATERIALOVERLAYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindMaterialOverlayConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindMaterialOverlayConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDMATERIALOVERLAYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
