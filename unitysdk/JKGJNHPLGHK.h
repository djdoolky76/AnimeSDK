#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BlinkToPosition; }
namespace RPG::GameCore { class TaskContext; }

#define JKGJNHPLGHK_CTOR_OFFSET UNITYSDK_OFFSET(0xB216710)
#define JKGJNHPLGHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB216720)
#define JKGJNHPLGHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB216770)
#define JKGJNHPLGHK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB216950)
#define JKGJNHPLGHK_TICK_OFFSET UNITYSDK_OFFSET(0xB2169A0)

inline static constexpr unsigned int JKGJNHPLGHK_TypeDefinitionIndex = 54879;

	class JKGJNHPLGHK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::BlinkToPosition* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlinkToPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlinkToPosition*))((::PBYTE)hIl2Cpp + JKGJNHPLGHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGJNHPLGHK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGJNHPLGHK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGJNHPLGHK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JKGJNHPLGHK_TICK_OFFSET))(this, a1);
		}

	};
