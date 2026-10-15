#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChimeraBattleShowSkillInfoLock; }

#define HEKAKLPPCGE_CTOR_OFFSET UNITYSDK_OFFSET(0x15C4AD40)
#define HEKAKLPPCGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C4AE40)
#define HEKAKLPPCGE_HHPLCLPFPLD_OFFSET UNITYSDK_OFFSET(0x15C4ADC0)
#define HEKAKLPPCGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C4AD70)

inline static constexpr unsigned int HEKAKLPPCGE_TypeDefinitionIndex = 58818;

	class HEKAKLPPCGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock*))((::PBYTE)hIl2Cpp + HEKAKLPPCGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKAKLPPCGE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKAKLPPCGE_DISPOSE_OFFSET))(this);
		}

		::System::Void HHPLCLPFPLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKAKLPPCGE_HHPLCLPFPLD_OFFSET))(this);
		}

	};
