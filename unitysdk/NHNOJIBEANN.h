#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PreloadStageBattleEventEffects; }
namespace RPG::GameCore { class TaskContext; }

#define NHNOJIBEANN_CTOR_OFFSET UNITYSDK_OFFSET(0xBBDA260)
#define NHNOJIBEANN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBDA290)

inline static constexpr unsigned int NHNOJIBEANN_TypeDefinitionIndex = 58300;

	class NHNOJIBEANN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PreloadStageBattleEventEffects* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PreloadStageBattleEventEffects*))((::PBYTE)hIl2Cpp + NHNOJIBEANN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNOJIBEANN_ONTASKBEGIN_OFFSET))(this);
		}

	};
