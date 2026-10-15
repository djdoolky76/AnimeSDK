#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPIKMAGDDI.h"
namespace RPG::GameCore { class CreateBattleEventEntityFromStage; }
namespace RPG::GameCore { class TaskContext; }

#define AGJGPBHEPDO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF33530)
#define AGJGPBHEPDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF33550)

inline static constexpr unsigned int AGJGPBHEPDO_TypeDefinitionIndex = 58039;

	class AGJGPBHEPDO : public ::NAPIKMAGDDI
	{
	public:
		::RPG::GameCore::CreateBattleEventEntityFromStage* OFKGLJOAMLD; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEventEntityFromStage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEventEntityFromStage*))((::PBYTE)hIl2Cpp + AGJGPBHEPDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJGPBHEPDO_ONTASKBEGIN_OFFSET))(this);
		}

	};
