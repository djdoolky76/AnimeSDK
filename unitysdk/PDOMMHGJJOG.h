#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharacterReplaceAnimatorController; }
namespace RPG::GameCore { class TaskContext; }

#define PDOMMHGJJOG_CTOR_OFFSET UNITYSDK_OFFSET(0xC022570)
#define PDOMMHGJJOG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC022580)
#define PDOMMHGJJOG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0225C0)
#define PDOMMHGJJOG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC022770)
#define PDOMMHGJJOG_TICK_OFFSET UNITYSDK_OFFSET(0xC0227C0)

	class PDOMMHGJJOG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CharacterReplaceAnimatorController* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterReplaceAnimatorController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterReplaceAnimatorController*))((::PBYTE)hIl2Cpp + PDOMMHGJJOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOMMHGJJOG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOMMHGJJOG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOMMHGJJOG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDOMMHGJJOG_TICK_OFFSET))(this, a1);
		}

	};
