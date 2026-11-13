#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareNpcMonsterRank; }
namespace RPG::GameCore { class TaskContext; }

#define AJGCNELACML_CTOR_OFFSET UNITYSDK_OFFSET(0x19D3DC00)
#define AJGCNELACML_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19D3DC30)

inline static constexpr unsigned int AJGCNELACML_TypeDefinitionIndex = 55718;

	class AJGCNELACML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareNpcMonsterRank* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareNpcMonsterRank*))((::PBYTE)hIl2Cpp + AJGCNELACML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGCNELACML_EVALUATE_OFFSET))(this);
		}

	};
