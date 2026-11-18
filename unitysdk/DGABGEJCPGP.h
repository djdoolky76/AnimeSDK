#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNOPJGNOPJO.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/Share/EAvatarShowWeaponType.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IFIIGHKIENA_HFKJALIOEDD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BFLPANDDGHG;
class CFHFMMDBINE;
class CJFEJKKGJDG;
class IFAMBENCHMD;
class ODAGEGFJONC;
class OMPCHGNPNGC;
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class MonoEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGABGEJCPGP_AGLKIDGNAHB_OFFSET UNITYSDK_OFFSET(0x18338760)
#define DGABGEJCPGP_AJBEPHMKFOE_OFFSET UNITYSDK_OFFSET(0x18337C60)
#define DGABGEJCPGP_BLEADLKJADO_OFFSET UNITYSDK_OFFSET(0x18337550)
#define DGABGEJCPGP_DKLANEDBJPN_OFFSET UNITYSDK_OFFSET(0x18337C70)
#define DGABGEJCPGP_FBLOGNAIAGK_OFFSET UNITYSDK_OFFSET(0x18338FC0)
#define DGABGEJCPGP_GFIKKLGICKH_OFFSET UNITYSDK_OFFSET(0x18336F60)
#define DGABGEJCPGP_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x18338FD0)
#define DGABGEJCPGP_HGNPLJCMHMA_OFFSET UNITYSDK_OFFSET(0x18337C50)
#define DGABGEJCPGP_IFGBOPNJLFA_OFFSET UNITYSDK_OFFSET(0x18337DC0)
#define DGABGEJCPGP_JGMPOBNNNEL_OFFSET UNITYSDK_OFFSET(0x18336E30)
#define DGABGEJCPGP_LDJDLJOADAA_OFFSET UNITYSDK_OFFSET(0x18338150)
#define DGABGEJCPGP_LHMINDDFBMH_OFFSET UNITYSDK_OFFSET(0x18337790)
#define DGABGEJCPGP_LKELIENMDFP_OFFSET UNITYSDK_OFFSET(0x18338750)
#define DGABGEJCPGP_LKMDNHAPBEO_OFFSET UNITYSDK_OFFSET(0x18338610)
#define DGABGEJCPGP_LKPMAJHHLNE_OFFSET UNITYSDK_OFFSET(0x18303420)
#define DGABGEJCPGP_LLFCEFKODIO_OFFSET UNITYSDK_OFFSET(0x18337C40)
#define DGABGEJCPGP_MIBHPCEGGGJ_OFFSET UNITYSDK_OFFSET(0x183384A0)
#define DGABGEJCPGP_MOFKNCJJHEM_OFFSET UNITYSDK_OFFSET(0x183371B0)
#define DGABGEJCPGP_NMFGJJNJPLO_OFFSET UNITYSDK_OFFSET(0x18338600)
#define DGABGEJCPGP_NMPGCMNMCOL_OFFSET UNITYSDK_OFFSET(0x18336A90)
#define DGABGEJCPGP_NPEOIOKCNGB_OFFSET UNITYSDK_OFFSET(0x18338380)
#define DGABGEJCPGP_OBACBCKHNPP_OFFSET UNITYSDK_OFFSET(0x18336BC0)
#define DGABGEJCPGP_OIEDCGDJNIJ_OFFSET UNITYSDK_OFFSET(0x18336A40)
#define DGABGEJCPGP_OLPHNADDJJG_OFFSET UNITYSDK_OFFSET(0x18337360)
#define DGABGEJCPGP_PNJPGAFPHAI_OFFSET UNITYSDK_OFFSET(0x18336DE0)
#define DGABGEJCPGP__CTOR_OFFSET UNITYSDK_OFFSET(0x18336950)

inline static constexpr unsigned int DGABGEJCPGP_TypeDefinitionIndex = 70015;

