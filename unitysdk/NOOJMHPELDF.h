#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowTalkUI; }
namespace RPG::GameCore { class TaskContext; }

#define NOOJMHPELDF_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF7840)
#define NOOJMHPELDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCF7850)
#define NOOJMHPELDF_JBKBBNFJAKN_OFFSET UNITYSDK_OFFSET(0xBCF7A20)
#define NOOJMHPELDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCF7890)
#define NOOJMHPELDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCF79D0)
#define NOOJMHPELDF_TICK_OFFSET UNITYSDK_OFFSET(0xBCF7A90)

	class NOOJMHPELDF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowTalkUI* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTalkUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTalkUI*))((::PBYTE)hIl2Cpp + NOOJMHPELDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOJMHPELDF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOJMHPELDF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOJMHPELDF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void JBKBBNFJAKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOJMHPELDF_JBKBBNFJAKN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOOJMHPELDF_TICK_OFFSET))(this, a1);
		}

	};
