#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByUsedFiveDimHoldDash; }
namespace RPG::GameCore { class TaskContext; }

#define IANCIPKCJAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E1F7B0)
#define IANCIPKCJAG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15E1F7E0)

inline static constexpr unsigned int IANCIPKCJAG_TypeDefinitionIndex = 52824;

	class IANCIPKCJAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByUsedFiveDimHoldDash*))((::PBYTE)hIl2Cpp + IANCIPKCJAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IANCIPKCJAG_EVALUATE_OFFSET))(this);
		}

	};
