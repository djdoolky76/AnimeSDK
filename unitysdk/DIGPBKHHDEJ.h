#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEAMAMLDKFC.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;
class HIOEAKHGILF;

#define DIGPBKHHDEJ_AGCBJAALGLM_OFFSET UNITYSDK_OFFSET(0xEBFA1F0)
#define DIGPBKHHDEJ_BFEOHKMHEMP_OFFSET UNITYSDK_OFFSET(0xEBF7B00)
#define DIGPBKHHDEJ_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0xEBED7D0)
#define DIGPBKHHDEJ_BHAHFKFNGOE_OFFSET UNITYSDK_OFFSET(0xEBF7250)
#define DIGPBKHHDEJ_BKIDEOGLLIM_OFFSET UNITYSDK_OFFSET(0xEBF72D0)
#define DIGPBKHHDEJ_BMCPNCOMPIN_OFFSET UNITYSDK_OFFSET(0xEBF90E0)
#define DIGPBKHHDEJ_BOLFKCDMPAI_OFFSET UNITYSDK_OFFSET(0xEBF91D0)
#define DIGPBKHHDEJ_BPOLDDMJGCO_OFFSET UNITYSDK_OFFSET(0xEBFA530)
#define DIGPBKHHDEJ_CFHCDOJHBID_OFFSET UNITYSDK_OFFSET(0xEBF7E80)
#define DIGPBKHHDEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEDA30)
#define DIGPBKHHDEJ_DAJODNPGOPK_OFFSET UNITYSDK_OFFSET(0xEBECD10)
#define DIGPBKHHDEJ_DCJLGCIGHAF_OFFSET UNITYSDK_OFFSET(0xEBED480)
#define DIGPBKHHDEJ_EKDDGABODCO_OFFSET UNITYSDK_OFFSET(0xEBFB480)
#define DIGPBKHHDEJ_EMOOKBKFHHH_OFFSET UNITYSDK_OFFSET(0xEBF6900)
#define DIGPBKHHDEJ_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xEBFB450)
#define DIGPBKHHDEJ_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xEBECAA0)
#define DIGPBKHHDEJ_FIPHJNPMBKB_OFFSET UNITYSDK_OFFSET(0xEBF6F90)
#define DIGPBKHHDEJ_FJCIEGNNLAN_OFFSET UNITYSDK_OFFSET(0xEBF80A0)
#define DIGPBKHHDEJ_FLNONGIDJIA_OFFSET UNITYSDK_OFFSET(0xEBF7DB0)
#define DIGPBKHHDEJ_GDKBNLEECFD_OFFSET UNITYSDK_OFFSET(0xEBFA3D0)
#define DIGPBKHHDEJ_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0xEBF7A90)
#define DIGPBKHHDEJ_GMABPIDBNJB_OFFSET UNITYSDK_OFFSET(0xEBF83F0)
#define DIGPBKHHDEJ_GOBLOCGJFHC_OFFSET UNITYSDK_OFFSET(0xEBF6AF0)
#define DIGPBKHHDEJ_GOMKBJABILP_OFFSET UNITYSDK_OFFSET(0xEBF6A10)
#define DIGPBKHHDEJ_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xEBF8310)
#define DIGPBKHHDEJ_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xEBF6D00)
#define DIGPBKHHDEJ_KFIBFFMNKAK_OFFSET UNITYSDK_OFFSET(0xEBFB470)
#define DIGPBKHHDEJ_KHHEENBGEMP_OFFSET UNITYSDK_OFFSET(0xEBFAA20)
#define DIGPBKHHDEJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEBF67E0)
#define DIGPBKHHDEJ_LDJDINLKGEO_OFFSET UNITYSDK_OFFSET(0xEBFB460)
#define DIGPBKHHDEJ_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0xEBF8C40)
#define DIGPBKHHDEJ_MCNAHCLCEAD_OFFSET UNITYSDK_OFFSET(0xEBFAD80)
#define DIGPBKHHDEJ_MHNJGEOKLFK_OFFSET UNITYSDK_OFFSET(0xEBF6AA0)
#define DIGPBKHHDEJ_MKGKHMPLFEO_OFFSET UNITYSDK_OFFSET(0xEBFB100)
#define DIGPBKHHDEJ_MNIFHILIJFB_OFFSET UNITYSDK_OFFSET(0xEBFAF50)
#define DIGPBKHHDEJ_NIOOHGFAKIL_OFFSET UNITYSDK_OFFSET(0xEBFB490)
#define DIGPBKHHDEJ_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xEBED130)
#define DIGPBKHHDEJ_OJPOHILJKGC_OFFSET UNITYSDK_OFFSET(0xEBF8D30)
#define DIGPBKHHDEJ_OMMDCKHBDIM_OFFSET UNITYSDK_OFFSET(0xEBF7780)
#define DIGPBKHHDEJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xEBF7C10)

