#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetDamageTextVisible; }
namespace RPG::GameCore { class TaskContext; }

#define KPCFMCINLBF_CTOR_OFFSET UNITYSDK_OFFSET(0xB5A9F90)
#define KPCFMCINLBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5A9FC0)

inline static constexpr unsigned int KPCFMCINLBF_TypeDefinitionIndex = 55579;

	class KPCFMCINLBF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetDamageTextVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetDamageTextVisible*))((::PBYTE)hIl2Cpp + KPCFMCINLBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCFMCINLBF_ONTASKBEGIN_OFFSET))(this);
		}

	};
