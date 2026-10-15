#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropOverrideAnimLayerConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPOVERRIDEANIMLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D950980)
#define RPG_GAMECORE_PROPOVERRIDEANIMLAYERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D950870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropOverrideAnimLayerConfig_TypeDefinitionIndex = 17584;

	class PropOverrideAnimLayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnimationClipPath; // 0x10
		::System::Single FixedNormalizedTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOVERRIDEANIMLAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropOverrideAnimLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropOverrideAnimLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOVERRIDEANIMLAYERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
