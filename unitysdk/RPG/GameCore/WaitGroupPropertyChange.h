#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitGroupPropertyChange; }

#define RPG_GAMECORE_WAITGROUPPROPERTYCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6C5A0)
#define RPG_GAMECORE_WAITGROUPPROPERTYCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6C5B0)
#define RPG_GAMECORE_WAITGROUPPROPERTYCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6C560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitGroupPropertyChange_TypeDefinitionIndex = 20734;

	class WaitGroupPropertyChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::UInt32 GroupID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* Name; // 0x28
		::RPG::GameCore::PredicateConfig* Condition; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPPROPERTYCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGroupPropertyChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGroupPropertyChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPPROPERTYCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGroupPropertyChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGroupPropertyChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPPROPERTYCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
