#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowBattleEventTips; }
namespace RPG::GameCore { class TaskContext; }

#define AELMAANENII_CTOR_OFFSET UNITYSDK_OFFSET(0x18DA6860)
#define AELMAANENII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DA6870)
#define AELMAANENII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DA68B0)
#define AELMAANENII_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18DA6910)
#define AELMAANENII_TICK_OFFSET UNITYSDK_OFFSET(0x18DA6960)

inline static constexpr unsigned int AELMAANENII_TypeDefinitionIndex = 57663;

	class AELMAANENII : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowBattleEventTips* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleEventTips* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleEventTips*))((::PBYTE)hIl2Cpp + AELMAANENII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELMAANENII_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELMAANENII_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELMAANENII_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AELMAANENII_TICK_OFFSET))(this, a1);
		}

	};
