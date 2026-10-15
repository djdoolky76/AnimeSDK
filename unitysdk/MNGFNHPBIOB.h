#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMechanismBarPhase; }

#define MNGFNHPBIOB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA02850)
#define MNGFNHPBIOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA02860)
#define MNGFNHPBIOB_FBGHGOFHLAA_OFFSET UNITYSDK_OFFSET(0xBA02930)
#define MNGFNHPBIOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA028A0)
#define MNGFNHPBIOB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA02970)
#define MNGFNHPBIOB_TICK_OFFSET UNITYSDK_OFFSET(0xBA029C0)

inline static constexpr unsigned int MNGFNHPBIOB_TypeDefinitionIndex = 55810;

	class MNGFNHPBIOB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitMechanismBarPhase* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMechanismBarPhase*))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean FBGHGOFHLAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_FBGHGOFHLAA_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNGFNHPBIOB_TICK_OFFSET))(this, a1);
		}

	};
