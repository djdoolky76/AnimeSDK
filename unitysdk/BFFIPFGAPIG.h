#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdvPuzzleCollectItem; }
namespace RPG::GameCore { class TaskContext; }

#define BFFIPFGAPIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB160C10)
#define BFFIPFGAPIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB160C80)
#define BFFIPFGAPIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB160CC0)
#define BFFIPFGAPIG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB160E20)
#define BFFIPFGAPIG_TICK_OFFSET UNITYSDK_OFFSET(0xB160C20)

inline static constexpr unsigned int BFFIPFGAPIG_TypeDefinitionIndex = 52478;

	class BFFIPFGAPIG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AdvPuzzleCollectItem* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPuzzleCollectItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPuzzleCollectItem*))((::PBYTE)hIl2Cpp + BFFIPFGAPIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFFIPFGAPIG_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFIPFGAPIG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFIPFGAPIG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFIPFGAPIG_ONTASKRESET_OFFSET))(this);
		}

	};
