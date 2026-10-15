#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LAJCPEFEOPN.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CFGLBPHCFGG;
class EEMDFPCIKCJ;
class IEMCCEBKBLB;
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_ArtVariantInfo; }
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_FeatureData; }
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_IdentityData; }
namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace RPG::Client { class RootMotionHandler; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define JMLEGINPCGE_ADLFGKJBEHF_OFFSET UNITYSDK_OFFSET(0xB2694F0)
#define JMLEGINPCGE_AGAEDEOALMF_OFFSET UNITYSDK_OFFSET(0xB269BF0)
#define JMLEGINPCGE_AGPHBLGBODG_OFFSET UNITYSDK_OFFSET(0xB269C60)
#define JMLEGINPCGE_AJPLALCMJLO_OFFSET UNITYSDK_OFFSET(0xB269B10)
#define JMLEGINPCGE_APMOOBIFDHB_OFFSET UNITYSDK_OFFSET(0xB269860)
#define JMLEGINPCGE_CTOR_OFFSET UNITYSDK_OFFSET(0xB269D60)
#define JMLEGINPCGE_DCPHGKEDEHE_OFFSET UNITYSDK_OFFSET(0xB269140)
#define JMLEGINPCGE_DIEGGJLIACL_OFFSET UNITYSDK_OFFSET(0xB268340)
#define JMLEGINPCGE_DNHNLLEGKLI_OFFSET UNITYSDK_OFFSET(0xB269920)
#define JMLEGINPCGE_DPPBAHPBDAE_OFFSET UNITYSDK_OFFSET(0xB269980)
#define JMLEGINPCGE_HCNCCLGKAPJ_OFFSET UNITYSDK_OFFSET(0xB2685A0)
#define JMLEGINPCGE_HNBIHMPALEK_OFFSET UNITYSDK_OFFSET(0xB268AD0)
#define JMLEGINPCGE_ICPPAAGGPLL_OFFSET UNITYSDK_OFFSET(0xB2694A0)
#define JMLEGINPCGE_IMJGAEHILOC_OFFSET UNITYSDK_OFFSET(0xB268FF0)
#define JMLEGINPCGE_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0xB269B90)
#define JMLEGINPCGE_JOLIDCMBMBJ_OFFSET UNITYSDK_OFFSET(0xB269AA0)
#define JMLEGINPCGE_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xB269650)
#define JMLEGINPCGE_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xB269700)
#define JMLEGINPCGE_KDGJPFALFAC_OFFSET UNITYSDK_OFFSET(0xB269320)
#define JMLEGINPCGE_LAMNNMIAFIM_OFFSET UNITYSDK_OFFSET(0xB2690B0)
#define JMLEGINPCGE_LDPNDDNPKEG_OFFSET UNITYSDK_OFFSET(0xB2691B0)
#define JMLEGINPCGE_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xB268680)
#define JMLEGINPCGE_LPBHFNKIGPK_OFFSET UNITYSDK_OFFSET(0xB269390)
#define JMLEGINPCGE_MMFAHLFEJOK_OFFSET UNITYSDK_OFFSET(0xB269C50)
#define JMLEGINPCGE_NGOCIDIPOEO_OFFSET UNITYSDK_OFFSET(0xB268910)
#define JMLEGINPCGE_PLIIJGFJIIF_OFFSET UNITYSDK_OFFSET(0xB269CC0)
#define JMLEGINPCGE___ONFADEOUT_B__14_0_OFFSET UNITYSDK_OFFSET(0xB269DD0)
#define JMLEGINPCGE___ONHIDE_B__12_0_OFFSET UNITYSDK_OFFSET(0xB269DC0)

inline static constexpr unsigned int JMLEGINPCGE_TypeDefinitionIndex = 69254;

	class JMLEGINPCGE : public ::LAJCPEFEOPN
	{
	public:
		::RPG::Client::RootMotionHandler* OHBPFHNHEBB; // 0xC8
		::System::String* OHCDBHEIEBO; // 0xD0
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xD8
		::RPG::Client::ArtNPCPedestrianAssetConfig_FeatureData* HMDAMLKHCDH; // 0xE0
		::EEMDFPCIKCJ* DAMEDDDLCAJ; // 0xE8
		::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* EFHMNMBGNEF; // 0xF0
		::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* PDKAIFLJCOF; // 0xF8
		::RPG::Client::ArtNPCPedestrianAssetConfig_IdentityData* JPHIADNFJPH; // 0x100
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_CTOR_OFFSET))(this);
		}

		::System::Void DIEGGJLIACL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMLEGINPCGE_DIEGGJLIACL_OFFSET))(this, a1);
		}

		::System::Void HCNCCLGKAPJ(::CFGLBPHCFGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFGLBPHCFGG*))((::PBYTE)hIl2Cpp + JMLEGINPCGE_HCNCCLGKAPJ_OFFSET))(this, a1);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void NGOCIDIPOEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_NGOCIDIPOEO_OFFSET))(this);
		}

		::System::Void HNBIHMPALEK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JMLEGINPCGE_HNBIHMPALEK_OFFSET))(this, a1);
		}

		::System::Void LAMNNMIAFIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_LAMNNMIAFIM_OFFSET))(this);
		}

		::System::Void DCPHGKEDEHE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMLEGINPCGE_DCPHGKEDEHE_OFFSET))(this, a1);
		}

		::System::Void LDPNDDNPKEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_LDPNDDNPKEG_OFFSET))(this);
		}

		::System::Void IMJGAEHILOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMLEGINPCGE_IMJGAEHILOC_OFFSET))(this, a1);
		}

		::System::Boolean KDGJPFALFAC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_KDGJPFALFAC_OFFSET))(this);
		}

		::System::Void LPBHFNKIGPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_LPBHFNKIGPK_OFFSET))(this);
		}

		::System::Void ICPPAAGGPLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_ICPPAAGGPLL_OFFSET))(this);
		}

		::System::Void ADLFGKJBEHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_ADLFGKJBEHF_OFFSET))(this);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void APMOOBIFDHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_APMOOBIFDHB_OFFSET))(this);
		}

		::System::Void DNHNLLEGKLI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMLEGINPCGE_DNHNLLEGKLI_OFFSET))(this, a1);
		}

		::System::Void DPPBAHPBDAE(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JMLEGINPCGE_DPPBAHPBDAE_OFFSET))(this, a1, a2);
		}

		::System::Void JOLIDCMBMBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMLEGINPCGE_JOLIDCMBMBJ_OFFSET))(this, a1);
		}

		::IEMCCEBKBLB* AJPLALCMJLO()
		{
			return ((::IEMCCEBKBLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_AJPLALCMJLO_OFFSET))(this);
		}

		::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_JDKCDJNJAOL_OFFSET))(this);
		}

		::System::Boolean AGAEDEOALMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_AGAEDEOALMF_OFFSET))(this);
		}

		::System::Boolean MMFAHLFEJOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_MMFAHLFEJOK_OFFSET))(this);
		}

		::System::Void AGPHBLGBODG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMLEGINPCGE_AGPHBLGBODG_OFFSET))(this, a1);
		}

		::System::Boolean PLIIJGFJIIF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE_PLIIJGFJIIF_OFFSET))(this);
		}

		::System::Void __OnHide_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE___ONHIDE_B__12_0_OFFSET))(this);
		}

		::System::Void __OnFadeOut_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEGINPCGE___ONFADEOUT_B__14_0_OFFSET))(this);
		}

	};
