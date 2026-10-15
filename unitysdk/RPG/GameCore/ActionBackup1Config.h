#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionBackup1Config; }

#define RPG_GAMECORE_ACTIONBACKUP1CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3420F0)
#define RPG_GAMECORE_ACTIONBACKUP1CONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D342100)
#define RPG_GAMECORE_ACTIONBACKUP1CONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3420B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBackup1Config_TypeDefinitionIndex = 17059;

	class ActionBackup1Config : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP1CONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionBackup1Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionBackup1Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP1CONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionBackup1Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionBackup1Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP1CONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
