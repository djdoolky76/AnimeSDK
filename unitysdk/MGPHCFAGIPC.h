#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetAlwaysAutoBattle; }
namespace RPG::GameCore { class TaskContext; }

#define MGPHCFAGIPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB92CFF0)
#define MGPHCFAGIPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB92D020)

inline static constexpr unsigned int MGPHCFAGIPC_TypeDefinitionIndex = 55574;

	class MGPHCFAGIPC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetAlwaysAutoBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetAlwaysAutoBattle*))((::PBYTE)hIl2Cpp + MGPHCFAGIPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPHCFAGIPC_ONTASKBEGIN_OFFSET))(this);
		}

	};
