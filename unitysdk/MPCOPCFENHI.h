#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MPCOPCFENHI;

#define MPCOPCFENHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DDAD0)
#define MPCOPCFENHI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1DDAE0)
#define MPCOPCFENHI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1DDAA0)

	class MPCOPCFENHI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 DGLJLJEHNNB; // 0x18
		::System::Boolean DMKJAJLNEBK; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 HFFBGDNDBHC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCOPCFENHI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MPCOPCFENHI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPCOPCFENHI*))((::PBYTE)hIl2Cpp + MPCOPCFENHI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MPCOPCFENHI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPCOPCFENHI*))((::PBYTE)hIl2Cpp + MPCOPCFENHI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
