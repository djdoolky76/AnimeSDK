#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBakedPresetConfig; }
namespace RPG::GameCore { class FiveDimPreloadInfo; }
namespace RPG::GameCore { class FiveDimRenderingItemStateMappingConfig; }
namespace RPG::GameCore { class FiveDimViewBakedInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIVEDIMBAKEDPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D682E10)
#define RPG_GAMECORE_FIVEDIMBAKEDPRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D682C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBakedPresetConfig_TypeDefinitionIndex = 16727;

	class FiveDimBakedPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimPreloadInfo* PlayerPreloadInfo; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FiveDimPreloadInfo*>* AvatarPreloadInfos; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimViewBakedInfo*>* ViewBakedInfos; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimRenderingItemStateMappingConfig*>* RenderingItemStateMappingBakedInfos; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBAKEDPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBakedPresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBakedPresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBAKEDPRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
