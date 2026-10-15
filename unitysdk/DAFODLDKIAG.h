#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class DAFODLDKIAG;
class HCFLAPPBPOP;
class HNOENBKDPFH;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DAFODLDKIAG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDFC2370)
#define DAFODLDKIAG_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC2420)
#define DAFODLDKIAG_DGDJPPGAHNA_OFFSET UNITYSDK_OFFSET(0xDFC2320)
#define DAFODLDKIAG_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xDFC22B0)
#define DAFODLDKIAG_MAEMPJIHOHC_OFFSET UNITYSDK_OFFSET(0xDFC22D0)
#define DAFODLDKIAG_MHEFLBIEELJ_OFFSET UNITYSDK_OFFSET(0xDFC22C0)

	class DAFODLDKIAG
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + DAFODLDKIAG_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFODLDKIAG_JOHPKPGOGHD_OFFSET))(this);
		}

		::HNOENBKDPFH* MHEFLBIEELJ()
		{
			return ((::HNOENBKDPFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFODLDKIAG_MHEFLBIEELJ_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* MAEMPJIHOHC()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFODLDKIAG_MAEMPJIHOHC_OFFSET))(this);
		}

		::System::UInt32 DGDJPPGAHNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFODLDKIAG_DGDJPPGAHNA_OFFSET))(this);
		}

		static ::DAFODLDKIAG* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::DAFODLDKIAG*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + DAFODLDKIAG_BPLPBPMEODA_OFFSET))(a1);
		}

	};
