#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTargetValid; }
namespace RPG::GameCore { class TaskContext; }

#define EOFCKCECPCI_CTOR_OFFSET UNITYSDK_OFFSET(0x155BDED0)
#define EOFCKCECPCI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155BDF00)

inline static constexpr unsigned int EOFCKCECPCI_TypeDefinitionIndex = 54692;

	class EOFCKCECPCI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTargetValid* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTargetValid*))((::PBYTE)hIl2Cpp + EOFCKCECPCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFCKCECPCI_EVALUATE_OFFSET))(this);
		}

	};
