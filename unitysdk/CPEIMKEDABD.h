#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DeployPuzzleGiveBackStone; }
namespace RPG::GameCore { class TaskContext; }

#define CPEIMKEDABD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD11B0)
#define CPEIMKEDABD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCD11E0)

inline static constexpr unsigned int CPEIMKEDABD_TypeDefinitionIndex = 58072;

	class CPEIMKEDABD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleGiveBackStone* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleGiveBackStone*))((::PBYTE)hIl2Cpp + CPEIMKEDABD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEIMKEDABD_ONTASKBEGIN_OFFSET))(this);
		}

	};
