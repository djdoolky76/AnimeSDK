#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetAsRogueDialogue; }
namespace RPG::GameCore { class TaskContext; }

#define MMEKHCGKCBH_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BC770)
#define MMEKHCGKCBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9BC780)
#define MMEKHCGKCBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9BC7C0)
#define MMEKHCGKCBH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9BC970)
#define MMEKHCGKCBH_TICK_OFFSET UNITYSDK_OFFSET(0xB9BC9C0)

inline static constexpr unsigned int MMEKHCGKCBH_TypeDefinitionIndex = 58510;

	class MMEKHCGKCBH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetAsRogueDialogue* OFKGLJOAMLD; // 0x20
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
