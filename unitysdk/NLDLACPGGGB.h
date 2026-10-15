#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetWavingBlockControl; }
namespace RPG::GameCore { class TaskContext; }

#define NLDLACPGGGB_CTOR_OFFSET UNITYSDK_OFFSET(0xBC5D130)
#define NLDLACPGGGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC5D160)

inline static constexpr unsigned int NLDLACPGGGB_TypeDefinitionIndex = 52504;

	class NLDLACPGGGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetWavingBlockControl* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetWavingBlockControl*))((::PBYTE)hIl2Cpp + NLDLACPGGGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDLACPGGGB_ONTASKBEGIN_OFFSET))(this);
		}

	};
