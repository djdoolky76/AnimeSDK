#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitMissionCustomValueChange; }

#define RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6E500)
#define RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6E510)
#define RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6E4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMissionCustomValueChange_TypeDefinitionIndex = 21681;

	class WaitMissionCustomValueChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::UInt32 MainMissionID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30
		::RPG::GameCore::PredicateConfig* Condition; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMissionCustomValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMissionCustomValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMissionCustomValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMissionCustomValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
