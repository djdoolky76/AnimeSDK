#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KPAGBHCHCII;

#define KPAGBHCHCII_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C59D0)
#define KPAGBHCHCII_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0C59E0)
#define KPAGBHCHCII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0C59A0)

	class KPAGBHCHCII : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 HFFBGDNDBHC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPAGBHCHCII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KPAGBHCHCII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KPAGBHCHCII*))((::PBYTE)hIl2Cpp + KPAGBHCHCII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KPAGBHCHCII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KPAGBHCHCII*))((::PBYTE)hIl2Cpp + KPAGBHCHCII_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
