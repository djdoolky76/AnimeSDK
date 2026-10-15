#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareMissionCustomValue; }
namespace RPG::GameCore { class TaskContext; }

#define MBIDFAAPOIP_CTOR_OFFSET UNITYSDK_OFFSET(0xB8550E0)
#define MBIDFAAPOIP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB855110)

inline static constexpr unsigned int MBIDFAAPOIP_TypeDefinitionIndex = 52579;

	class MBIDFAAPOIP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMissionCustomValue*))((::PBYTE)hIl2Cpp + MBIDFAAPOIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBIDFAAPOIP_EVALUATE_OFFSET))(this);
		}

	};
