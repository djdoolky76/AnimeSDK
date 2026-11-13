#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareIsEntityInDialogue; }
namespace RPG::GameCore { class TaskContext; }

#define KDOBJEKDJDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CBC00)
#define KDOBJEKDJDP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B5CBC30)

inline static constexpr unsigned int KDOBJEKDJDP_TypeDefinitionIndex = 53679;

	class KDOBJEKDJDP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + KDOBJEKDJDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOBJEKDJDP_EVALUATE_OFFSET))(this);
		}

	};
