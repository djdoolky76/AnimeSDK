#pragma once
#include "unitysdk/unitysdk.h"
class JIBGBCAHCKA;
namespace RPG::GameCore { class TaskContext; }

#define GKEHFEBNJDO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A95470)
#define GKEHFEBNJDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A954A0)

	class GKEHFEBNJDO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JIBGBCAHCKA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JIBGBCAHCKA*))((::PBYTE)hIl2Cpp + GKEHFEBNJDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEHFEBNJDO_ONTASKBEGIN_OFFSET))(this);
		}

	};
