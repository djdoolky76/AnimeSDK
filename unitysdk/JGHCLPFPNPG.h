#pragma once
#include "unitysdk/unitysdk.h"
class LCDMLIEHLOE;
namespace RPG::GameCore { class TaskContext; }

#define JGHCLPFPNPG_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B4770)
#define JGHCLPFPNPG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB9B47A0)

inline static constexpr unsigned int JGHCLPFPNPG_TypeDefinitionIndex = 55336;

	class JGHCLPFPNPG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LCDMLIEHLOE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LCDMLIEHLOE*))((::PBYTE)hIl2Cpp + JGHCLPFPNPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHCLPFPNPG_EVALUATE_OFFSET))(this);
		}

	};
