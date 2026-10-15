#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BattleAudioState; }
namespace RPG::GameCore { class TaskContext; }

#define PMACHEDEEFH_CTOR_OFFSET UNITYSDK_OFFSET(0xC309F00)
#define PMACHEDEEFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC309F10)
#define PMACHEDEEFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC309F50)
#define PMACHEDEEFH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC30A0B0)
#define PMACHEDEEFH_TICK_OFFSET UNITYSDK_OFFSET(0xC30A100)

inline static constexpr unsigned int PMACHEDEEFH_TypeDefinitionIndex = 57946;

	class PMACHEDEEFH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::BattleAudioState* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleAudioState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleAudioState*))((::PBYTE)hIl2Cpp + PMACHEDEEFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMACHEDEEFH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMACHEDEEFH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMACHEDEEFH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PMACHEDEEFH_TICK_OFFSET))(this, a1);
		}

	};
