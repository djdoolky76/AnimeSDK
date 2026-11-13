#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/SkillDamageRange.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GHPFNOBNMAJ;

#define GHPFNOBNMAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63FD70)
#define GHPFNOBNMAJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E63FB30)

inline static constexpr unsigned int GHPFNOBNMAJ_TypeDefinitionIndex = 13135;

	class GHPFNOBNMAJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint PIBDDOGGDKL; // 0x10
		::RPG::GameCore::FixPoint ABINBKACLJK; // 0x18
		::RPG::GameCore::HealFormulaType POAHAIDOOKL; // 0x20
		::RPG::GameCore::SkillDamageRange HJNEHAAIIGI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPFNOBNMAJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GHPFNOBNMAJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHPFNOBNMAJ*))((::PBYTE)hIl2Cpp + GHPFNOBNMAJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
