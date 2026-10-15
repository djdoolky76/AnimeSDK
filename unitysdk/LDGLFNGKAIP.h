#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LDGLFNGKAIP;

#define LDGLFNGKAIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E0F90)
#define LDGLFNGKAIP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0E0E70)

	class LDGLFNGKAIP : public ::System::Object
	{
	public:
		::System::UInt32 OIHFPOJCODL; // 0x10
		::System::UInt32 MJIEECGNEFO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGLFNGKAIP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDGLFNGKAIP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDGLFNGKAIP*))((::PBYTE)hIl2Cpp + LDGLFNGKAIP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
