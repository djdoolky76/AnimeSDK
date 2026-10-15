#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByChimeraDuelIsMasterSelected; }
namespace RPG::GameCore { class TaskContext; }

#define BBLNGCFFNDG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E92F50)
#define BBLNGCFFNDG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15E92F80)

inline static constexpr unsigned int BBLNGCFFNDG_TypeDefinitionIndex = 53131;

	class BBLNGCFFNDG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + BBLNGCFFNDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLNGCFFNDG_EVALUATE_OFFSET))(this);
		}

	};
