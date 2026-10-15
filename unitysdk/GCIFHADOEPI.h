#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RA_SetStimulusInfo; }
namespace RPG::GameCore { class TaskContext; }

#define GCIFHADOEPI_CTOR_OFFSET UNITYSDK_OFFSET(0x159704C0)
#define GCIFHADOEPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159704F0)

inline static constexpr unsigned int GCIFHADOEPI_TypeDefinitionIndex = 52103;

	class GCIFHADOEPI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_SetStimulusInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_SetStimulusInfo*))((::PBYTE)hIl2Cpp + GCIFHADOEPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIFHADOEPI_ONTASKBEGIN_OFFSET))(this);
		}

	};
