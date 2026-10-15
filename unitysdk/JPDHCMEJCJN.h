#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByCompareProperty; }
namespace RPG::GameCore { class TaskContext; }

#define JPDHCMEJCJN_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B43C0)
#define JPDHCMEJCJN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2B43F0)

inline static constexpr unsigned int JPDHCMEJCJN_TypeDefinitionIndex = 53915;

	class JPDHCMEJCJN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByCompareProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByCompareProperty*))((::PBYTE)hIl2Cpp + JPDHCMEJCJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDHCMEJCJN_EVALUATE_OFFSET))(this);
		}

	};
