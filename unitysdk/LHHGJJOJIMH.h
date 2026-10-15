#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareInfiniteWaveSummonProgress; }
namespace RPG::GameCore { class TaskContext; }

#define LHHGJJOJIMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB6AC400)
#define LHHGJJOJIMH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB6AC430)

inline static constexpr unsigned int LHHGJJOJIMH_TypeDefinitionIndex = 54885;

	class LHHGJJOJIMH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + LHHGJJOJIMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGJJOJIMH_EVALUATE_OFFSET))(this);
		}

	};
