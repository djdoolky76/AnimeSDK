#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetTeamLocation; }
namespace RPG::GameCore { class TaskContext; }

#define PEAPKCODABA_CTOR_OFFSET UNITYSDK_OFFSET(0xC0254A0)
#define PEAPKCODABA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0254D0)

inline static constexpr unsigned int PEAPKCODABA_TypeDefinitionIndex = 56430;

	class PEAPKCODABA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetTeamLocation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetTeamLocation*))((::PBYTE)hIl2Cpp + PEAPKCODABA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAPKCODABA_ONTASKBEGIN_OFFSET))(this);
		}

	};
