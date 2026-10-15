#pragma once
#include "unitysdk/unitysdk.h"
class PLEFHKNEOCE;
namespace RPG::GameCore { class TaskContext; }

#define LOFBBOHGCMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB7FE8D0)
#define LOFBBOHGCMF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7FE900)

inline static constexpr unsigned int LOFBBOHGCMF_TypeDefinitionIndex = 57987;

	class LOFBBOHGCMF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PLEFHKNEOCE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PLEFHKNEOCE*))((::PBYTE)hIl2Cpp + LOFBBOHGCMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFBBOHGCMF_EVALUATE_OFFSET))(this);
		}

	};
