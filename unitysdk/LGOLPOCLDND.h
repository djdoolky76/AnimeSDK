#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GridFightShowTraitEffect; }
namespace RPG::GameCore { class TaskContext; }

#define LGOLPOCLDND_CTOR_OFFSET UNITYSDK_OFFSET(0xBF34AF0)
#define LGOLPOCLDND_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF34B20)

inline static constexpr unsigned int LGOLPOCLDND_TypeDefinitionIndex = 59396;

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
