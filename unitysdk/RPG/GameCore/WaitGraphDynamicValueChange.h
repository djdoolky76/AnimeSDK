#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitGraphDynamicValueChange; }
namespace System { class String; }

#define RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC999F0)
#define RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC99A00)
#define RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC999B0)

namespace RPG::GameCore
{
	class WaitGraphDynamicValueChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGraphDynamicValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGraphDynamicValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGraphDynamicValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGraphDynamicValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
