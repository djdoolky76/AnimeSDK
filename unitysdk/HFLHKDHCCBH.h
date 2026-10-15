#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MoveTeamRootPosByTargetDistance; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }

#define HFLHKDHCCBH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C89830)
#define HFLHKDHCCBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C89870)
#define HFLHKDHCCBH_OMGMBFIAPPE_OFFSET UNITYSDK_OFFSET(0x15C8A100)
#define HFLHKDHCCBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C898B0)
#define HFLHKDHCCBH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C8A1C0)
#define HFLHKDHCCBH_TICK_OFFSET UNITYSDK_OFFSET(0x15C8A210)

inline static constexpr unsigned int HFLHKDHCCBH_TypeDefinitionIndex = 55226;

	class HFLHKDHCCBH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::MoveTeamRootPosByTargetDistance* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TargetEvaluator* FAKOBONILAK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveTeamRootPosByTargetDistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveTeamRootPosByTargetDistance*))((::PBYTE)hIl2Cpp + HFLHKDHCCBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLHKDHCCBH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLHKDHCCBH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLHKDHCCBH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFLHKDHCCBH_TICK_OFFSET))(this, a1);
		}

		::System::Single OMGMBFIAPPE(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFLHKDHCCBH_OMGMBFIAPPE_OFFSET))(this, a1);
		}

	};
