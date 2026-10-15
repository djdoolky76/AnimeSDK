#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareGroupProperty; }
namespace RPG::GameCore { class TaskContext; }

#define NGBJGFNECOI_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA1D00)
#define NGBJGFNECOI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBBA1D30)

inline static constexpr unsigned int NGBJGFNECOI_TypeDefinitionIndex = 52567;

	class NGBJGFNECOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + NGBJGFNECOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBJGFNECOI_EVALUATE_OFFSET))(this);
		}

	};
