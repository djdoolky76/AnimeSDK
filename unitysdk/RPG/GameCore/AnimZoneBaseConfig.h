#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimZoneBaseConfig; }

#define RPG_GAMECORE_ANIMZONEBASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C5B40)
#define RPG_GAMECORE_ANIMZONEBASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C5B50)
#define RPG_GAMECORE_ANIMZONEBASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C59E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimZoneBaseConfig_TypeDefinitionIndex = 16321;

	class AnimZoneBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimZoneType ZoneType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEBASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimZoneBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimZoneBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEBASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimZoneBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimZoneBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEBASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
