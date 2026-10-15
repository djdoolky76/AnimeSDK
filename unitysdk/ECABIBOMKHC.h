#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPamMovePhaseTalk; }
namespace RPG::GameCore { class TaskContext; }

#define ECABIBOMKHC_CTOR_OFFSET UNITYSDK_OFFSET(0x12D04F40)
#define ECABIBOMKHC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12D04F70)

inline static constexpr unsigned int ECABIBOMKHC_TypeDefinitionIndex = 53158;

	class ECABIBOMKHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + ECABIBOMKHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECABIBOMKHC_EVALUATE_OFFSET))(this);
		}

	};
