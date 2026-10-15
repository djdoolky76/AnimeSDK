#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetBattleEventUltraSkillCutin; }
namespace RPG::GameCore { class TaskContext; }

#define PFEABJBIPND_CTOR_OFFSET UNITYSDK_OFFSET(0xC20AF60)
#define PFEABJBIPND_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC20AF70)
#define PFEABJBIPND_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC20AFB0)
#define PFEABJBIPND_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC20B110)
#define PFEABJBIPND_TICK_OFFSET UNITYSDK_OFFSET(0xC20B160)

inline static constexpr unsigned int PFEABJBIPND_TypeDefinitionIndex = 55352;

	class PFEABJBIPND : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetBattleEventUltraSkillCutin* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleEventUltraSkillCutin* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleEventUltraSkillCutin*))((::PBYTE)hIl2Cpp + PFEABJBIPND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEABJBIPND_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEABJBIPND_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEABJBIPND_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PFEABJBIPND_TICK_OFFSET))(this, a1);
		}

	};
