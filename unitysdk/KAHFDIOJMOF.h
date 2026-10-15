#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StopBattlePostureType; }
namespace RPG::GameCore { class TaskContext; }

#define KAHFDIOJMOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CFB60)
#define KAHFDIOJMOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2CFB70)
#define KAHFDIOJMOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2CFBB0)
#define KAHFDIOJMOF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2CFC10)
#define KAHFDIOJMOF_TICK_OFFSET UNITYSDK_OFFSET(0xB2CFC60)

inline static constexpr unsigned int KAHFDIOJMOF_TypeDefinitionIndex = 53294;

	class KAHFDIOJMOF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::StopBattlePostureType* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopBattlePostureType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopBattlePostureType*))((::PBYTE)hIl2Cpp + KAHFDIOJMOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHFDIOJMOF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHFDIOJMOF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHFDIOJMOF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAHFDIOJMOF_TICK_OFFSET))(this, a1);
		}

	};
