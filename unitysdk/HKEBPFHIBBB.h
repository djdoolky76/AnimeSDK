#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsInAnimZone; }
namespace RPG::GameCore { class TaskContext; }

#define HKEBPFHIBBB_CTOR_OFFSET UNITYSDK_OFFSET(0x19879F20)
#define HKEBPFHIBBB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19879F50)

inline static constexpr unsigned int HKEBPFHIBBB_TypeDefinitionIndex = 54309;

	class HKEBPFHIBBB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + HKEBPFHIBBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEBPFHIBBB_EVALUATE_OFFSET))(this);
		}

	};
