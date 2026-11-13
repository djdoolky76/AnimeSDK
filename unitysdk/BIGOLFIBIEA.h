#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameValueCalculateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterCalculateConfig; }

#define BIGOLFIBIEA_CFDHEJGHCGK_OFFSET UNITYSDK_OFFSET(0x1BAB6C90)
#define BIGOLFIBIEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB6DA0)
#define BIGOLFIBIEA_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1BAB67B0)
#define BIGOLFIBIEA_LCCPPENAFPJ_OFFSET UNITYSDK_OFFSET(0x1BAB6AA0)
#define BIGOLFIBIEA_NNNBMNFGKFD_OFFSET UNITYSDK_OFFSET(0x1BAB6B60)

inline static constexpr unsigned int BIGOLFIBIEA_TypeDefinitionIndex = 79734;

	class BIGOLFIBIEA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGOLFIBIEA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetValue(::IOGNBKGNPFD* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::IOGNBKGNPFD*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + BIGOLFIBIEA_GETVALUE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean LCCPPENAFPJ(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig*))((::PBYTE)hIl2Cpp + BIGOLFIBIEA_LCCPPENAFPJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint NNNBMNFGKFD(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::LittleGameValueCalculateType a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::LittleGameValueCalculateType))((::PBYTE)hIl2Cpp + BIGOLFIBIEA_NNNBMNFGKFD_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint CFDHEJGHCGK(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BIGOLFIBIEA_CFDHEJGHCGK_OFFSET))(a1, a2);
		}

	};
