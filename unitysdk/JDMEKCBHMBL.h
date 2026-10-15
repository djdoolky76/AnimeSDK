#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByPlayerInVisionZone; }
namespace RPG::GameCore { class TaskContext; }

#define JDMEKCBHMBL_CTOR_OFFSET UNITYSDK_OFFSET(0x165C8DC0)
#define JDMEKCBHMBL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x165C8DF0)

inline static constexpr unsigned int JDMEKCBHMBL_TypeDefinitionIndex = 53120;

	class JDMEKCBHMBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByPlayerInVisionZone* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByPlayerInVisionZone*))((::PBYTE)hIl2Cpp + JDMEKCBHMBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMEKCBHMBL_EVALUATE_OFFSET))(this);
		}

	};
