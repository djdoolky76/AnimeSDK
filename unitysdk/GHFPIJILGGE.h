#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvCharacterLerpAnimRunPoseParam; }
namespace RPG::GameCore { class TaskContext; }

#define GHFPIJILGGE_CTOR_OFFSET UNITYSDK_OFFSET(0x15A1B270)
#define GHFPIJILGGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A1B2A0)

inline static constexpr unsigned int GHFPIJILGGE_TypeDefinitionIndex = 52338;

	class GHFPIJILGGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam*))((::PBYTE)hIl2Cpp + GHFPIJILGGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFPIJILGGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
