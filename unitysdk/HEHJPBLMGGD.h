#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowChallengeSuccessToastUI; }
namespace RPG::GameCore { class TaskContext; }

#define HEHJPBLMGGD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C51F60)
#define HEHJPBLMGGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C51F90)

inline static constexpr unsigned int HEHJPBLMGGD_TypeDefinitionIndex = 53264;

	class HEHJPBLMGGD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowChallengeSuccessToastUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowChallengeSuccessToastUI*))((::PBYTE)hIl2Cpp + HEHJPBLMGGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHJPBLMGGD_ONTASKBEGIN_OFFSET))(this);
		}

	};
