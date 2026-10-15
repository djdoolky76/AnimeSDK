#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitAnimStateChange; }
namespace System { class String; }

#define RPG_GAMECORE_WAITANIMSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC66360)
#define RPG_GAMECORE_WAITANIMSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC66370)
#define RPG_GAMECORE_WAITANIMSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC66330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAnimStateChange_TypeDefinitionIndex = 22295;

	class WaitAnimStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StateName; // 0x18
		::System::Boolean IsEnter; // 0x20
		::System::Boolean IsListenAllLayer; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAnimStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAnimStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAnimStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAnimStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
