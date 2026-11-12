#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartBattleScoringAbility; }
namespace RPG::GameCore { class TaskContext; }

#define FMIEGACIIDH_CTOR_OFFSET UNITYSDK_OFFSET(0x167CAC20)
#define FMIEGACIIDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x167CAC50)

inline static constexpr unsigned int FMIEGACIIDH_TypeDefinitionIndex = 56856;

	class FMIEGACIIDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartBattleScoringAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartBattleScoringAbility*))((::PBYTE)hIl2Cpp + FMIEGACIIDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIEGACIIDH_ONTASKBEGIN_OFFSET))(this);
		}

	};
