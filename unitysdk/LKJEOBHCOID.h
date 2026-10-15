#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class ByCheckMonsterHurt; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define LKJEOBHCOID_CTOR_OFFSET UNITYSDK_OFFSET(0xB7516A0)
#define LKJEOBHCOID_DGLKAKEDDHK_OFFSET UNITYSDK_OFFSET(0xB751EF0)
#define LKJEOBHCOID_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB751820)
#define LKJEOBHCOID_FEJKOHFHHNN_OFFSET UNITYSDK_OFFSET(0xB751B90)
#define LKJEOBHCOID_OFDDFDGKNPJ_OFFSET UNITYSDK_OFFSET(0xB751D90)

inline static constexpr unsigned int LKJEOBHCOID_TypeDefinitionIndex = 57971;

	class LKJEOBHCOID
	{
	public:
		::RPG::GameCore::TurnBasedAbilityComponent* GMHDEIBBJBF; // 0x28
		::System::Boolean ABBEBCAMPFF; // 0x30
		::System::Boolean DBADIKCKIFL; // 0x31
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckMonsterHurt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckMonsterHurt*))((::PBYTE)hIl2Cpp + LKJEOBHCOID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJEOBHCOID_EVALUATE_OFFSET))(this);
		}

		::System::Void FEJKOHFHHNN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LKJEOBHCOID_FEJKOHFHHNN_OFFSET))(this, a1);
		}

		::System::Void OFDDFDGKNPJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LKJEOBHCOID_OFDDFDGKNPJ_OFFSET))(this, a1);
		}

		::System::Void DGLKAKEDDHK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LKJEOBHCOID_DGLKAKEDDHK_OFFSET))(this, a1);
		}

	};
