#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class DAFODLDKIAG;
class HCFLAPPBPOP;
class HNOENBKDPFH;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DAFODLDKIAG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19943E40)
#define DAFODLDKIAG_CTOR_OFFSET UNITYSDK_OFFSET(0x19943EF0)
#define DAFODLDKIAG_DGDJPPGAHNA_OFFSET UNITYSDK_OFFSET(0x19943DF0)
#define DAFODLDKIAG_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0x19943D80)
#define DAFODLDKIAG_MAEMPJIHOHC_OFFSET UNITYSDK_OFFSET(0x19943DA0)
#define DAFODLDKIAG_MHEFLBIEELJ_OFFSET UNITYSDK_OFFSET(0x19943D90)

inline static constexpr unsigned int DAFODLDKIAG_TypeDefinitionIndex = 80804;

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
