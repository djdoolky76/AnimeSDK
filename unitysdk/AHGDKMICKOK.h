#pragma once
#include "unitysdk/unitysdk.h"
class ALFJPDLGBJH;
namespace RPG::GameCore { class TaskContext; }

#define AHGDKMICKOK_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7B5D0)
#define AHGDKMICKOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB7B600)

inline static constexpr unsigned int AHGDKMICKOK_TypeDefinitionIndex = 55894;

	class AHGDKMICKOK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ALFJPDLGBJH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ALFJPDLGBJH*))((::PBYTE)hIl2Cpp + AHGDKMICKOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGDKMICKOK_ONTASKBEGIN_OFFSET))(this);
		}

	};
