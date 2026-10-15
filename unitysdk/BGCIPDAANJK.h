#pragma once
#include "unitysdk/unitysdk.h"
class AEFGJJICLON;
namespace RPG::GameCore { class TaskContext; }

#define BGCIPDAANJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB176C80)
#define BGCIPDAANJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB176CB0)

	class BGCIPDAANJK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AEFGJJICLON* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AEFGJJICLON*))((::PBYTE)hIl2Cpp + BGCIPDAANJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCIPDAANJK_ONTASKBEGIN_OFFSET))(this);
		}

	};
