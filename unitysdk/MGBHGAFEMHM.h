#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MGBHGAFEMHM;

#define MGBHGAFEMHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D164710)
#define MGBHGAFEMHM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D164620)

	class MGBHGAFEMHM : public ::System::Object
	{
	public:
		::System::UInt32 DCDJBFAPAJA; // 0x10
		::System::UInt32 FOJDEJPDKEJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBHGAFEMHM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MGBHGAFEMHM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGBHGAFEMHM*))((::PBYTE)hIl2Cpp + MGBHGAFEMHM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
