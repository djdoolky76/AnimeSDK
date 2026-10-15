#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LockCurrentTeleportAction; }
namespace RPG::GameCore { class TaskContext; }

#define AKBDMPBDADK_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC4240)
#define AKBDMPBDADK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CC4250)
#define AKBDMPBDADK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CC4290)
#define AKBDMPBDADK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CC4350)
#define AKBDMPBDADK_TICK_OFFSET UNITYSDK_OFFSET(0x12CC43A0)

inline static constexpr unsigned int AKBDMPBDADK_TypeDefinitionIndex = 52985;

	class AKBDMPBDADK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::LockCurrentTeleportAction* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockCurrentTeleportAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockCurrentTeleportAction*))((::PBYTE)hIl2Cpp + AKBDMPBDADK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBDMPBDADK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBDMPBDADK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBDMPBDADK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKBDMPBDADK_TICK_OFFSET))(this, a1);
		}

	};
