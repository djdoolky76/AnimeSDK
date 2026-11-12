#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLNPNIOIEEL_PortalMoveState.h"
#include "unitysdk/OEAMAMLDKFC.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define CLNPNIOIEEL_BFBAJHFIMKK_OFFSET UNITYSDK_OFFSET(0xE35CF20)
#define CLNPNIOIEEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE35D310)
#define CLNPNIOIEEL_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xE35C9F0)
#define CLNPNIOIEEL_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xE35CD60)
#define CLNPNIOIEEL_GJEJEEAOFID_OFFSET UNITYSDK_OFFSET(0xE35BFE0)
#define CLNPNIOIEEL_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xE35C500)
#define CLNPNIOIEEL_HDPAJONGIKN_OFFSET UNITYSDK_OFFSET(0xE35CED0)
#define CLNPNIOIEEL_IMJGGFNAJFE_OFFSET UNITYSDK_OFFSET(0xE35CF80)
#define CLNPNIOIEEL_IOBMAEKOCLG_OFFSET UNITYSDK_OFFSET(0xE35C660)
#define CLNPNIOIEEL_KEHGPLPJHMI_OFFSET UNITYSDK_OFFSET(0xE35C150)
#define CLNPNIOIEEL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE35BF60)
#define CLNPNIOIEEL_LFDKACODLGG_OFFSET UNITYSDK_OFFSET(0xE35D2C0)
#define CLNPNIOIEEL_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0xE35C720)
#define CLNPNIOIEEL_LGPDEOBOJJE_OFFSET UNITYSDK_OFFSET(0xE35CAD0)
#define CLNPNIOIEEL_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xE35CC00)
#define CLNPNIOIEEL_OIFLGGCHLPH_OFFSET UNITYSDK_OFFSET(0xE35CDC0)

inline static constexpr unsigned int CLNPNIOIEEL_TypeDefinitionIndex = 79327;

	class CLNPNIOIEEL : public ::OEAMAMLDKFC
	{
	public:
		::System::Single JJMBOHHCMFM; // 0xD8
		::System::Single DHBJGBJFPFC; // 0xDC
		::CLNPNIOIEEL_PortalMoveState DLNIGFGLPLJ; // 0xE0
		::System::Single FLHOEGBFPJB; // 0xE4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void GJEJEEAOFID(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_GJEJEEAOFID_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void IOBMAEKOCLG(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_IOBMAEKOCLG_OFFSET))(this, a1, a2);
		}

		::System::Void LFIFIEGFMOM(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_LFIFIEGFMOM_OFFSET))(this, a1, a2);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void GBCHFFLMIIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_GBCHFFLMIIC_OFFSET))(this, a1);
		}

		::System::Void OIFLGGCHLPH(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_OIFLGGCHLPH_OFFSET))(this, a1, a2);
		}

		::System::Void HDPAJONGIKN(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_HDPAJONGIKN_OFFSET))(this, a1);
		}

		::System::Void BFBAJHFIMKK(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_BFBAJHFIMKK_OFFSET))(this, a1, a2);
		}

		::System::Void IMJGGFNAJFE(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_IMJGGFNAJFE_OFFSET))(this, a1, a2);
		}

		::System::Void LFDKACODLGG(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_LFDKACODLGG_OFFSET))(this, a1);
		}

		::System::Void KEHGPLPJHMI(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_KEHGPLPJHMI_OFFSET))(this, a1);
		}

		::System::Void LGPDEOBOJJE(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + CLNPNIOIEEL_LGPDEOBOJJE_OFFSET))(this, a1);
		}

	};
