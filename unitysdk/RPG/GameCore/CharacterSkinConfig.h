#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterSkinConfig; }
namespace RPG::GameCore { class CharacterSkinResMapItem; }

#define RPG_GAMECORE_CHARACTERSKINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54B820)
#define RPG_GAMECORE_CHARACTERSKINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54B760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSkinConfig_TypeDefinitionIndex = 16541;

	class CharacterSkinConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CharacterSkinResMapItem*>* ResMapList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterSkinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterSkinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
