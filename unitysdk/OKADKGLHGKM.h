#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierLeaveBattle; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKADKGLHGKM_CTOR_OFFSET UNITYSDK_OFFSET(0xBECB8E0)
#define OKADKGLHGKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBECB930)
#define OKADKGLHGKM_ECEAGHHFINI_OFFSET UNITYSDK_OFFSET(0xBECBDE0)
#define OKADKGLHGKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBECB9D0)
#define OKADKGLHGKM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBECBE60)
#define OKADKGLHGKM_TICK_OFFSET UNITYSDK_OFFSET(0xBECB970)

inline static constexpr unsigned int OKADKGLHGKM_TypeDefinitionIndex = 55751;

	class OKADKGLHGKM : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* AFFKHDBKGOJ; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::TriggerModifierLeaveBattle* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModifierLeaveBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModifierLeaveBattle*))((::PBYTE)hIl2Cpp + OKADKGLHGKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKADKGLHGKM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKADKGLHGKM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKADKGLHGKM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKADKGLHGKM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void ECEAGHHFINI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKADKGLHGKM_ECEAGHHFINI_OFFSET))(this, a1);
		}

	};
