#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterShadowFactor; }

#define RPG_GAMECORE_SETCHARACTERSHADOWFACTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9B9B0)
#define RPG_GAMECORE_SETCHARACTERSHADOWFACTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9B9C0)
#define RPG_GAMECORE_SETCHARACTERSHADOWFACTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9B980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterShadowFactor_TypeDefinitionIndex = 21885;

	class SetCharacterShadowFactor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EnableFactor; // 0x18
		::System::Boolean OnlyEnableWhenUseShadowProbe; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADOWFACTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterShadowFactor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterShadowFactor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADOWFACTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterShadowFactor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterShadowFactor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADOWFACTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
