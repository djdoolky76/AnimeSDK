#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitFloorCustomValueChange; }

#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6A710)
#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6A720)
#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6A6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFloorCustomValueChange_TypeDefinitionIndex = 20696;

	class WaitFloorCustomValueChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28
		::RPG::GameCore::PredicateConfig* Condition; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFloorCustomValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFloorCustomValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFloorCustomValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFloorCustomValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
