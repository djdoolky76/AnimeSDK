#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RestartTrackPhoto; }
namespace RPG::GameCore { class TaskContext; }

#define NMGJANOONNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBC7BD40)
#define NMGJANOONNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC7BD70)

inline static constexpr unsigned int NMGJANOONNJ_TypeDefinitionIndex = 53209;

	class NMGJANOONNJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RestartTrackPhoto* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RestartTrackPhoto*))((::PBYTE)hIl2Cpp + NMGJANOONNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGJANOONNJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
