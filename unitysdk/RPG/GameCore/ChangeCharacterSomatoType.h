#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeCharacterSomatoType; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D565F30)
#define RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D565F70)
#define RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D565ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterSomatoType_TypeDefinitionIndex = 23678;

	class ChangeCharacterSomatoType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::CharacterSomatoType SomatoType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeCharacterSomatoType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeCharacterSomatoType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeCharacterSomatoType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeCharacterSomatoType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
