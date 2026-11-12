#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByNPCStatus; }
namespace RPG::GameCore { class TaskContext; }

#define PMBCCLDHIPA_CTOR_OFFSET UNITYSDK_OFFSET(0xCC431E0)
#define PMBCCLDHIPA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCC43210)

inline static constexpr unsigned int PMBCCLDHIPA_TypeDefinitionIndex = 55869;

	class PMBCCLDHIPA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByNPCStatus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + PMBCCLDHIPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBCCLDHIPA_EVALUATE_OFFSET))(this);
		}

	};
