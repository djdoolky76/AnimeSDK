#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillDamageRange.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PMOFCNKNJCA;

#define PMOFCNKNJCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30CBB0)
#define PMOFCNKNJCA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D30C970)

inline static constexpr unsigned int PMOFCNKNJCA_TypeDefinitionIndex = 13066;

	class PMOFCNKNJCA : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint ABINBKACLJK; // 0x10
		::RPG::GameCore::FixPoint PIBDDOGGDKL; // 0x18
		::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x20
		::RPG::GameCore::SkillDamageRange HJNEHAAIIGI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOFCNKNJCA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PMOFCNKNJCA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PMOFCNKNJCA*))((::PBYTE)hIl2Cpp + PMOFCNKNJCA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
