#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ChangeChallengeBuff; }
namespace RPG::GameCore { class TaskContext; }

#define JPMJFKNPBKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CA720)
#define JPMJFKNPBKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2CA730)
#define JPMJFKNPBKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2CA770)
#define JPMJFKNPBKJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2CA850)
#define JPMJFKNPBKJ_TICK_OFFSET UNITYSDK_OFFSET(0xB2CA8A0)

	class JPMJFKNPBKJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ChangeChallengeBuff* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeChallengeBuff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeChallengeBuff*))((::PBYTE)hIl2Cpp + JPMJFKNPBKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMJFKNPBKJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMJFKNPBKJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMJFKNPBKJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPMJFKNPBKJ_TICK_OFFSET))(this, a1);
		}

	};
