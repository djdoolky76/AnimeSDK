#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideTimeRewindSpecularMatStyle; }
namespace RPG::GameCore { class TaskContext; }

#define IHLIAOACLGA_CTOR_OFFSET UNITYSDK_OFFSET(0x16417EA0)
#define IHLIAOACLGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16417ED0)

inline static constexpr unsigned int IHLIAOACLGA_TypeDefinitionIndex = 53380;

	class IHLIAOACLGA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle*))((::PBYTE)hIl2Cpp + IHLIAOACLGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLIAOACLGA_ONTASKBEGIN_OFFSET))(this);
		}

	};
