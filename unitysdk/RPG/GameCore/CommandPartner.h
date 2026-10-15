#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CommandPartner; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_COMMANDPARTNER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59D340)
#define RPG_GAMECORE_COMMANDPARTNER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59D350)
#define RPG_GAMECORE_COMMANDPARTNER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59D310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommandPartner_TypeDefinitionIndex = 22696;

	class CommandPartner : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MemberName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMANDPARTNER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CommandPartner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CommandPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMANDPARTNER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CommandPartner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CommandPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMANDPARTNER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
