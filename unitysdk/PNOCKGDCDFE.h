#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GetGapSecondsForSyncWithBgm; }
namespace RPG::GameCore { class TaskContext; }

#define PNOCKGDCDFE_CTOR_OFFSET UNITYSDK_OFFSET(0xC354F00)
#define PNOCKGDCDFE_GLPIGMJFPHL_OFFSET UNITYSDK_OFFSET(0xC355510)
#define PNOCKGDCDFE_KGPMIBKAGLN_OFFSET UNITYSDK_OFFSET(0xC3555D0)
#define PNOCKGDCDFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC355090)
#define PNOCKGDCDFE_PFNCLEHKPIC_OFFSET UNITYSDK_OFFSET(0xC355680)

	class PNOCKGDCDFE
	{
	public:
		::RPG::GameCore::StringHash AJMLDJCJFEG; // 0x28
		::RPG::GameCore::StringHash GCAFAMPEMDN; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GetGapSecondsForSyncWithBgm* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GetGapSecondsForSyncWithBgm*))((::PBYTE)hIl2Cpp + PNOCKGDCDFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOCKGDCDFE_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GLPIGMJFPHL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOCKGDCDFE_GLPIGMJFPHL_OFFSET))(this);
		}

		::System::Void KGPMIBKAGLN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNOCKGDCDFE_KGPMIBKAGLN_OFFSET))(this, a1);
		}

		::System::Void PFNCLEHKPIC(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNOCKGDCDFE_PFNCLEHKPIC_OFFSET))(this, a1);
		}

	};
