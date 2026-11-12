#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvGameplayTrackNpcStart; }
namespace RPG::GameCore { class TaskContext; }

#define NLCFGMAJIFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC548450)
#define NLCFGMAJIFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC548480)

inline static constexpr unsigned int NLCFGMAJIFJ_TypeDefinitionIndex = 53487;

	class NLCFGMAJIFJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGameplayTrackNpcStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGameplayTrackNpcStart*))((::PBYTE)hIl2Cpp + NLCFGMAJIFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCFGMAJIFJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
