#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KOJOJDPPIEO;

#define KOJOJDPPIEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C1CF0)
#define KOJOJDPPIEO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0C1B70)

	class KOJOJDPPIEO : public ::System::Object
	{
	public:
		::System::UInt32 LLDCHLHNADA; // 0x10
		::System::UInt32 GDBJDAOOCOH; // 0x14
		::System::UInt32 GLIGLMMJAHD; // 0x18
		::System::UInt32 EMFGEFNHOIB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJOJDPPIEO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KOJOJDPPIEO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KOJOJDPPIEO*))((::PBYTE)hIl2Cpp + KOJOJDPPIEO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
