#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareDamageTag; }
namespace RPG::GameCore { class TaskContext; }

#define PECAKDLFOIF_CTOR_OFFSET UNITYSDK_OFFSET(0x10447600)
#define PECAKDLFOIF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10447630)

inline static constexpr unsigned int PECAKDLFOIF_TypeDefinitionIndex = 56054;

	class PECAKDLFOIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDamageTag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDamageTag*))((::PBYTE)hIl2Cpp + PECAKDLFOIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PECAKDLFOIF_EVALUATE_OFFSET))(this);
		}

	};
