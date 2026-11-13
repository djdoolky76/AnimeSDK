#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideEntityV2; }
namespace RPG::GameCore { class TaskContext; }

#define PKLMOPEKMPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1886AAA0)
#define PKLMOPEKMPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1886AAD0)

inline static constexpr unsigned int PKLMOPEKMPK_TypeDefinitionIndex = 56274;

	class PKLMOPEKMPK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideEntityV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideEntityV2*))((::PBYTE)hIl2Cpp + PKLMOPEKMPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLMOPEKMPK_ONTASKBEGIN_OFFSET))(this);
		}

	};
