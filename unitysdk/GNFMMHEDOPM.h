#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByTriggeredTrackedSearch; }
namespace RPG::GameCore { class TaskContext; }

#define GNFMMHEDOPM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B02350)
#define GNFMMHEDOPM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B02380)

inline static constexpr unsigned int GNFMMHEDOPM_TypeDefinitionIndex = 53122;

	class GNFMMHEDOPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + GNFMMHEDOPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFMMHEDOPM_EVALUATE_OFFSET))(this);
		}

	};
