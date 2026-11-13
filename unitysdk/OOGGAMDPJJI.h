#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialForbidAutoBattle; }

#define OOGGAMDPJJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1969C3A0)
#define OOGGAMDPJJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1969C3D0)

inline static constexpr unsigned int OOGGAMDPJJI_TypeDefinitionIndex = 56985;

	class OOGGAMDPJJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialForbidAutoBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialForbidAutoBattle*))((::PBYTE)hIl2Cpp + OOGGAMDPJJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGGAMDPJJI_ONTASKBEGIN_OFFSET))(this);
		}

	};
