#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoWidthType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SomatoWidthRangeConfig; }

#define RPG_GAMECORE_SOMATOWIDTHRANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC3B00)
#define RPG_GAMECORE_SOMATOWIDTHRANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC39A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SomatoWidthRangeConfig_TypeDefinitionIndex = 17115;

	class SomatoWidthRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterSomatoWidthType SomatoWidthType; // 0x10
		::System::Single Min; // 0x14
		::System::Single Max; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOMATOWIDTHRANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SomatoWidthRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SomatoWidthRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOMATOWIDTHRANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
