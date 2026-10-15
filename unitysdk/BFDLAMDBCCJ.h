#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterAttributeConfig; }

#define BFDLAMDBCCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB160F40)
#define BFDLAMDBCCJ_GETVALUE_OFFSET UNITYSDK_OFFSET(0xB160970)
#define BFDLAMDBCCJ_GJNKFBEGBNF_OFFSET UNITYSDK_OFFSET(0xB160D90)
#define BFDLAMDBCCJ_LFOLHIFMLEN_OFFSET UNITYSDK_OFFSET(0xB160CD0)

inline static constexpr unsigned int BFDLAMDBCCJ_TypeDefinitionIndex = 77396;

	class BFDLAMDBCCJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDLAMDBCCJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetValue(::IOGNBKGNPFD* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::IOGNBKGNPFD*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + BFDLAMDBCCJ_GETVALUE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean LFOLHIFMLEN(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig*))((::PBYTE)hIl2Cpp + BFDLAMDBCCJ_LFOLHIFMLEN_OFFSET))(a1, a2);
		}

		static ::System::Boolean GJNKFBEGBNF(::Entitas::IEntity* a1, ::RPG::GameCore::LittleGameAbilityAttributeType a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::Entitas::IEntity*, ::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BFDLAMDBCCJ_GJNKFBEGBNF_OFFSET))(a1, a2, a3);
		}

	};
