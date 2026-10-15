#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHeroGender; }
namespace RPG::GameCore { class TaskContext; }

#define LDMOMGNBIMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB6376E0)
#define LDMOMGNBIMM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB637710)

inline static constexpr unsigned int LDMOMGNBIMM_TypeDefinitionIndex = 53144;

	class LDMOMGNBIMM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHeroGender* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + LDMOMGNBIMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMOMGNBIMM_EVALUATE_OFFSET))(this);
		}

	};
