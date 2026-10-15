#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetServerGroupProperty; }

#define RPG_GAMECORE_SETSERVERGROUPPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA93400)
#define RPG_GAMECORE_SETSERVERGROUPPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA93410)
#define RPG_GAMECORE_SETSERVERGROUPPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA933D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetServerGroupProperty_TypeDefinitionIndex = 20728;

	class SetServerGroupProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSERVERGROUPPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetServerGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetServerGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSERVERGROUPPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetServerGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetServerGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSERVERGROUPPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
