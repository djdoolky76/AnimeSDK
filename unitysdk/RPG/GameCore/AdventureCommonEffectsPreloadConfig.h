#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureCommonEffectsPreloadConfig; }
namespace RPG::GameCore { class PreloadItem; }

#define RPG_GAMECORE_ADVENTURECOMMONEFFECTSPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D399DB0)
#define RPG_GAMECORE_ADVENTURECOMMONEFFECTSPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D399C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCommonEffectsPreloadConfig_TypeDefinitionIndex = 16368;

	class AdventureCommonEffectsPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PlaneType PlaneType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::PreloadItem*>* EffectPaths; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECOMMONEFFECTSPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCommonEffectsPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCommonEffectsPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECOMMONEFFECTSPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
