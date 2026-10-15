#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/SkillDamageRange.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GHPFNOBNMAJ;

#define GHPFNOBNMAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1E270)
#define GHPFNOBNMAJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE1E030)

inline static constexpr unsigned int GHPFNOBNMAJ_TypeDefinitionIndex = 13067;

	class GHPFNOBNMAJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint PIBDDOGGDKL; // 0x10
		::RPG::GameCore::SkillDamageRange HJNEHAAIIGI; // 0x18
		::RPG::GameCore::HealFormulaType POAHAIDOOKL; // 0x1C
		::RPG::GameCore::FixPoint ABINBKACLJK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPFNOBNMAJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GHPFNOBNMAJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHPFNOBNMAJ*))((::PBYTE)hIl2Cpp + GHPFNOBNMAJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
