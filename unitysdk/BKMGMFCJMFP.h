#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamTowersStatisticType.h"
#include "unitysdk/System/Object.h"
class BKMGMFCJMFP;
class FCOEMCEDLNL;

#define BKMGMFCJMFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D821190)
#define BKMGMFCJMFP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D820F30)

	class BKMGMFCJMFP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PBLPLDJKPEI; // 0x10
		::RPG::Client::TextID NMAHGFAPENI; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::RPG::GameCore::TeamTowersStatisticType GMPGDEINODK; // 0x2C
		::System::UInt32 NALMBOOCCIN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMGMFCJMFP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BKMGMFCJMFP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BKMGMFCJMFP*))((::PBYTE)hIl2Cpp + BKMGMFCJMFP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
