#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameCharacterType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENMINIGAMELOADCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76E870)
#define RPG_GAMECORE_HIPPLENMINIGAMELOADCHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76E660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMiniGameLoadCharacter_TypeDefinitionIndex = 16791;

	class HipplenMiniGameLoadCharacter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenMiniGameCharacterType Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* UniqueName; // 0x18
		::System::String* StoryNPCID; // 0x20
		::System::String* PrefabPath; // 0x28
		::System::String* InitAnchor; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMELOADCHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenMiniGameLoadCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenMiniGameLoadCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMELOADCHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
