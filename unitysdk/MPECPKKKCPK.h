#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MPECPKKKCPK;

#define MPECPKKKCPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B04E0)
#define MPECPKKKCPK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1B0110)

inline static constexpr unsigned int MPECPKKKCPK_TypeDefinitionIndex = 11546;

	class MPECPKKKCPK : public ::System::Object
	{
	public:
		::RPG::Client::TextID NMPFJBDGGDE; // 0x10
		::RPG::Client::TextID KJGFIMDLFHF; // 0x20
		::RPG::Client::TextID DHJDDBMCNKJ; // 0x30
		::System::UInt32 LIPCDDAPHNF; // 0x40
		::System::UInt32 PHFMCACHFIJ; // 0x44
		::RPG::GameCore::FateRinHouguOwnerType LOALOLNACOA; // 0x48
		::System::UInt32 ENKMNJDEMJE; // 0x4C
		::RPG::Client::TextID NMAHGFAPENI; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPECPKKKCPK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MPECPKKKCPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPECPKKKCPK*))((::PBYTE)hIl2Cpp + MPECPKKKCPK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
