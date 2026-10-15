#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChimePuzzleLockChime; }
namespace RPG::GameCore { class TaskContext; }

#define MIFEMNGNMAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB94CC00)
#define MIFEMNGNMAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB94CC30)

inline static constexpr unsigned int MIFEMNGNMAE_TypeDefinitionIndex = 58020;

	class MIFEMNGNMAE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimePuzzleLockChime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimePuzzleLockChime*))((::PBYTE)hIl2Cpp + MIFEMNGNMAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFEMNGNMAE_ONTASKBEGIN_OFFSET))(this);
		}

	};
