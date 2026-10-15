#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetExcludeInMultiCharacterFormation; }
namespace RPG::GameCore { class TaskContext; }

#define GCJLKPAMAPG_CTOR_OFFSET UNITYSDK_OFFSET(0x15981380)
#define GCJLKPAMAPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15981390)
#define GCJLKPAMAPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159813D0)
#define GCJLKPAMAPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15981570)
#define GCJLKPAMAPG_TICK_OFFSET UNITYSDK_OFFSET(0x159815C0)

	class GCJLKPAMAPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetExcludeInMultiCharacterFormation* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + GCJLKPAMAPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJLKPAMAPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJLKPAMAPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJLKPAMAPG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCJLKPAMAPG_TICK_OFFSET))(this, a1);
		}

	};
