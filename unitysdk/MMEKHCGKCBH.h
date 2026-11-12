#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetAsRogueDialogue; }
namespace RPG::GameCore { class TaskContext; }

#define MMEKHCGKCBH_CTOR_OFFSET UNITYSDK_OFFSET(0xC27DDD0)
#define MMEKHCGKCBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC27DDE0)
#define MMEKHCGKCBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC27DE20)
#define MMEKHCGKCBH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC27DFD0)
#define MMEKHCGKCBH_TICK_OFFSET UNITYSDK_OFFSET(0xC27E020)

inline static constexpr unsigned int MMEKHCGKCBH_TypeDefinitionIndex = 59774;

	class MMEKHCGKCBH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetAsRogueDialogue* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAsRogueDialogue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAsRogueDialogue*))((::PBYTE)hIl2Cpp + MMEKHCGKCBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEKHCGKCBH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEKHCGKCBH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEKHCGKCBH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMEKHCGKCBH_TICK_OFFSET))(this, a1);
		}

	};
