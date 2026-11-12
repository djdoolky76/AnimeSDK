#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharacterNavigateFollow; }
namespace RPG::GameCore { class TaskContext; }

#define OLJJKJCCJLN_CTOR_OFFSET UNITYSDK_OFFSET(0xC8094D0)
#define OLJJKJCCJLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8094E0)
#define OLJJKJCCJLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC809520)
#define OLJJKJCCJLN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC8095A0)
#define OLJJKJCCJLN_TICK_OFFSET UNITYSDK_OFFSET(0xC8095F0)

inline static constexpr unsigned int OLJJKJCCJLN_TypeDefinitionIndex = 59245;

	class OLJJKJCCJLN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CharacterNavigateFollow* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterNavigateFollow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterNavigateFollow*))((::PBYTE)hIl2Cpp + OLJJKJCCJLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJJKJCCJLN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJJKJCCJLN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJJKJCCJLN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OLJJKJCCJLN_TICK_OFFSET))(this, a1);
		}

	};
