#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareMonsterTemplateID; }
namespace RPG::GameCore { class TaskContext; }

#define JCJLKGMGFDB_CTOR_OFFSET UNITYSDK_OFFSET(0x16588AA0)
#define JCJLKGMGFDB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16588AD0)

inline static constexpr unsigned int JCJLKGMGFDB_TypeDefinitionIndex = 54547;

	class JCJLKGMGFDB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + JCJLKGMGFDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJLKGMGFDB_EVALUATE_OFFSET))(this);
		}

	};
