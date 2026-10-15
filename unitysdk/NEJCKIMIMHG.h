#pragma once
#include "unitysdk/unitysdk.h"
class IONGMCIAHEL;
namespace RPG::GameCore { class TaskContext; }

#define NEJCKIMIMHG_CTOR_OFFSET UNITYSDK_OFFSET(0xBB58DF0)
#define NEJCKIMIMHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB58E20)

inline static constexpr unsigned int NEJCKIMIMHG_TypeDefinitionIndex = 57857;

	class NEJCKIMIMHG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IONGMCIAHEL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IONGMCIAHEL*))((::PBYTE)hIl2Cpp + NEJCKIMIMHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJCKIMIMHG_ONTASKBEGIN_OFFSET))(this);
		}

	};
