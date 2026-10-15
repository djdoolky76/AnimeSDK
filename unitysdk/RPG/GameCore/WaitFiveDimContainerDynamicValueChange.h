#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitFiveDimContainerDynamicValueChange; }
namespace System { class String; }

#define RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC69E20)
#define RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC69E30)
#define RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC69DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFiveDimContainerDynamicValueChange_TypeDefinitionIndex = 21438;

	class WaitFiveDimContainerDynamicValueChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
