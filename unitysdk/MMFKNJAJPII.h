#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MNAGAGOHIGH.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class GCIMMDDIFBJ;
class IOOIHHOJOPI;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class ZipLineSubSystem; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;

#define MMFKNJAJPII_AJAJJNFCCKF_OFFSET UNITYSDK_OFFSET(0x16CA2130)
#define MMFKNJAJPII_BAFPGEBLJMF_OFFSET UNITYSDK_OFFSET(0x16CA4620)
#define MMFKNJAJPII_BBEOKBAGAHO_OFFSET UNITYSDK_OFFSET(0x16CA1D20)
#define MMFKNJAJPII_BDEJFOJFGEL_OFFSET UNITYSDK_OFFSET(0x16CA51E0)
#define MMFKNJAJPII_BEGMNCEOIEA_OFFSET UNITYSDK_OFFSET(0x16CA19B0)
#define MMFKNJAJPII_BFEANJHGBPG_OFFSET UNITYSDK_OFFSET(0x16CA1E00)
#define MMFKNJAJPII_BJOPPAFHDHA_OFFSET UNITYSDK_OFFSET(0x16CA3910)
#define MMFKNJAJPII_CAGFIAKGDPC_OFFSET UNITYSDK_OFFSET(0x16CA2820)
#define MMFKNJAJPII_CCCBGECIAOC_OFFSET UNITYSDK_OFFSET(0x16CA2670)
#define MMFKNJAJPII_CCFENAKHHKJ_OFFSET UNITYSDK_OFFSET(0x16CA2090)
#define MMFKNJAJPII_CDCJANGDPCG_OFFSET UNITYSDK_OFFSET(0x16CA2D40)
#define MMFKNJAJPII_CDDNHKPJIKI_OFFSET UNITYSDK_OFFSET(0x16CA2830)
#define MMFKNJAJPII_CDFMGKPJPJH_OFFSET UNITYSDK_OFFSET(0x16CA5400)
#define MMFKNJAJPII_CMDPAAEOCHE_OFFSET UNITYSDK_OFFSET(0x16CA2D70)
#define MMFKNJAJPII_DHPDEPGJGFE_OFFSET UNITYSDK_OFFSET(0x16CA3310)
#define MMFKNJAJPII_DODKNBCFOKO_OFFSET UNITYSDK_OFFSET(0x16CA13A0)
#define MMFKNJAJPII_EGJFFAKJHBB_OFFSET UNITYSDK_OFFSET(0x16CA1130)
#define MMFKNJAJPII_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x16C9F2C0)
#define MMFKNJAJPII_ENMIAFJPMIO_OFFSET UNITYSDK_OFFSET(0x16CA1120)
#define MMFKNJAJPII_EPLCOEHHLHL_OFFSET UNITYSDK_OFFSET(0x16CA52E0)
#define MMFKNJAJPII_EPPKHMIBMDA_OFFSET UNITYSDK_OFFSET(0x16CA4470)
#define MMFKNJAJPII_FEGCOBNNMCC_OFFSET UNITYSDK_OFFSET(0x16CA1AE0)
#define MMFKNJAJPII_FKEJOMNAEAL_OFFSET UNITYSDK_OFFSET(0x16CA1390)
#define MMFKNJAJPII_FMFBPEFLKOK_OFFSET UNITYSDK_OFFSET(0x16CA41F0)
#define MMFKNJAJPII_FNLKCDHHPAB_OFFSET UNITYSDK_OFFSET(0x16CA2D50)
#define MMFKNJAJPII_GFBJLHMNBAD_OFFSET UNITYSDK_OFFSET(0x16CA1AF0)
#define MMFKNJAJPII_GJNONBNAPLK_OFFSET UNITYSDK_OFFSET(0x16CA1FB0)
#define MMFKNJAJPII_GLAEPKFGNFK_OFFSET UNITYSDK_OFFSET(0x16CA4B40)
#define MMFKNJAJPII_HECHIOIEJFJ_OFFSET UNITYSDK_OFFSET(0x16CA4200)
#define MMFKNJAJPII_HIIOGEPIGLA_OFFSET UNITYSDK_OFFSET(0x16CA3E30)
#define MMFKNJAJPII_HKGCCNOCOCI_OFFSET UNITYSDK_OFFSET(0x16CA1FA0)
#define MMFKNJAJPII_HMEMPIOMMDB_OFFSET UNITYSDK_OFFSET(0x16CA3590)
#define MMFKNJAJPII_HNBMPGKIPGC_OFFSET UNITYSDK_OFFSET(0x16CA2D60)
#define MMFKNJAJPII_ICNNPIAAKKM_OFFSET UNITYSDK_OFFSET(0x16CA5300)
#define MMFKNJAJPII_IFIKMANKGLG_OFFSET UNITYSDK_OFFSET(0x16CA0B90)
#define MMFKNJAJPII_IFOHOBPIBGH_OFFSET UNITYSDK_OFFSET(0x16CA2810)
#define MMFKNJAJPII_IHNCKNHNKEA_OFFSET UNITYSDK_OFFSET(0x16CA0B80)
#define MMFKNJAJPII_IMMAOCMLAIO_OFFSET UNITYSDK_OFFSET(0x16CA4DA0)
#define MMFKNJAJPII_JBAHHIHPAEG_OFFSET UNITYSDK_OFFSET(0x16CA0FA0)
#define MMFKNJAJPII_JCOLMDKGAIK_OFFSET UNITYSDK_OFFSET(0x16CA52F0)
#define MMFKNJAJPII_JDKLOAEFKLH_OFFSET UNITYSDK_OFFSET(0x16CA0BB0)
#define MMFKNJAJPII_JHFNCNLAHPO_OFFSET UNITYSDK_OFFSET(0x16CA41C0)
#define MMFKNJAJPII_JKMDGGPGOGO_OFFSET UNITYSDK_OFFSET(0x16CA51F0)
#define MMFKNJAJPII_JLADLOJAOHJ_OFFSET UNITYSDK_OFFSET(0x16CA3820)
#define MMFKNJAJPII_JLJCCAFEOGF_OFFSET UNITYSDK_OFFSET(0x16CA41D0)
#define MMFKNJAJPII_JLMJFAIIBNA_OFFSET UNITYSDK_OFFSET(0x16CA22C0)
#define MMFKNJAJPII_KHHELLOGFPO_OFFSET UNITYSDK_OFFSET(0x16CA3730)
#define MMFKNJAJPII_KICJMMEPAAI_OFFSET UNITYSDK_OFFSET(0x16CA53F0)
#define MMFKNJAJPII_KLMCJFDHCPN_OFFSET UNITYSDK_OFFSET(0x16CA1140)
#define MMFKNJAJPII_LIDOMBGHNCJ_OFFSET UNITYSDK_OFFSET(0x16CA1B00)
#define MMFKNJAJPII_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x16CA1090)
#define MMFKNJAJPII_MHDBMGIBIFF_OFFSET UNITYSDK_OFFSET(0x16CA4B30)
#define MMFKNJAJPII_MKICKGBCDFH_OFFSET UNITYSDK_OFFSET(0x16CA4480)
#define MMFKNJAJPII_MOKINDNACHI_OFFSET UNITYSDK_OFFSET(0x16C9F4A0)
#define MMFKNJAJPII_NIHFIJDAAJJ_OFFSET UNITYSDK_OFFSET(0x16CA4710)
#define MMFKNJAJPII_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x16CA20A0)
#define MMFKNJAJPII_OFIMNCBBMEM_OFFSET UNITYSDK_OFFSET(0x16CA0BA0)
#define MMFKNJAJPII_PCCCLFFECKL_OFFSET UNITYSDK_OFFSET(0x16CA1150)
#define MMFKNJAJPII_PCNNCAEPPBF_OFFSET UNITYSDK_OFFSET(0x16CA19C0)
#define MMFKNJAJPII_PDMKILFFGMB_OFFSET UNITYSDK_OFFSET(0x16CA1610)
#define MMFKNJAJPII_PHPPMEMGPCN_OFFSET UNITYSDK_OFFSET(0x16CA41E0)
#define MMFKNJAJPII_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x16C9FA30)
#define MMFKNJAJPII_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x16CA0440)
#define MMFKNJAJPII_PLHOMDFCCDG_OFFSET UNITYSDK_OFFSET(0x16CA4630)
#define MMFKNJAJPII__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA03F0)

