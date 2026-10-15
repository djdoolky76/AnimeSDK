#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitFloorSavedValueChangeV2; }

#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC98670)
#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC98680)
#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC98630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFloorSavedValueChangeV2_TypeDefinitionIndex = 20709;

	class WaitFloorSavedValueChangeV2 : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFloorSavedValueChangeV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFloorSavedValueChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFloorSavedValueChangeV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFloorSavedValueChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
