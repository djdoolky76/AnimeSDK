#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DeployPuzzleChangeBoardState; }
namespace RPG::GameCore { class TaskContext; }

#define KNCKFALGJEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB57C890)
#define KNCKFALGJEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB57C8C0)

inline static constexpr unsigned int KNCKFALGJEG_TypeDefinitionIndex = 58068;

	class KNCKFALGJEG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleChangeBoardState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleChangeBoardState*))((::PBYTE)hIl2Cpp + KNCKFALGJEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCKFALGJEG_ONTASKBEGIN_OFFSET))(this);
		}

	};
