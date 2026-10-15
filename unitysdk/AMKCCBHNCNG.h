#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class AMKCCBHNCNG;
class FCOEMCEDLNL;

#define AMKCCBHNCNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE0500)
#define AMKCCBHNCNG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCE03D0)

	class AMKCCBHNCNG : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinHouguOwnerType PHFMCACHFIJ; // 0x10
		::System::UInt32 KFFNBKGCCKO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKCCBHNCNG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AMKCCBHNCNG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AMKCCBHNCNG*))((::PBYTE)hIl2Cpp + AMKCCBHNCNG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
