#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsInDistrict; }
namespace RPG::GameCore { class TaskContext; }

#define GADGIEHNJOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B867ED0)
#define GADGIEHNJOL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B867F00)

inline static constexpr unsigned int GADGIEHNJOL_TypeDefinitionIndex = 54310;

	class GADGIEHNJOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInDistrict* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + GADGIEHNJOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GADGIEHNJOL_EVALUATE_OFFSET))(this);
		}

	};
