#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
class EKOEJPIEIML;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define EKOEJPIEIML_CTOR_OFFSET UNITYSDK_OFFSET(0x15514760)
#define EKOEJPIEIML_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x15514710)
#define EKOEJPIEIML_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x155146C0)
#define EKOEJPIEIML_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15514650)

	class EKOEJPIEIML : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* LHPMNNODEAB; // 0x20
		::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOEJPIEIML_CTOR_OFFSET))(this);
		}

		::EKOEJPIEIML* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a3)
		{
			return ((::EKOEJPIEIML*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + EKOEJPIEIML_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOEJPIEIML_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOEJPIEIML_GETEVENTTYPE_OFFSET))(this);
		}

	};
