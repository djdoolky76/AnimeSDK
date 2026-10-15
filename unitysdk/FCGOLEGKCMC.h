#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyHealData; }
namespace RPG::GameCore { class TaskContext; }

#define FCGOLEGKCMC_CTOR_OFFSET UNITYSDK_OFFSET(0x156BCCC0)
#define FCGOLEGKCMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156BCCF0)

inline static constexpr unsigned int FCGOLEGKCMC_TypeDefinitionIndex = 55204;

	class FCGOLEGKCMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyHealData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyHealData*))((::PBYTE)hIl2Cpp + FCGOLEGKCMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGOLEGKCMC_ONTASKBEGIN_OFFSET))(this);
		}

	};
