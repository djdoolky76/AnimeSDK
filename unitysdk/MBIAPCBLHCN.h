#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class HCFLAPPBPOP;
class MBIAPCBLHCN;
class MPKPFCNKECG;

#define MBIAPCBLHCN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB85B830)
#define MBIAPCBLHCN_CTOR_OFFSET UNITYSDK_OFFSET(0xB85B8E0)
#define MBIAPCBLHCN_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xB85B810)
#define MBIAPCBLHCN_NEDMMKBANED_OFFSET UNITYSDK_OFFSET(0xB85B820)

	class MBIAPCBLHCN
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + MBIAPCBLHCN_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + MBIAPCBLHCN_JOHPKPGOGHD_OFFSET))(this);
		}

		::MPKPFCNKECG* NEDMMKBANED()
		{
			return ((::MPKPFCNKECG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBIAPCBLHCN_NEDMMKBANED_OFFSET))(this);
		}

		static ::MBIAPCBLHCN* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::MBIAPCBLHCN*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + MBIAPCBLHCN_BPLPBPMEODA_OFFSET))(a1);
		}

	};
