#pragma once
#include "unitysdk/unitysdk.h"
class LLCLGLFDGBM;
namespace RPG::GameCore { class TaskContext; }

#define KALGKCBCGGH_CTOR_OFFSET UNITYSDK_OFFSET(0xB2DE180)
#define KALGKCBCGGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2DE1B0)
#define KALGKCBCGGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2DE1F0)
#define KALGKCBCGGH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2DE2D0)
#define KALGKCBCGGH_TICK_OFFSET UNITYSDK_OFFSET(0xB2DE320)

	class KALGKCBCGGH
	{
	public:
		::LLCLGLFDGBM* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LLCLGLFDGBM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LLCLGLFDGBM*))((::PBYTE)hIl2Cpp + KALGKCBCGGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALGKCBCGGH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALGKCBCGGH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALGKCBCGGH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KALGKCBCGGH_TICK_OFFSET))(this, a1);
		}

	};
