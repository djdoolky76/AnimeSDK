#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleObsoleteMotionConfig; }

#define RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F47C0)
#define RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F4780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleObsoleteMotionConfig_TypeDefinitionIndex = 16318;

	class FreeStyleObsoleteMotionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleObsoleteMotionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleObsoleteMotionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
