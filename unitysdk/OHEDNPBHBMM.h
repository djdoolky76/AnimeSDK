#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureTriggerFastRun; }
namespace RPG::GameCore { class TaskContext; }

#define OHEDNPBHBMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5AD60)
#define OHEDNPBHBMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE5AD90)

inline static constexpr unsigned int OHEDNPBHBMM_TypeDefinitionIndex = 57925;

	class OHEDNPBHBMM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerFastRun* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerFastRun*))((::PBYTE)hIl2Cpp + OHEDNPBHBMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEDNPBHBMM_ONTASKBEGIN_OFFSET))(this);
		}

	};
