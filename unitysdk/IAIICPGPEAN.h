#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EFHJJIGLPDL;
class FOOIINCDBFA;
namespace RPG::GameCore { class AdvNPCAttack; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define IAIICPGPEAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E02560)
#define IAIICPGPEAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E02840)
#define IAIICPGPEAN_MJKOKJGNPIF_OFFSET UNITYSDK_OFFSET(0x15E028F0)
#define IAIICPGPEAN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E02880)
#define IAIICPGPEAN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E02BD0)
#define IAIICPGPEAN_TICK_OFFSET UNITYSDK_OFFSET(0x15E02C30)

inline static constexpr unsigned int IAIICPGPEAN_TypeDefinitionIndex = 52400;

	class IAIICPGPEAN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x18
		::FOOIINCDBFA* DIFOMCDONEO; // 0x20
		::RPG::GameCore::AdventureCharacterController* GGMECPDBABM; // 0x28
		::RPG::GameCore::AdvNPCAttack* IGHAHBNLIJA; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::EFHJJIGLPDL* CHAOCFGKDAP; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCAttack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCAttack*))((::PBYTE)hIl2Cpp + IAIICPGPEAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIICPGPEAN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIICPGPEAN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIICPGPEAN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAIICPGPEAN_TICK_OFFSET))(this, a1);
		}

		::System::Void MJKOKJGNPIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIICPGPEAN_MJKOKJGNPIF_OFFSET))(this);
		}

	};
