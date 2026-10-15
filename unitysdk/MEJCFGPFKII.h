#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MEJCFGPFKII;

#define MEJCFGPFKII_CTOR_OFFSET UNITYSDK_OFFSET(0x1D151950)
#define MEJCFGPFKII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D151890)

	class MEJCFGPFKII : public ::System::Object
	{
	public:
		::System::UInt32 PBLDLDIEFNC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJCFGPFKII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MEJCFGPFKII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MEJCFGPFKII*))((::PBYTE)hIl2Cpp + MEJCFGPFKII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
