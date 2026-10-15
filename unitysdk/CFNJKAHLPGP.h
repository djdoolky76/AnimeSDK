#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFNJKAHLPGP;
class FCOEMCEDLNL;

#define CFNJKAHLPGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC0B170)
#define CFNJKAHLPGP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC0B050)

	class CFNJKAHLPGP : public ::System::Object
	{
	public:
		::System::UInt32 ONJFGDGGKLG; // 0x10
		::System::UInt32 FIJLEDEKBJP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNJKAHLPGP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CFNJKAHLPGP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CFNJKAHLPGP*))((::PBYTE)hIl2Cpp + CFNJKAHLPGP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
