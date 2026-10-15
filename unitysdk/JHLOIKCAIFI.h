#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JHLOIKCAIFI;

#define JHLOIKCAIFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0324F0)
#define JHLOIKCAIFI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D032500)
#define JHLOIKCAIFI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0324C0)

	class JHLOIKCAIFI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 DOBKKDIECDO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLOIKCAIFI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JHLOIKCAIFI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JHLOIKCAIFI*))((::PBYTE)hIl2Cpp + JHLOIKCAIFI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JHLOIKCAIFI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JHLOIKCAIFI*))((::PBYTE)hIl2Cpp + JHLOIKCAIFI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
