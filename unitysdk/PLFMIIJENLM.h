#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHaveDyingEntity; }
namespace RPG::GameCore { class TaskContext; }

#define PLFMIIJENLM_CTOR_OFFSET UNITYSDK_OFFSET(0xC2FDA20)
#define PLFMIIJENLM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC2FDA50)

inline static constexpr unsigned int PLFMIIJENLM_TypeDefinitionIndex = 54901;

	class PLFMIIJENLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveDyingEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveDyingEntity*))((::PBYTE)hIl2Cpp + PLFMIIJENLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFMIIJENLM_EVALUATE_OFFSET))(this);
		}

	};
