#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceBgEffectFrameConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEBGEFFECTFRAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C97F0)
#define RPG_GAMECORE_PERFORMANCEBGEFFECTFRAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C96B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceBgEffectFrameConfig_TypeDefinitionIndex = 19047;

	class PerformanceBgEffectFrameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Comment; // 0x18
		::System::UInt32 PrefabLoadMetaIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGEFFECTFRAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceBgEffectFrameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceBgEffectFrameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGEFFECTFRAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
