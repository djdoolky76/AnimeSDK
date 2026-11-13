#pragma once
#include "unitysdk/unitysdk.h"
class AGINOJMPLJF;
namespace RPG::GameCore { class TaskContext; }

#define ABKIAIBAKDE_CTOR_OFFSET UNITYSDK_OFFSET(0x18CB52F0)
#define ABKIAIBAKDE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CB5320)

inline static constexpr unsigned int ABKIAIBAKDE_TypeDefinitionIndex = 53634;

	class ABKIAIBAKDE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AGINOJMPLJF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AGINOJMPLJF*))((::PBYTE)hIl2Cpp + ABKIAIBAKDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIAIBAKDE_ONTASKBEGIN_OFFSET))(this);
		}

	};
