#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFiveDimTeleportFinish; }

#define IGGNJFGHFPK_CTOR_OFFSET UNITYSDK_OFFSET(0x164000E0)
#define IGGNJFGHFPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164000F0)
#define IGGNJFGHFPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16400140)
#define IGGNJFGHFPK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164002C0)
#define IGGNJFGHFPK_PNNKENJOEMH_OFFSET UNITYSDK_OFFSET(0x16400190)
#define IGGNJFGHFPK_TICK_OFFSET UNITYSDK_OFFSET(0x16400310)

inline static constexpr unsigned int IGGNJFGHFPK_TypeDefinitionIndex = 52898;

	class IGGNJFGHFPK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitFiveDimTeleportFinish* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFiveDimTeleportFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFiveDimTeleportFinish*))((::PBYTE)hIl2Cpp + IGGNJFGHFPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGNJFGHFPK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGNJFGHFPK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGNJFGHFPK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IGGNJFGHFPK_TICK_OFFSET))(this, a1);
		}

		::System::Void PNNKENJOEMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGNJFGHFPK_PNNKENJOEMH_OFFSET))(this);
		}

	};
