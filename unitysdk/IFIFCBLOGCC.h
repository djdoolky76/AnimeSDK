#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ChimeraDuelEnterTutorialBattle; }
namespace RPG::GameCore { class TaskContext; }

#define IFIFCBLOGCC_CTOR_OFFSET UNITYSDK_OFFSET(0x15F0BEE0)
#define IFIFCBLOGCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F0C4E0)
#define IFIFCBLOGCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F0BEF0)
#define IFIFCBLOGCC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F0C4A0)
#define IFIFCBLOGCC_TICK_OFFSET UNITYSDK_OFFSET(0x15F0C440)

inline static constexpr unsigned int IFIFCBLOGCC_TypeDefinitionIndex = 58022;

	class IFIFCBLOGCC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ChimeraDuelEnterTutorialBattle* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle*))((::PBYTE)hIl2Cpp + IFIFCBLOGCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIFCBLOGCC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIFCBLOGCC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIFCBLOGCC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIFCBLOGCC_DISPOSE_OFFSET))(this);
		}

	};
