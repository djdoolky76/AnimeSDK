#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
namespace RPG::GameCore { class ShowBattleSkillEnhanced; }
namespace RPG::GameCore { class TaskContext; }

#define FKPFEIPOICF_CTOR_OFFSET UNITYSDK_OFFSET(0x15825AA0)
#define FKPFEIPOICF_NPJKPOGCHLE_OFFSET UNITYSDK_OFFSET(0x15825D50)
#define FKPFEIPOICF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15825AD0)

	class FKPFEIPOICF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleSkillEnhanced* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleSkillEnhanced*))((::PBYTE)hIl2Cpp + FKPFEIPOICF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPFEIPOICF_ONTASKBEGIN_OFFSET))(this);
		}

		static ::RPG::GameCore::ControlSkillType NPJKPOGCHLE(::RPG::GameCore::SkillType a1)
		{
			return ((::RPG::GameCore::ControlSkillType(*)(::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + FKPFEIPOICF_NPJKPOGCHLE_OFFSET))(a1);
		}

	};
