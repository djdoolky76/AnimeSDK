#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaveMonsterMaxCount; }

#define FCEAHLMJOMB_CTOR_OFFSET UNITYSDK_OFFSET(0x156B71A0)
#define FCEAHLMJOMB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156B7250)
#define FCEAHLMJOMB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156B7290)
#define FCEAHLMJOMB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156B7690)
#define FCEAHLMJOMB_TICK_OFFSET UNITYSDK_OFFSET(0x156B76E0)

	class FCEAHLMJOMB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaveMonsterMaxCount* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaveMonsterMaxCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaveMonsterMaxCount*))((::PBYTE)hIl2Cpp + FCEAHLMJOMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEAHLMJOMB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEAHLMJOMB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEAHLMJOMB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCEAHLMJOMB_TICK_OFFSET))(this, a1);
		}

	};
