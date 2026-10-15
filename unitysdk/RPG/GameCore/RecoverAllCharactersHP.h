#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecoverAllCharactersHP; }

#define RPG_GAMECORE_RECOVERALLCHARACTERSHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D947750)
#define RPG_GAMECORE_RECOVERALLCHARACTERSHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D947760)
#define RPG_GAMECORE_RECOVERALLCHARACTERSHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D947690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecoverAllCharactersHP_TypeDefinitionIndex = 21706;

	class RecoverAllCharactersHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOVERALLCHARACTERSHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecoverAllCharactersHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecoverAllCharactersHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOVERALLCHARACTERSHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecoverAllCharactersHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecoverAllCharactersHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOVERALLCHARACTERSHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
