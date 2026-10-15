#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectDurationConfig; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTDURATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D62FEB0)
#define RPG_GAMECORE_EFFECTDURATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D62FDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectDurationConfig_TypeDefinitionIndex = 16347;

	class EffectDurationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::Single Duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTDURATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectDurationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectDurationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTDURATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
