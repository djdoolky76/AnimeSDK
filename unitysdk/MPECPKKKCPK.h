#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MPECPKKKCPK;

#define MPECPKKKCPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DE1F0)
#define MPECPKKKCPK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1DDE20)

	class MPECPKKKCPK : public ::System::Object
	{
	public:
		::RPG::Client::TextID NMAHGFAPENI; // 0x10
		::System::UInt32 LIPCDDAPHNF; // 0x20
		::System::UInt32 ENKMNJDEMJE; // 0x24
		::RPG::Client::TextID NMPFJBDGGDE; // 0x28
		::System::UInt32 PHFMCACHFIJ; // 0x38
		::RPG::GameCore::FateRinHouguOwnerType LOALOLNACOA; // 0x3C
		::RPG::Client::TextID KJGFIMDLFHF; // 0x40
		::RPG::Client::TextID DHJDDBMCNKJ; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPECPKKKCPK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MPECPKKKCPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPECPKKKCPK*))((::PBYTE)hIl2Cpp + MPECPKKKCPK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
