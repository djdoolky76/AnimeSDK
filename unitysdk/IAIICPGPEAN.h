#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EFHJJIGLPDL;
class FOOIINCDBFA;
namespace RPG::GameCore { class AdvNPCAttack; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define IAIICPGPEAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0F470)
#define IAIICPGPEAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E0F750)
#define IAIICPGPEAN_MJKOKJGNPIF_OFFSET UNITYSDK_OFFSET(0x15E0F800)
#define IAIICPGPEAN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E0F790)
#define IAIICPGPEAN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E0FAE0)
#define IAIICPGPEAN_TICK_OFFSET UNITYSDK_OFFSET(0x15E0FB40)

	class IAIICPGPEAN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::EFHJJIGLPDL* CHAOCFGKDAP; // 0x20
		::FOOIINCDBFA* DIFOMCDONEO; // 0x28
		::RPG::GameCore::AdventureCharacterController* GGMECPDBABM; // 0x30
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x38
		::RPG::GameCore::AdvNPCAttack* IGHAHBNLIJA; // 0x40
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
