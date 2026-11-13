#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideSkillReadyCamera; }
namespace RPG::GameCore { class TaskContext; }

#define AENOCHKGDKO_CTOR_OFFSET UNITYSDK_OFFSET(0x18DA7C40)
#define AENOCHKGDKO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DA7C70)

inline static constexpr unsigned int AENOCHKGDKO_TypeDefinitionIndex = 56425;

	class AENOCHKGDKO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideSkillReadyCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideSkillReadyCamera*))((::PBYTE)hIl2Cpp + AENOCHKGDKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENOCHKGDKO_ONTASKBEGIN_OFFSET))(this);
		}

	};
