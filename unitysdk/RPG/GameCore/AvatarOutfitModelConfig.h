#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarOutfitDecorationConfig; }
namespace RPG::GameCore { class AvatarOutfitModelConfig; }
namespace RPG::GameCore { class AvatarOutfitPartConfig; }

#define RPG_GAMECORE_AVATAROUTFITMODELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D418890)
#define RPG_GAMECORE_AVATAROUTFITMODELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D418760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarOutfitModelConfig_TypeDefinitionIndex = 16588;

	class AvatarOutfitModelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarOutfitPartConfig*>* PartConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarOutfitDecorationConfig*>* DecorationConfigList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITMODELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarOutfitModelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarOutfitModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITMODELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
