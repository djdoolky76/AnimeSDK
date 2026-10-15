#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HighlightEntityActionBar; }
namespace RPG::GameCore { class TaskContext; }

#define PBCMDOLIGEO_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE2B80)
#define PBCMDOLIGEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFE2BB0)

inline static constexpr unsigned int PBCMDOLIGEO_TypeDefinitionIndex = 55101;

	class PBCMDOLIGEO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HighlightEntityActionBar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HighlightEntityActionBar*))((::PBYTE)hIl2Cpp + PBCMDOLIGEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCMDOLIGEO_ONTASKBEGIN_OFFSET))(this);
		}

	};
