#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasBillboard; }
namespace RPG::GameCore { class TaskContext; }

#define GKDEAGMFKCH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A860B0)
#define GKDEAGMFKCH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A860E0)

inline static constexpr unsigned int GKDEAGMFKCH_TypeDefinitionIndex = 54611;

	class GKDEAGMFKCH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasBillboard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + GKDEAGMFKCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDEAGMFKCH_EVALUATE_OFFSET))(this);
		}

	};
