#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPropStateChange; }

#define RPG_GAMECORE_WAITPROPSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9F140)
#define RPG_GAMECORE_WAITPROPSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9F150)
#define RPG_GAMECORE_WAITPROPSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9F100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropStateChange_TypeDefinitionIndex = 20744;

	class WaitPropStateChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::UInt32 InstanceID; // 0x20
		::RPG::GameCore::PropState FromState; // 0x24
		::System::Boolean FromAnyState; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PropState ToState; // 0x2C
		::System::Boolean ToAnyState; // 0x30
		::System::Byte _padding1[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
