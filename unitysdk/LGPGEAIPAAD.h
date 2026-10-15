#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetCharacterVisible; }
namespace RPG::GameCore { class TaskContext; }

#define LGPGEAIPAAD_CTOR_OFFSET UNITYSDK_OFFSET(0xB69FD10)
#define LGPGEAIPAAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB69FD20)
#define LGPGEAIPAAD_KJDBJDIBIBK_OFFSET UNITYSDK_OFFSET(0xB69FF40)
#define LGPGEAIPAAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB69FD60)
#define LGPGEAIPAAD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB69FFD0)
#define LGPGEAIPAAD_TICK_OFFSET UNITYSDK_OFFSET(0xB6A0020)

	class LGPGEAIPAAD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetCharacterVisible* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterVisible*))((::PBYTE)hIl2Cpp + LGPGEAIPAAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPGEAIPAAD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPGEAIPAAD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KJDBJDIBIBK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LGPGEAIPAAD_KJDBJDIBIBK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPGEAIPAAD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LGPGEAIPAAD_TICK_OFFSET))(this, a1);
		}

	};
