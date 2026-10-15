#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableRandomTriggerAnimEvent; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D612AE0)
#define RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D612AF0)
#define RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D612AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableRandomTriggerAnimEvent_TypeDefinitionIndex = 22428;

	class EnableRandomTriggerAnimEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueKey; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Events; // 0x28
		::System::Single MinRandomTime; // 0x30
		::System::Single MaxRandomTime; // 0x34
		::Il2CppArray<::System::Single>* MultiTriggerWeightList; // 0x38
		::System::Single MultiTriggerDeltaTime; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableRandomTriggerAnimEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableRandomTriggerAnimEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableRandomTriggerAnimEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableRandomTriggerAnimEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
