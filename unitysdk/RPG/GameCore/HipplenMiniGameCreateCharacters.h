#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenMiniGameCreateCharacters; }
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }

#define RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76E270)
#define RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76E280)
#define RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76E240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMiniGameCreateCharacters_TypeDefinitionIndex = 21323;

	class HipplenMiniGameCreateCharacters : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameLoadCharacter*>* CharacterList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenMiniGameCreateCharacters* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenMiniGameCreateCharacters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenMiniGameCreateCharacters* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenMiniGameCreateCharacters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMECREATECHARACTERS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
