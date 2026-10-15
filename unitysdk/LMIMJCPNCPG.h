#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HGLDNPONBAM;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMagicUnitOnScepter; }

#define LMIMJCPNCPG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C9C90)
#define LMIMJCPNCPG_DHPBLGMJLHI_OFFSET UNITYSDK_OFFSET(0xB7C9E50)
#define LMIMJCPNCPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7C9CA0)
#define LMIMJCPNCPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7C9CF0)
#define LMIMJCPNCPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7C9EF0)
#define LMIMJCPNCPG_TICK_OFFSET UNITYSDK_OFFSET(0xB7C9F40)

	class LMIMJCPNCPG : public ::GELIALJDFBL
	{
	public:
		::HGLDNPONBAM* NIGNPDNNKJO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::TriggerMagicUnitOnScepter* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMagicUnitOnScepter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMagicUnitOnScepter*))((::PBYTE)hIl2Cpp + LMIMJCPNCPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIMJCPNCPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIMJCPNCPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIMJCPNCPG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMIMJCPNCPG_TICK_OFFSET))(this, a1);
		}

		::System::Void DHPBLGMJLHI(::HGLDNPONBAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGLDNPONBAM*))((::PBYTE)hIl2Cpp + LMIMJCPNCPG_DHPBLGMJLHI_OFFSET))(this, a1);
		}

	};
