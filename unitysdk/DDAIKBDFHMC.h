#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetColliderLayerState; }
namespace RPG::GameCore { class TaskContext; }

#define DDAIKBDFHMC_CTOR_OFFSET UNITYSDK_OFFSET(0xE256B50)
#define DDAIKBDFHMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE256B80)

inline static constexpr unsigned int DDAIKBDFHMC_TypeDefinitionIndex = 52492;

	class DDAIKBDFHMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetColliderLayerState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetColliderLayerState*))((::PBYTE)hIl2Cpp + DDAIKBDFHMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAIKBDFHMC_ONTASKBEGIN_OFFSET))(this);
		}

	};
