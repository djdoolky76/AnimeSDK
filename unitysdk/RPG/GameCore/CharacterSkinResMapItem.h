#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterSkinResMapItem; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERSKINRESMAPITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54B940)
#define RPG_GAMECORE_CHARACTERSKINRESMAPITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54B830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSkinResMapItem_TypeDefinitionIndex = 16540;

	class CharacterSkinResMapItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OriginPath; // 0x10
		::System::String* MapPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKINRESMAPITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterSkinResMapItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterSkinResMapItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKINRESMAPITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
