#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByComparePreShowStanceBreakMonsterRank; }
namespace RPG::GameCore { class TaskContext; }

#define ENGKOMCPLHP_CTOR_OFFSET UNITYSDK_OFFSET(0x155A0C40)
#define ENGKOMCPLHP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155A0C70)

inline static constexpr unsigned int ENGKOMCPLHP_TypeDefinitionIndex = 54708;

	class ENGKOMCPLHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*))((::PBYTE)hIl2Cpp + ENGKOMCPLHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGKOMCPLHP_EVALUATE_OFFSET))(this);
		}

	};
