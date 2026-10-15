#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GridFightShowTraitEffect; }
namespace RPG::GameCore { class TaskContext; }

#define LGOLPOCLDND_CTOR_OFFSET UNITYSDK_OFFSET(0xB696C20)
#define LGOLPOCLDND_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB696C50)

inline static constexpr unsigned int LGOLPOCLDND_TypeDefinitionIndex = 58148;

	class LGOLPOCLDND
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowTraitEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowTraitEffect*))((::PBYTE)hIl2Cpp + LGOLPOCLDND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOLPOCLDND_ONTASKBEGIN_OFFSET))(this);
		}

	};
