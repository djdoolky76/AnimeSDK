#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ResetTreasureChallenge; }
namespace RPG::GameCore { class TaskContext; }

#define BFIEHNPGMLF_CTOR_OFFSET UNITYSDK_OFFSET(0xB1648A0)
#define BFIEHNPGMLF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB164A70)
#define BFIEHNPGMLF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1648B0)
#define BFIEHNPGMLF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB1649C0)
#define BFIEHNPGMLF_TICK_OFFSET UNITYSDK_OFFSET(0xB164A10)

	class BFIEHNPGMLF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ResetTreasureChallenge* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetTreasureChallenge* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetTreasureChallenge*))((::PBYTE)hIl2Cpp + BFIEHNPGMLF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEHNPGMLF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEHNPGMLF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFIEHNPGMLF_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEHNPGMLF_DISPOSE_OFFSET))(this);
		}

	};
