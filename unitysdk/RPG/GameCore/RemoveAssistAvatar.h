#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveAssistAvatar; }

#define RPG_GAMECORE_REMOVEASSISTAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D983F50)
#define RPG_GAMECORE_REMOVEASSISTAVATAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D983F60)
#define RPG_GAMECORE_REMOVEASSISTAVATAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D983E90)

namespace RPG::GameCore
{
	class RemoveAssistAvatar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEASSISTAVATAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveAssistAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEASSISTAVATAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveAssistAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEASSISTAVATAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