inline static constexpr unsigned int MMFKNJAJPII_TypeDefinitionIndex = 87055;

class MMFKNJAJPII : public ::PBJOCICFNGK
{
public:
	::JIOLFCAGOFH_1<::MoleMole::ZipLineSubSystem*>* _FGHINJCGOCG_k__BackingField; // 0x50
	::JIOLFCAGOFH_1<::System::Int32>* _HNCKGGNBHEH_k__BackingField; // 0x58
	::LJHFMILANJA_1<::System::Nullable_1<::UnityEngine::Vector3>>* _FOBKDKKJDOB_k__BackingField; // 0x60
	::LJHFMILANJA_1<::System::Boolean>* _CIJKIIEIHFJ_k__BackingField; // 0x68
	::JIOLFCAGOFH_1<::System::Boolean>* _BHLHIPJNMLG_k__BackingField; // 0x70
	::MoleMole::EntityHandle DCPJCHEDFEC; // 0x78
	::LJHFMILANJA_1<::UnityEngine::Quaternion>* _OAHDHJNMFOG_k__BackingField; // 0x88
	::JIOLFCAGOFH_1<::System::Single>* _AHLPDFGFCAP_k__BackingField; // 0x90
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x98
	::JIOLFCAGOFH_1<::System::Boolean>* _PEFEIKJLGOM_k__BackingField; // 0xA0
	::UnityEngine::Camera* LIINIMMHOPM; // 0xA8
	::JIOLFCAGOFH_1<::UnityEngine::Vector3>* _AAIEIFHMONL_k__BackingField; // 0xB0
	::LJHFMILANJA_1<::System::Object*>* _PFPLMEPGMGD_k__BackingField; // 0xB8
	::UnityEngine::RectTransform* NCCHIKLBBIF; // 0xC0
	::LJHFMILANJA_1<::System::Object*>* _NFMCJBAAGIF_k__BackingField; // 0xC8
	::JIOLFCAGOFH_1<::UnityEngine::Quaternion>* _IEFOJIEEGBL_k__BackingField; // 0xD0
	::JIOLFCAGOFH_1<::System::Boolean>* _OHMLHOHOFHC_k__BackingField; // 0xD8
	::LJHFMILANJA_1<::System::Boolean>* _PAJFBOFHOAH_k__BackingField; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void MOKINDNACHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_MOKINDNACHI_OFFSET))(this);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void PLCJNBHECGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_PLCJNBHECGC_OFFSET))(this);
	}

	::System::Void IHNCKNHNKEA(::JIOLFCAGOFH_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_IHNCKNHNKEA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IFIKMANKGLG(::JIOLFCAGOFH_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_IFIKMANKGLG_OFFSET))(this, EGEGIMGMJHN);
	}

	::JIOLFCAGOFH_1<::UnityEngine::Quaternion>* OFIMNCBBMEM()
	{
		return ((::JIOLFCAGOFH_1<::UnityEngine::Quaternion>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_OFIMNCBBMEM_OFFSET))(this);
	}

	::UnityEngine::Vector3 JDKLOAEFKLH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_JDKLOAEFKLH_OFFSET))(this);
	}

	::System::Boolean JBAHHIHPAEG(::UnityEngine::Camera* KONLMDBCDCK, ::UnityEngine::Vector3 HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MMFKNJAJPII_JBAHHIHPAEG_OFFSET))(this, KONLMDBCDCK, HODAIDNDKHD);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_LKNBCFOKJLO_OFFSET))(this);
	}

	::System::Void ENMIAFJPMIO(::JIOLFCAGOFH_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_ENMIAFJPMIO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EGJFFAKJHBB(::JIOLFCAGOFH_1<::UnityEngine::Quaternion>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_EGJFFAKJHBB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KLMCJFDHCPN(::LJHFMILANJA_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_KLMCJFDHCPN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PCCCLFFECKL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_PCCCLFFECKL_OFFSET))(this);
	}

	::System::Void FKEJOMNAEAL(::LJHFMILANJA_1<::UnityEngine::Quaternion>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_FKEJOMNAEAL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DODKNBCFOKO(::MNAGAGOHIGH& PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MMFKNJAJPII_DODKNBCFOKO_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void BEGMNCEOIEA(::LJHFMILANJA_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_BEGMNCEOIEA_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::UIControllerContextBase* PCNNCAEPPBF()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_PCNNCAEPPBF_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::UnityEngine::Vector3>* FEGCOBNNMCC()
	{
		return ((::JIOLFCAGOFH_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_FEGCOBNNMCC_OFFSET))(this);
	}

	::LJHFMILANJA_1<::System::Object*>* GFBJLHMNBAD()
	{
		return ((::LJHFMILANJA_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_GFBJLHMNBAD_OFFSET))(this);
	}

	::System::Boolean LIDOMBGHNCJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_LIDOMBGHNCJ_OFFSET))(this);
	}

	::MoleMole::InputLogicEventType BFEANJHGBPG()
	{
		return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_BFEANJHGBPG_OFFSET))(this);
	}

	::System::Void HKGCCNOCOCI(::JIOLFCAGOFH_1<::UnityEngine::Vector3>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_HKGCCNOCOCI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GJNONBNAPLK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_GJNONBNAPLK_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::Boolean>* CCFENAKHHKJ()
	{
		return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_CCFENAKHHKJ_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_NPKBDILPMHJ_OFFSET))(this);
	}

	::System::Boolean AJAJJNFCCKF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_AJAJJNFCCKF_OFFSET))(this);
	}

	::UnityEngine::Vector3 JLMJFAIIBNA(::UnityEngine::Vector3 BAECLPHLLHO, ::UnityEngine::Vector3 ILOHHLNGEHM, ::UnityEngine::Vector2 CDKOPKNLEEI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MMFKNJAJPII_JLMJFAIIBNA_OFFSET))(this, BAECLPHLLHO, ILOHHLNGEHM, CDKOPKNLEEI);
	}

	::System::Void IFOHOBPIBGH(::LJHFMILANJA_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_IFOHOBPIBGH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PDMKILFFGMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_PDMKILFFGMB_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::Int32>* CAGFIAKGDPC()
	{
		return ((::JIOLFCAGOFH_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_CAGFIAKGDPC_OFFSET))(this);
	}

	::System::Single CDDNHKPJIKI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_CDDNHKPJIKI_OFFSET))(this);
	}

	::LJHFMILANJA_1<::System::Nullable_1<::UnityEngine::Vector3>>* CDCJANGDPCG()
	{
		return ((::LJHFMILANJA_1<::System::Nullable_1<::UnityEngine::Vector3>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_CDCJANGDPCG_OFFSET))(this);
	}

	::System::Void FNLKCDHHPAB(::LJHFMILANJA_1<::System::Nullable_1<::UnityEngine::Vector3>>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Nullable_1<::UnityEngine::Vector3>>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_FNLKCDHHPAB_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJHFMILANJA_1<::UnityEngine::Quaternion>* HNBMPGKIPGC()
	{
		return ((::LJHFMILANJA_1<::UnityEngine::Quaternion>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_HNBMPGKIPGC_OFFSET))(this);
	}

	::UnityEngine::Vector2 CMDPAAEOCHE()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_CMDPAAEOCHE_OFFSET))(this);
	}

	::MoleMole::InputLogicEventType HMEMPIOMMDB()
	{
		return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_HMEMPIOMMDB_OFFSET))(this);
	}

	::System::Boolean KHHELLOGFPO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_KHHELLOGFPO_OFFSET))(this);
	}

	::System::Boolean JLADLOJAOHJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_JLADLOJAOHJ_OFFSET))(this);
	}

	::System::String* BJOPPAFHDHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_BJOPPAFHDHA_OFFSET))(this);
	}

	::System::Boolean HIIOGEPIGLA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_HIIOGEPIGLA_OFFSET))(this);
	}

	::LJHFMILANJA_1<::System::Boolean>* JHFNCNLAHPO()
	{
		return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_JHFNCNLAHPO_OFFSET))(this);
	}

	::LJHFMILANJA_1<::System::Object*>* JLJCCAFEOGF()
	{
		return ((::LJHFMILANJA_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_JLJCCAFEOGF_OFFSET))(this);
	}

	::System::Void PHPPMEMGPCN(::JIOLFCAGOFH_1<::MoleMole::ZipLineSubSystem*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::MoleMole::ZipLineSubSystem*>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_PHPPMEMGPCN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FMFBPEFLKOK(::JIOLFCAGOFH_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_FMFBPEFLKOK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HECHIOIEJFJ(::MNAGAGOHIGH& PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MMFKNJAJPII_HECHIOIEJFJ_OFFSET))(this, PIIPCLCCOIG);
	}

	::JIOLFCAGOFH_1<::System::Boolean>* EPPKHMIBMDA()
	{
		return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_EPPKHMIBMDA_OFFSET))(this);
	}

	::System::Boolean MKICKGBCDFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_MKICKGBCDFH_OFFSET))(this);
	}

	::System::Void BAFPGEBLJMF(::JIOLFCAGOFH_1<::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Single>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_BAFPGEBLJMF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single PLHOMDFCCDG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_PLHOMDFCCDG_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::String*, ::System::Object*> NIHFIJDAAJJ()
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_NIHFIJDAAJJ_OFFSET))(this);
	}

	::System::Boolean DHPDEPGJGFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_DHPDEPGJGFE_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::Single>* MHDBMGIBIFF()
	{
		return ((::JIOLFCAGOFH_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_MHDBMGIBIFF_OFFSET))(this);
	}

	::System::Void GLAEPKFGNFK(::MNAGAGOHIGH& PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MMFKNJAJPII_GLAEPKFGNFK_OFFSET))(this, PIIPCLCCOIG);
	}

	::UnityEngine::Vector3 IMMAOCMLAIO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_IMMAOCMLAIO_OFFSET))(this);
	}

	::LJHFMILANJA_1<::System::Boolean>* BDEJFOJFGEL()
	{
		return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_BDEJFOJFGEL_OFFSET))(this);
	}

	::System::Boolean JKMDGGPGOGO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_JKMDGGPGOGO_OFFSET))(this);
	}

	::UnityEngine::Camera* CCCBGECIAOC()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_CCCBGECIAOC_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::Boolean>* EPLCOEHHLHL()
	{
		return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_EPLCOEHHLHL_OFFSET))(this);
	}

	::UnityEngine::Camera* BBEOKBAGAHO()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_BBEOKBAGAHO_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::MoleMole::ZipLineSubSystem*>* JCOLMDKGAIK()
	{
		return ((::JIOLFCAGOFH_1<::MoleMole::ZipLineSubSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_JCOLMDKGAIK_OFFSET))(this);
	}

	::System::Void ICNNPIAAKKM(::MNAGAGOHIGH& PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MMFKNJAJPII_ICNNPIAAKKM_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void KICJMMEPAAI(::LJHFMILANJA_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MMFKNJAJPII_KICJMMEPAAI_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Quaternion CDFMGKPJPJH()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII_CDFMGKPJPJH_OFFSET))(this);
	}
};
