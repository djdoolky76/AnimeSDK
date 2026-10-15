#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionBackup2Config; }

#define RPG_GAMECORE_ACTIONBACKUP2CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D342150)
#define RPG_GAMECORE_ACTIONBACKUP2CONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D342160)
#define RPG_GAMECORE_ACTIONBACKUP2CONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D342110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBackup2Config_TypeDefinitionIndex = 17060;

	class ActionBackup2Config : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP2CONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionBackup2Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP2CONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionBackup2Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP2CONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
