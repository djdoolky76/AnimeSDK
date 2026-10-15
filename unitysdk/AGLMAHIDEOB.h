#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMissionAudioState; }
namespace RPG::GameCore { class TaskContext; }

#define AGLMAHIDEOB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF389B0)
#define AGLMAHIDEOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF389E0)

inline static constexpr unsigned int AGLMAHIDEOB_TypeDefinitionIndex = 58558;

	class AGLMAHIDEOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMissionAudioState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMissionAudioState*))((::PBYTE)hIl2Cpp + AGLMAHIDEOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLMAHIDEOB_ONTASKBEGIN_OFFSET))(this);
		}

	};
