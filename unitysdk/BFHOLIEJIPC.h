#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CustomMonsterWaveInfo; }
namespace RPG::GameCore { class TaskContext; }

#define BFHOLIEJIPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB7EE3C0)
#define BFHOLIEJIPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7EE3F0)

inline static constexpr unsigned int BFHOLIEJIPC_TypeDefinitionIndex = 56295;

	class BFHOLIEJIPC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CustomMonsterWaveInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CustomMonsterWaveInfo*))((::PBYTE)hIl2Cpp + BFHOLIEJIPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHOLIEJIPC_ONTASKBEGIN_OFFSET))(this);
		}

	};
