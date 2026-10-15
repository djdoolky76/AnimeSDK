#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierCustomEventSortType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierCustomEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierCustomEvent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define BBMOMCMBINK_CTOR_OFFSET UNITYSDK_OFFSET(0x15E869B0)
#define BBMOMCMBINK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E86B10)
#define BBMOMCMBINK_EIEKAMLDNND_OFFSET UNITYSDK_OFFSET(0x15E87850)
#define BBMOMCMBINK_NPHDJAKLKJF_OFFSET UNITYSDK_OFFSET(0x15E87B10)
#define BBMOMCMBINK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E86B60)

inline static constexpr unsigned int BBMOMCMBINK_TypeDefinitionIndex = 55747;

	class BBMOMCMBINK
	{
	public:
		::RPG::PoolList_1<::RPG::GameCore::TurnBasedModifierInstance*>* HKGJKJHBOBG; // 0x28
		::RPG::GameCore::GameEntity* BLDBOAKGDNH; // 0x30
		::GELIALJDFBL* LLHKOFLJFCH; // 0x38
		::RPG::GameCore::GameEntity* GHBGHCLIMKC; // 0x40
		::RPG::GameCore::ModifierCustomEventConfig* FNKBIEBFFBO; // 0x48
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x50
		::RPG::GameCore::ModifierCustomEventSortType OEAAMAEJBDP; // 0x54
		::System::Int32 CIFEKCAKFPL; // 0x58
		::System::Int32 HMLNECEFMEL; // 0x5C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModifierCustomEvent*))((::PBYTE)hIl2Cpp + BBMOMCMBINK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMOMCMBINK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMOMCMBINK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean EIEKAMLDNND(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::ModifierCustomEventConfig* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::ModifierCustomEventConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BBMOMCMBINK_EIEKAMLDNND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPHDJAKLKJF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BBMOMCMBINK_NPHDJAKLKJF_OFFSET))(this, a1);
		}

	};
