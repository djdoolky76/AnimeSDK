#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LAPKGFCDPCD;

#define LAPKGFCDPCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D4310)
#define LAPKGFCDPCD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0D4320)
#define LAPKGFCDPCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0D42E0)

	class LAPKGFCDPCD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean NMMJBGFDNAI; // 0x18
		::System::Boolean IBOHLAIEOLJ; // 0x19
		::System::Boolean LJDLDJHAFAI; // 0x1A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPKGFCDPCD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LAPKGFCDPCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LAPKGFCDPCD*))((::PBYTE)hIl2Cpp + LAPKGFCDPCD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LAPKGFCDPCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LAPKGFCDPCD*))((::PBYTE)hIl2Cpp + LAPKGFCDPCD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
