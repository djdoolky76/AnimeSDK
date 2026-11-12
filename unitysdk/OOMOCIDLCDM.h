#pragma once
#include "unitysdk/unitysdk.h"
class KKGGBIEDPKJ;
namespace RPG::GameCore { class TaskContext; }

#define OOMOCIDLCDM_CTOR_OFFSET UNITYSDK_OFFSET(0xC890780)
#define OOMOCIDLCDM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC8907B0)

inline static constexpr unsigned int OOMOCIDLCDM_TypeDefinitionIndex = 56069;

	class OOMOCIDLCDM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KKGGBIEDPKJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KKGGBIEDPKJ*))((::PBYTE)hIl2Cpp + OOMOCIDLCDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMOCIDLCDM_EVALUATE_OFFSET))(this);
		}

	};
