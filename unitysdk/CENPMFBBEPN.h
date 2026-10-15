#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CENPMFBBEPN;
class FCOEMCEDLNL;

#define CENPMFBBEPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC09C70)
#define CENPMFBBEPN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC09BD0)

	class CENPMFBBEPN : public ::System::Object
	{
	public:
		::System::UInt32 PBLDLDIEFNC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENPMFBBEPN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CENPMFBBEPN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CENPMFBBEPN*))((::PBYTE)hIl2Cpp + CENPMFBBEPN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