inline static constexpr unsigned int DIGPBKHHDEJ_TypeDefinitionIndex = 76989;

	class DIGPBKHHDEJ : public ::OEAMAMLDKFC
	{
	public:
		::System::Single MLKDOFKEMHP; // 0xD8
		::System::Single DPAFCGHELCK; // 0xDC
		::System::Single FLHOEGBFPJB; // 0xE0
		::System::Single BFKAPONCKEG; // 0xE4
		::System::Single PEAEHDBNKBO; // 0xE8
		::System::Single GJIELLPJEKJ; // 0xEC
		::System::Single HPMEAHDOBCG; // 0xF0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void LFIFIEGFMOM(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_LFIFIEGFMOM_OFFSET))(this, a1, a2);
		}

		::System::Void OJPOHILJKGC(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_OJPOHILJKGC_OFFSET))(this, a1, a2);
		}

		::System::Void MHNJGEOKLFK(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_MHNJGEOKLFK_OFFSET))(this, a1);
		}

		::System::Void BMCPNCOMPIN(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_BMCPNCOMPIN_OFFSET))(this, a1);
		}

		::System::Boolean BOLFKCDMPAI(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_BOLFKCDMPAI_OFFSET))(this, a1, a2);
		}

		::System::Void GOMKBJABILP(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_GOMKBJABILP_OFFSET))(this, a1, a2);
		}

		::System::Void BKIDEOGLLIM(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_BKIDEOGLLIM_OFFSET))(this, a1);
		}

		::System::Void OMMDCKHBDIM(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_OMMDCKHBDIM_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* AGCBJAALGLM(::HGBCMFANCOE a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_AGCBJAALGLM_OFFSET))(this, a1);
		}

		::System::Boolean GDKBNLEECFD(::HGBCMFANCOE a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_GDKBNLEECFD_OFFSET))(this, a1, a2);
		}

		::System::Void GGCCNDAIMDF(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_GGCCNDAIMDF_OFFSET))(this, a1);
		}

		::System::Void BFEOHKMHEMP(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_BFEOHKMHEMP_OFFSET))(this, a1);
		}

		::System::Void BPOLDDMJGCO(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_BPOLDDMJGCO_OFFSET))(this, a1, a2);
		}

		::System::Void KHHEENBGEMP(::HGBCMFANCOE a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_KHHEENBGEMP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MCNAHCLCEAD(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_MCNAHCLCEAD_OFFSET))(this, a1, a2);
		}

		::System::Void EMOOKBKFHHH(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_EMOOKBKFHHH_OFFSET))(this, a1);
		}

		::System::Void BFPJNABOKMB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::System::Void FLNONGIDJIA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_FLNONGIDJIA_OFFSET))(this, a1, a2);
		}

		::System::Boolean DCJLGCIGHAF(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_DCJLGCIGHAF_OFFSET))(this, a1);
		}

		::System::Void DAJODNPGOPK(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_DAJODNPGOPK_OFFSET))(this, a1);
		}

		::System::Void GMABPIDBNJB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_GMABPIDBNJB_OFFSET))(this, a1);
		}

		::System::Void CFHCDOJHBID(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_CFHCDOJHBID_OFFSET))(this, a1);
		}

		::System::Void GOBLOCGJFHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_GOBLOCGJFHC_OFFSET))(this);
		}

		::System::Void FJCIEGNNLAN(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_FJCIEGNNLAN_OFFSET))(this, a1);
		}

		::System::Void MKGKHMPLFEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_MKGKHMPLFEO_OFFSET))(this);
		}

		::System::Int32 MNIFHILIJFB(::HGBCMFANCOE a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HGBCMFANCOE, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_MNIFHILIJFB_OFFSET))(this, a1, a2);
		}

		::System::Void BHAHFKFNGOE(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_BHAHFKFNGOE_OFFSET))(this, a1);
		}

		::System::Void FIPHJNPMBKB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_FIPHJNPMBKB_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Boolean LDJDINLKGEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_LDJDINLKGEO_OFFSET))(this);
		}

		::System::Boolean KFIBFFMNKAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_KFIBFFMNKAK_OFFSET))(this);
		}

		::System::Boolean EKDDGABODCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_EKDDGABODCO_OFFSET))(this);
		}

		::System::Boolean NIOOHGFAKIL(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIGPBKHHDEJ_NIOOHGFAKIL_OFFSET))(this, a1);
		}

	};
