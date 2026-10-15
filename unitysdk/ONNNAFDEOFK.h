#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
class HIOAMIPNLIN;
namespace RPG::GameCore { class RemoveModifierByBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define ONNNAFDEOFK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF5FDD0)
#define ONNNAFDEOFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF603C0)
#define ONNNAFDEOFK_OADHPNNGBGL_OFFSET UNITYSDK_OFFSET(0xBF60070)
#define ONNNAFDEOFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF5FE90)

	class ONNNAFDEOFK
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveModifierByBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveModifierByBehaviorFlag*))((::PBYTE)hIl2Cpp + ONNNAFDEOFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNNAFDEOFK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OADHPNNGBGL(::HIOAMIPNLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + ONNNAFDEOFK_OADHPNNGBGL_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNNAFDEOFK_DISPOSE_OFFSET))(this);
		}

	};
