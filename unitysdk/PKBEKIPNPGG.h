#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByComparePerformance; }
namespace RPG::GameCore { class TaskContext; }

#define PKBEKIPNPGG_CTOR_OFFSET UNITYSDK_OFFSET(0xC2A4250)
#define PKBEKIPNPGG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC2A4280)

inline static constexpr unsigned int PKBEKIPNPGG_TypeDefinitionIndex = 52583;

	class PKBEKIPNPGG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + PKBEKIPNPGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBEKIPNPGG_EVALUATE_OFFSET))(this);
		}

	};
