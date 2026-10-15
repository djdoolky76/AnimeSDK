#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareGridFightProperty; }
namespace RPG::GameCore { class TaskContext; }

#define KHFDNGMFICG_CTOR_OFFSET UNITYSDK_OFFSET(0xB3FFCA0)
#define KHFDNGMFICG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB3FFCD0)

inline static constexpr unsigned int KHFDNGMFICG_TypeDefinitionIndex = 54535;

	class KHFDNGMFICG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGridFightProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGridFightProperty*))((::PBYTE)hIl2Cpp + KHFDNGMFICG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFDNGMFICG_EVALUATE_OFFSET))(this);
		}

	};
