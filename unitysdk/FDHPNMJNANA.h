#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEAMAMLDKFC.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define FDHPNMJNANA_BOLFKCDMPAI_OFFSET UNITYSDK_OFFSET(0x156CD550)
#define FDHPNMJNANA_CFEFHCIGMNB_OFFSET UNITYSDK_OFFSET(0x156CCA70)
#define FDHPNMJNANA_CTOR_OFFSET UNITYSDK_OFFSET(0x156CD700)
#define FDHPNMJNANA_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x156CD6A0)
#define FDHPNMJNANA_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x156CCDC0)
#define FDHPNMJNANA_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0x156CD4C0)
#define FDHPNMJNANA_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0x156CCAF0)
#define FDHPNMJNANA_HPKOKKELCEK_OFFSET UNITYSDK_OFFSET(0x156CCCD0)
#define FDHPNMJNANA_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x156CC380)
#define FDHPNMJNANA_IKBCMKDFGED_OFFSET UNITYSDK_OFFSET(0x156CCBF0)
#define FDHPNMJNANA_ILGFPFOPJGD_OFFSET UNITYSDK_OFFSET(0x156CC590)
#define FDHPNMJNANA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x156CC300)
#define FDHPNMJNANA_NBKCKHILHHB_OFFSET UNITYSDK_OFFSET(0x156CC930)
#define FDHPNMJNANA_NIOOHGFAKIL_OFFSET UNITYSDK_OFFSET(0x156CD6B0)
#define FDHPNMJNANA_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x156CCF30)
#define FDHPNMJNANA_OMMDCKHBDIM_OFFSET UNITYSDK_OFFSET(0x156CC8B0)
#define FDHPNMJNANA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x156CD0D0)
#define FDHPNMJNANA_PONPBHKODIF_OFFSET UNITYSDK_OFFSET(0x156CD630)

inline static constexpr unsigned int FDHPNMJNANA_TypeDefinitionIndex = 77008;

	class FDHPNMJNANA : public ::OEAMAMLDKFC
	{
	public:
		::System::Single PEICOEEBMCJ; // 0xD8
		::System::Single LNODFEKOPHN; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHPNMJNANA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + FDHPNMJNANA_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + FDHPNMJNANA_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + FDHPNMJNANA_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + FDHPNMJNANA_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + FDHPNMJNANA_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void GBCHFFLMIIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FDHPNMJNANA_GBCHFFLMIIC_OFFSET))(this, a1);
		}

		::System::Boolean BOLFKCDMPAI(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + FDHPNMJNANA_BOLFKCDMPAI_OFFSET))(this, a1, a2);
		}

		::System::Void HPKOKKELCEK(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FDHPNMJNANA_HPKOKKELCEK_OFFSET))(this, a1);
		}

		::System::Void ILGFPFOPJGD(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FDHPNMJNANA_ILGFPFOPJGD_OFFSET))(this, a1);
		}

		::System::Void OMMDCKHBDIM(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FDHPNMJNANA_OMMDCKHBDIM_OFFSET))(this, a1);
		}

		::System::Void GGCCNDAIMDF(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FDHPNMJNANA_GGCCNDAIMDF_OFFSET))(this, a1);
		}

		::System::Void CFEFHCIGMNB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FDHPNMJNANA_CFEFHCIGMNB_OFFSET))(this, a1);
		}

		::System::Void IKBCMKDFGED(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FDHPNMJNANA_IKBCMKDFGED_OFFSET))(this, a1);
		}

		::System::Boolean NBKCKHILHHB(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + FDHPNMJNANA_NBKCKHILHHB_OFFSET))(this, a1, a2);
		}

		::System::Boolean PONPBHKODIF(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FDHPNMJNANA_PONPBHKODIF_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHPNMJNANA_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Boolean NIOOHGFAKIL(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FDHPNMJNANA_NIOOHGFAKIL_OFFSET))(this, a1);
		}

	};
