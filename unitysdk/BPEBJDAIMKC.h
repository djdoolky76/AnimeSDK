#pragma once
#include "unitysdk/unitysdk.h"
class EHLALANHDPD;
namespace RPG::GameCore { class TaskContext; }

#define BPEBJDAIMKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6003F0)
#define BPEBJDAIMKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B600420)

inline static constexpr unsigned int BPEBJDAIMKC_TypeDefinitionIndex = 56394;

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
