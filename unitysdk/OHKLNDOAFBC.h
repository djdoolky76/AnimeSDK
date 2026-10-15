#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
class OHKLNDOAFBC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define OHKLNDOAFBC_CTOR_OFFSET UNITYSDK_OFFSET(0xBE71E70)
#define OHKLNDOAFBC_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBE71E20)
#define OHKLNDOAFBC_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBE71DD0)
#define OHKLNDOAFBC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE71D60)

inline static constexpr unsigned int OHKLNDOAFBC_TypeDefinitionIndex = 56600;

	class OHKLNDOAFBC : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x18
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HHKJOLGOOBN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKLNDOAFBC_CTOR_OFFSET))(this);
		}

		::OHKLNDOAFBC* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a3)
		{
			return ((::OHKLNDOAFBC*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + OHKLNDOAFBC_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKLNDOAFBC_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKLNDOAFBC_GETEVENTTYPE_OFFSET))(this);
		}

	};
