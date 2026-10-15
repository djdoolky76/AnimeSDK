#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define MPOIBBBIADJ_KLKHEGGHOLA_OFFSET UNITYSDK_OFFSET(0xBA449B0)
#define MPOIBBBIADJ_MPDMJBILNMI_OFFSET UNITYSDK_OFFSET(0xBA44A60)
#define MPOIBBBIADJ_NJLICGGKCAB_OFFSET UNITYSDK_OFFSET(0xBA44AE0)

inline static constexpr unsigned int MPOIBBBIADJ_TypeDefinitionIndex = 55746;

	class MPOIBBBIADJ : public ::System::Object
	{
	public:
		static ::System::Boolean KLKHEGGHOLA(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + MPOIBBBIADJ_KLKHEGGHOLA_OFFSET))(a1, a2);
		}

		static ::System::Boolean MPDMJBILNMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + MPOIBBBIADJ_MPDMJBILNMI_OFFSET))(a1);
		}

		static ::System::Boolean NJLICGGKCAB(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MPOIBBBIADJ_NJLICGGKCAB_OFFSET))(a1, a2);
		}

	};
