#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JOPMGMGAFKG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define LDIGNPAFPCH_CTOR_OFFSET UNITYSDK_OFFSET(0xB624580)
#define LDIGNPAFPCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6245C0)
#define LDIGNPAFPCH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB624600)
#define LDIGNPAFPCH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB624AD0)
#define LDIGNPAFPCH_TICK_OFFSET UNITYSDK_OFFSET(0xB6246E0)

	class LDIGNPAFPCH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::GameEntity* IEKCMJJGLOH; // 0x20
		::JOPMGMGAFKG* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::FixPoint OLDIGCGFHJM; // 0x30
		::System::Int32 APNGJPMPMOB; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JOPMGMGAFKG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JOPMGMGAFKG*))((::PBYTE)hIl2Cpp + LDIGNPAFPCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIGNPAFPCH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIGNPAFPCH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIGNPAFPCH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDIGNPAFPCH_TICK_OFFSET))(this, a1);
		}

	};
