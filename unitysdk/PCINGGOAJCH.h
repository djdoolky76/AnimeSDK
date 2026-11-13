#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPamAnchorContinous; }
namespace RPG::GameCore { class TaskContext; }

#define PCINGGOAJCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD0E00)
#define PCINGGOAJCH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1AAD0E30)

inline static constexpr unsigned int PCINGGOAJCH_TypeDefinitionIndex = 54318;

	class PCINGGOAJCH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamAnchorContinous* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamAnchorContinous*))((::PBYTE)hIl2Cpp + PCINGGOAJCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCINGGOAJCH_EVALUATE_OFFSET))(this);
		}

	};
