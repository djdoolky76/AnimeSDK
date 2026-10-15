#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DecalPuzzleEnd; }
namespace RPG::GameCore { class TaskContext; }

#define NEDMDLKJLEP_CTOR_OFFSET UNITYSDK_OFFSET(0xBB59DF0)
#define NEDMDLKJLEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB59E20)

inline static constexpr unsigned int NEDMDLKJLEP_TypeDefinitionIndex = 52730;

	class NEDMDLKJLEP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DecalPuzzleEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DecalPuzzleEnd*))((::PBYTE)hIl2Cpp + NEDMDLKJLEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDMDLKJLEP_ONTASKBEGIN_OFFSET))(this);
		}

	};
