#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareEnvProfilePath; }
namespace RPG::GameCore { class TaskContext; }

#define EOHGNFBDCIG_CTOR_OFFSET UNITYSDK_OFFSET(0x155B5480)
#define EOHGNFBDCIG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155B54B0)

inline static constexpr unsigned int EOHGNFBDCIG_TypeDefinitionIndex = 53133;

	class EOHGNFBDCIG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareEnvProfilePath* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareEnvProfilePath*))((::PBYTE)hIl2Cpp + EOHGNFBDCIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHGNFBDCIG_EVALUATE_OFFSET))(this);
		}

	};
