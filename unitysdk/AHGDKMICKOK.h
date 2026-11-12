#pragma once
#include "unitysdk/unitysdk.h"
class ALFJPDLGBJH;
namespace RPG::GameCore { class TaskContext; }

#define AHGDKMICKOK_CTOR_OFFSET UNITYSDK_OFFSET(0xF13FD40)
#define AHGDKMICKOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF13FD70)

inline static constexpr unsigned int AHGDKMICKOK_TypeDefinitionIndex = 57097;

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
