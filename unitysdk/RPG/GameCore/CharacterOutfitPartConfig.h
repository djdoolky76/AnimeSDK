#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterOutfitPart; }
namespace RPG::GameCore { class CharacterOutfitPartConfig; }

#define RPG_GAMECORE_CHARACTEROUTFITPARTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D546BF0)
#define RPG_GAMECORE_CHARACTEROUTFITPARTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D546B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitPartConfig_TypeDefinitionIndex = 17483;

	class CharacterOutfitPartConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CharacterOutfitPart*>* OutfitParts; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPARTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterOutfitPartConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterOutfitPartConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPARTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
