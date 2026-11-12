#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareEvolveBuildProperty; }
namespace RPG::GameCore { class TaskContext; }

#define HDGBEOKCJNK_CTOR_OFFSET UNITYSDK_OFFSET(0x16B76DB0)
#define HDGBEOKCJNK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16B76DE0)

inline static constexpr unsigned int HDGBEOKCJNK_TypeDefinitionIndex = 55698;

	class HDGBEOKCJNK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareEvolveBuildProperty*))((::PBYTE)hIl2Cpp + HDGBEOKCJNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGBEOKCJNK_EVALUATE_OFFSET))(this);
		}

	};
