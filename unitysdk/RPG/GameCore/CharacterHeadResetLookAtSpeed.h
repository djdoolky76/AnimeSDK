#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterHeadResetLookAtSpeed; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D544480)
#define RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D544490)
#define RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D544450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHeadResetLookAtSpeed_TypeDefinitionIndex = 20868;

	class CharacterHeadResetLookAtSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterHeadResetLookAtSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterHeadResetLookAtSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterHeadResetLookAtSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterHeadResetLookAtSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADRESETLOOKATSPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
