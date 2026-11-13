#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetModifierOverrideNameForStatus; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define LHBPKOKPHKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB8650)
#define LHBPKOKPHKK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BCB8680)
#define LHBPKOKPHKK__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x1BCB88E0)
#define LHBPKOKPHKK__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x1BCB8940)

inline static constexpr unsigned int LHBPKOKPHKK_TypeDefinitionIndex = 56728;

	class LHBPKOKPHKK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierOverrideNameForStatus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierOverrideNameForStatus*))((::PBYTE)hIl2Cpp + LHBPKOKPHKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBPKOKPHKK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + LHBPKOKPHKK__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _OnTaskBegin_b__1_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + LHBPKOKPHKK__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
