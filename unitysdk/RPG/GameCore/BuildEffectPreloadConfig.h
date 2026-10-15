#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BuildEffectPreloadConfig; }
namespace RPG::GameCore { class BuildEffectPreloadItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BUILDEFFECTPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D452980)
#define RPG_GAMECORE_BUILDEFFECTPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D452800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BuildEffectPreloadConfig_TypeDefinitionIndex = 16349;

	class BuildEffectPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BuildEffectPreloadItem*>* BuildMonsterEffectConfigMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BuildEffectPreloadItem*>* BuildAvatarEffectConfigMap; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDEFFECTPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BuildEffectPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BuildEffectPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDEFFECTPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
