#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharacterFollowAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define BEDMFKOECEP_BDDBKIIBILC_OFFSET UNITYSDK_OFFSET(0x1A932D90)
#define BEDMFKOECEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A932D40)
#define BEDMFKOECEP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A932D50)
#define BEDMFKOECEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A932DA0)
#define BEDMFKOECEP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A933290)
#define BEDMFKOECEP_TICK_OFFSET UNITYSDK_OFFSET(0x1A9332E0)

inline static constexpr unsigned int BEDMFKOECEP_TypeDefinitionIndex = 59240;

	class BEDMFKOECEP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CharacterFollowAnimState* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterFollowAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterFollowAnimState*))((::PBYTE)hIl2Cpp + BEDMFKOECEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDMFKOECEP_DISPOSE_OFFSET))(this);
		}

		::System::Boolean BDDBKIIBILC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDMFKOECEP_BDDBKIIBILC_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDMFKOECEP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDMFKOECEP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BEDMFKOECEP_TICK_OFFSET))(this, a1);
		}

	};
