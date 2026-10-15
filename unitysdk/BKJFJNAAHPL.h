#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartTrackPhoto; }
namespace RPG::GameCore { class TaskContext; }

#define BKJFJNAAHPL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA596C0)
#define BKJFJNAAHPL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA596F0)

inline static constexpr unsigned int BKJFJNAAHPL_TypeDefinitionIndex = 53293;

	class BKJFJNAAHPL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartTrackPhoto* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartTrackPhoto*))((::PBYTE)hIl2Cpp + BKJFJNAAHPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJFJNAAHPL_ONTASKBEGIN_OFFSET))(this);
		}

	};
