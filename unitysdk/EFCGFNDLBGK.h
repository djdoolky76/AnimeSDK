#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFCGFNDLBGK;
class FCOEMCEDLNL;

#define EFCGFNDLBGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD77CB0)
#define EFCGFNDLBGK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD77BC0)

	class EFCGFNDLBGK : public ::System::Object
	{
	public:
		::System::UInt32 MDBPDAJJLMG; // 0x10
		::System::UInt32 KDKPDJNMMCM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCGFNDLBGK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EFCGFNDLBGK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EFCGFNDLBGK*))((::PBYTE)hIl2Cpp + EFCGFNDLBGK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