class DGABGEJCPGP : public ::System::Object
{
public:
	::IFAMBENCHMD* _BPKEIINJAPJ_k__BackingField; // 0x10
	::System::Action_1<::System::UInt32>* COGHIGGMGKD; // 0x18
	::System::Action_1<::System::UInt32>* OFPDPIDAHNN; // 0x20
	::BFLPANDDGHG* _NIFJLFKMGAC_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BFLPANDDGHG*>* _AIIMCFLCHII_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::BFLPANDDGHG*>* _JDOGJLNBCIJ_k__BackingField; // 0x38
	::System::UInt32 DHLFJDCJBMM; // 0x40

	::System::Void _ctor(::IFAMBENCHMD* DNOHELNGGLJ)
	{
		return ((::System::Void(*)(::PVOID, ::IFAMBENCHMD*))((::PBYTE)hIl2Cpp + DGABGEJCPGP__CTOR_OFFSET))(this, DNOHELNGGLJ);
	}

	::System::Void OIEDCGDJNIJ(::BFLPANDDGHG* NHEPEEIPENO)
	{
		return ((::System::Void(*)(::PVOID, ::BFLPANDDGHG*))((::PBYTE)hIl2Cpp + DGABGEJCPGP_OIEDCGDJNIJ_OFFSET))(this, NHEPEEIPENO);
	}

