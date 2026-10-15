#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEAMAMLDKFC.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define FDHPNMJNANA_BOLFKCDMPAI_OFFSET UNITYSDK_OFFSET(0x156D8D80)
#define FDHPNMJNANA_CFEFHCIGMNB_OFFSET UNITYSDK_OFFSET(0x156D82A0)
#define FDHPNMJNANA_CTOR_OFFSET UNITYSDK_OFFSET(0x156D8F30)
#define FDHPNMJNANA_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x156D8ED0)
#define FDHPNMJNANA_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x156D85F0)
#define FDHPNMJNANA_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0x156D8CF0)
#define FDHPNMJNANA_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0x156D8320)
#define FDHPNMJNANA_HPKOKKELCEK_OFFSET UNITYSDK_OFFSET(0x156D8500)
#define FDHPNMJNANA_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x156D7BA0)
#define FDHPNMJNANA_IKBCMKDFGED_OFFSET UNITYSDK_OFFSET(0x156D8420)
#define FDHPNMJNANA_ILGFPFOPJGD_OFFSET UNITYSDK_OFFSET(0x156D7DB0)
#define FDHPNMJNANA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x156D7B20)
#define FDHPNMJNANA_NBKCKHILHHB_OFFSET UNITYSDK_OFFSET(0x156D8160)
#define FDHPNMJNANA_NIOOHGFAKIL_OFFSET UNITYSDK_OFFSET(0x156D8EE0)
#define FDHPNMJNANA_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x156D8760)
#define FDHPNMJNANA_OMMDCKHBDIM_OFFSET UNITYSDK_OFFSET(0x156D80E0)
#define FDHPNMJNANA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x156D8900)
#define FDHPNMJNANA_PONPBHKODIF_OFFSET UNITYSDK_OFFSET(0x156D8E60)

inline static constexpr unsigned int FDHPNMJNANA_TypeDefinitionIndex = 77009;

	class FDHPNMJNANA : public ::OEAMAMLDKFC
	{
	public:
		::System::Single LNODFEKOPHN; // 0xD8
		::System::Single PEICOEEBMCJ; // 0xDC
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
