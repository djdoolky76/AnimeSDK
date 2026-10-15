#pragma once
#include "unitysdk/unitysdk.h"
class EHLALANHDPD;
namespace RPG::GameCore { class TaskContext; }

#define BPEBJDAIMKC_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A3540)
#define BPEBJDAIMKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1A3570)

	class BPEBJDAIMKC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EHLALANHDPD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EHLALANHDPD*))((::PBYTE)hIl2Cpp + BPEBJDAIMKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEBJDAIMKC_ONTASKBEGIN_OFFSET))(this);
		}

	};
