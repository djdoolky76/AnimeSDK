#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitFloorCustomValueChangeV2; }

#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC98210)
#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC98220)
#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC981D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFloorCustomValueChangeV2_TypeDefinitionIndex = 20703;

	class WaitFloorCustomValueChangeV2 : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28
		::RPG::GameCore::PredicateConfig* Condition; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFloorCustomValueChangeV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFloorCustomValueChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFloorCustomValueChangeV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFloorCustomValueChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
