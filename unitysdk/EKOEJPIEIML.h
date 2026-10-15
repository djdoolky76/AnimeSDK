#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
class EKOEJPIEIML;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define EKOEJPIEIML_CTOR_OFFSET UNITYSDK_OFFSET(0x15508AF0)
#define EKOEJPIEIML_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x15508AA0)
#define EKOEJPIEIML_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15508A50)
#define EKOEJPIEIML_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x155089E0)

inline static constexpr unsigned int EKOEJPIEIML_TypeDefinitionIndex = 56601;

	class EKOEJPIEIML : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x18
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* LHPMNNODEAB; // 0x28
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
