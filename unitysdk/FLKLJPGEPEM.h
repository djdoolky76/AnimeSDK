#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RA_ByContainEntityTag; }
namespace RPG::GameCore { class TaskContext; }

#define FLKLJPGEPEM_CTOR_OFFSET UNITYSDK_OFFSET(0x15831B40)
#define FLKLJPGEPEM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15831B70)

inline static constexpr unsigned int FLKLJPGEPEM_TypeDefinitionIndex = 52095;

	class FLKLJPGEPEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByContainEntityTag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByContainEntityTag*))((::PBYTE)hIl2Cpp + FLKLJPGEPEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJPGEPEM_EVALUATE_OFFSET))(this);
		}

	};
