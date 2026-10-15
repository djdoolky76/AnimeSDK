#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FateBattleArcherProgressReachLimit; }
namespace RPG::GameCore { class TaskContext; }

#define GIHCKCGJANN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A37700)
#define GIHCKCGJANN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A37730)

inline static constexpr unsigned int GIHCKCGJANN_TypeDefinitionIndex = 55029;

	class GIHCKCGJANN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FateBattleArcherProgressReachLimit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FateBattleArcherProgressReachLimit*))((::PBYTE)hIl2Cpp + GIHCKCGJANN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHCKCGJANN_ONTASKBEGIN_OFFSET))(this);
		}

	};
