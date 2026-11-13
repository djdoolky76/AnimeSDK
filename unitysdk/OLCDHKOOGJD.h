#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareHPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define OLCDHKOOGJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1789FCD0)
#define OLCDHKOOGJD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1789FD00)

inline static constexpr unsigned int OLCDHKOOGJD_TypeDefinitionIndex = 55703;

	class OLCDHKOOGJD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHPRatio*))((::PBYTE)hIl2Cpp + OLCDHKOOGJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCDHKOOGJD_EVALUATE_OFFSET))(this);
		}

	};