	::System::Void NMPGCMNMCOL(::System::UInt32 POBLGIHBMOG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGABGEJCPGP_NMPGCMNMCOL_OFFSET))(this, POBLGIHBMOG);
	}

	::System::UInt32 OBACBCKHNPP(::System::UInt32 HKHHHJHCGKL, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HBOHIAPEIMH, ::MoleMole::Config::CampType OLNAFBAENGH, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EGDAPONDHCE, ::System::Int32 MOBNMDEDJIP, ::System::Int32 MAOCFFFKJCF, ::MoleMole::Config::CampType ENMLFHNKPPL)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + DGABGEJCPGP_OBACBCKHNPP_OFFSET))(this, HKHHHJHCGKL, CKPGOKHECCH, HBOHIAPEIMH, OLNAFBAENGH, OJBJBOJKFJO, EGDAPONDHCE, MOBNMDEDJIP, MAOCFFFKJCF, ENMLFHNKPPL);
	}

	::BFLPANDDGHG* GFIKKLGICKH(::System::UInt32 JKKLOCBIDKJ)
	{
		return ((::BFLPANDDGHG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGABGEJCPGP_GFIKKLGICKH_OFFSET))(this, JKKLOCBIDKJ);
	}

	::System::Boolean MOFKNCJJHEM(::BFLPANDDGHG* JIGPBPBPPDC)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFLPANDDGHG*))((::PBYTE)hIl2Cpp + DGABGEJCPGP_MOFKNCJJHEM_OFFSET))(this, JIGPBPBPPDC);
	}

	::System::UInt32 OLPHNADDJJG(::System::UInt32 HKHHHJHCGKL, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HBOHIAPEIMH, ::MoleMole::Config::CampType OLNAFBAENGH, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EGDAPONDHCE, ::System::Int32 MOBNMDEDJIP, ::MoleMole::Config::CampType ENMLFHNKPPL)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + DGABGEJCPGP_OLPHNADDJJG_OFFSET))(this, HKHHHJHCGKL, CKPGOKHECCH, HBOHIAPEIMH, OLNAFBAENGH, OJBJBOJKFJO, EGDAPONDHCE, MOBNMDEDJIP, ENMLFHNKPPL);
	}

	::System::UInt32 LHMINDDFBMH(::DNOPJGNOPJO EGDLIGBDIHA, ::System::UInt32 PKMFBJMJCOO, ::System::Int32 MOBNMDEDJIP, ::UnityEngine::Vector3 ELKCAPBODAL, ::System::Single DCEOBAPNGIK, ::MoleMole::Config::CampType OLNAFBAENGH, ::System::Collections::Generic::HashSet_1<::System::String*>* BBIHACAPAOJ, ::System::Collections::Generic::HashSet_1<::System::Int32>* JNFLBGCKEBF, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FCPKKPACJAF, ::System::Int32 OEHEJLMJDHP, ::System::Collections::Generic::List_1<::System::Int32>* JEHINDLIHNH)
	{
		return ((::System::UInt32(*)(::PVOID, ::DNOPJGNOPJO, ::System::UInt32, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DGABGEJCPGP_LHMINDDFBMH_OFFSET))(this, EGDLIGBDIHA, PKMFBJMJCOO, MOBNMDEDJIP, ELKCAPBODAL, DCEOBAPNGIK, OLNAFBAENGH, BBIHACAPAOJ, JNFLBGCKEBF, OJBJBOJKFJO, FCPKKPACJAF, OEHEJLMJDHP, JEHINDLIHNH);
	}

	::System::UInt32 PNJPGAFPHAI()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGABGEJCPGP_PNJPGAFPHAI_OFFSET))(this);
	}

	::System::Void LLFCEFKODIO(::System::Collections::Generic::List_1<::BFLPANDDGHG*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BFLPANDDGHG*>*))((::PBYTE)hIl2Cpp + DGABGEJCPGP_LLFCEFKODIO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JGMPOBNNNEL(::System::UInt32 POBLGIHBMOG, ::BFLPANDDGHG* JIGPBPBPPDC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::BFLPANDDGHG*))((::PBYTE)hIl2Cpp + DGABGEJCPGP_JGMPOBNNNEL_OFFSET))(this, POBLGIHBMOG, JIGPBPBPPDC);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BFLPANDDGHG*>* HGNPLJCMHMA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BFLPANDDGHG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGABGEJCPGP_HGNPLJCMHMA_OFFSET))(this);
	}

	::System::UInt32 BLEADLKJADO(::System::UInt32 HKHHHJHCGKL, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HBOHIAPEIMH, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EGDAPONDHCE, ::System::Int32 MOBNMDEDJIP, ::MoleMole::Config::CampType ENMLFHNKPPL)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + DGABGEJCPGP_BLEADLKJADO_OFFSET))(this, HKHHHJHCGKL, CKPGOKHECCH, HBOHIAPEIMH, OJBJBOJKFJO, EGDAPONDHCE, MOBNMDEDJIP, ENMLFHNKPPL);
	}

	::System::Void AJBEPHMKFOE(::BFLPANDDGHG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BFLPANDDGHG*))((::PBYTE)hIl2Cpp + DGABGEJCPGP_AJBEPHMKFOE_OFFSET))(this, EGEGIMGMJHN);
	}

	::CJFEJKKGJDG* DKLANEDBJPN()
	{
		return ((::CJFEJKKGJDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGABGEJCPGP_DKLANEDBJPN_OFFSET))(this);
	}

	::System::UInt32 IFGBOPNJLFA(::IFIIGHKIENA_HFKJALIOEDD DCMLMJJAKMI, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HBOHIAPEIMH, ::MoleMole::Config::CampType OLNAFBAENGH, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EGDAPONDHCE, ::MoleMole::Config::CampType ENMLFHNKPPL)
	{
		return ((::System::UInt32(*)(::PVOID, ::IFIIGHKIENA_HFKJALIOEDD, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + DGABGEJCPGP_IFGBOPNJLFA_OFFSET))(this, DCMLMJJAKMI, CKPGOKHECCH, HBOHIAPEIMH, OLNAFBAENGH, OJBJBOJKFJO, EGDAPONDHCE, ENMLFHNKPPL);
	}

	::ODAGEGFJONC* LDJDLJOADAA(::MoleMole::InLevelBuddyDataItem* PMIDNALMHOP, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single PGFOFMIGAPE, ::MoleMole::Config::CampType CGLJBLMHDED, ::System::Collections::Generic::HashSet_1<::System::Int32>* JNFLBGCKEBF, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* NHAGMBGDKID, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* BOFNJFEOJLK, ::System::Int32 BNJIAGILAGG)
	{
		return ((::ODAGEGFJONC*(*)(::PVOID, ::MoleMole::InLevelBuddyDataItem*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + DGABGEJCPGP_LDJDLJOADAA_OFFSET))(this, PMIDNALMHOP, CKPGOKHECCH, PGFOFMIGAPE, CGLJBLMHDED, JNFLBGCKEBF, NHAGMBGDKID, BOFNJFEOJLK, BNJIAGILAGG);
	}

	::System::Void NPEOIOKCNGB(::System::UInt32 IMGBAKKLEMJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGABGEJCPGP_NPEOIOKCNGB_OFFSET))(this, IMGBAKKLEMJ);
	}

	::System::UInt32 MIBHPCEGGGJ(::CFHFMMDBINE* HMMMOCJAEOA, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HBOHIAPEIMH)
	{
		return ((::System::UInt32(*)(::PVOID, ::CFHFMMDBINE*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DGABGEJCPGP_MIBHPCEGGGJ_OFFSET))(this, HMMMOCJAEOA, CKPGOKHECCH, HBOHIAPEIMH);
	}

	::System::Collections::Generic::List_1<::BFLPANDDGHG*>* NMFGJJNJPLO()
	{
		return ((::System::Collections::Generic::List_1<::BFLPANDDGHG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGABGEJCPGP_NMFGJJNJPLO_OFFSET))(this);
	}

	::BFLPANDDGHG* LKPMAJHHLNE(::System::UInt32 POBLGIHBMOG)
	{
		return ((::BFLPANDDGHG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGABGEJCPGP_LKPMAJHHLNE_OFFSET))(this, POBLGIHBMOG);
	}

	::System::UInt32 LKMDNHAPBEO(::MoleMole::MonoEntity* HMMMOCJAEOA)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::MonoEntity*))((::PBYTE)hIl2Cpp + DGABGEJCPGP_LKMDNHAPBEO_OFFSET))(this, HMMMOCJAEOA);
	}

	::BFLPANDDGHG* LKELIENMDFP()
	{
		return ((::BFLPANDDGHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGABGEJCPGP_LKELIENMDFP_OFFSET))(this);
	}

	::System::UInt32 AGLKIDGNAHB(::DNOPJGNOPJO EGDLIGBDIHA, ::System::UInt32 PKMFBJMJCOO, ::System::Int32 MOBNMDEDJIP, ::System::Int32 MPKKKJFNLIJ, ::System::Int32 JCDJABFEKME, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* OLHMDPBOGMJ, ::UnityEngine::Vector3 ELKCAPBODAL, ::System::Single DCEOBAPNGIK, ::MoleMole::Config::CampType OLNAFBAENGH, ::System::Collections::Generic::HashSet_1<::System::String*>* BBIHACAPAOJ, ::System::Collections::Generic::HashSet_1<::System::Int32>* JNFLBGCKEBF, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FCPKKPACJAF, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* BOFNJFEOJLK, ::OMPCHGNPNGC* BBOPDCIMCHI, ::Share::EAvatarShowWeaponType PFDLPIFPPLF, ::System::Int32 OEHEJLMJDHP)
	{
		return ((::System::UInt32(*)(::PVOID, ::DNOPJGNOPJO, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::OMPCHGNPNGC*, ::Share::EAvatarShowWeaponType, ::System::Int32))((::PBYTE)hIl2Cpp + DGABGEJCPGP_AGLKIDGNAHB_OFFSET))(this, EGDLIGBDIHA, PKMFBJMJCOO, MOBNMDEDJIP, MPKKKJFNLIJ, JCDJABFEKME, OLHMDPBOGMJ, ELKCAPBODAL, DCEOBAPNGIK, OLNAFBAENGH, BBIHACAPAOJ, JNFLBGCKEBF, OJBJBOJKFJO, FCPKKPACJAF, BOFNJFEOJLK, BBOPDCIMCHI, PFDLPIFPPLF, OEHEJLMJDHP);
	}

	::IFAMBENCHMD* FBLOGNAIAGK()
	{
		return ((::IFAMBENCHMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGABGEJCPGP_FBLOGNAIAGK_OFFSET))(this);
	}

	::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGABGEJCPGP_HDLGEDBNEIP_OFFSET))(this);
	}
};
