#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearTrigger; }
namespace System { class String; }

#define RPG_GAMECORE_CLEARTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B75A0)
#define RPG_GAMECORE_CLEARTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B75B0)
#define RPG_GAMECORE_CLEARTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B7570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearTrigger_TypeDefinitionIndex = 20024;

	class ClearTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* TriggerList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
