#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/LFBBIECPOLF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AGJFDPBLDDF;
class CGJPDOIKGKC;
class ENGKPGFGGLM;
class FJGDLDIGJAE;
class GEIHCPAOKKK;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class OOHOOAFNBNF;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define AEJEOGFJNJG_ABFIBHHBPMA_OFFSET UNITYSDK_OFFSET(0x16FD9990)
#define AEJEOGFJNJG_ACJMLPLLAKJ_OFFSET UNITYSDK_OFFSET(0x16FE1180)
#define AEJEOGFJNJG_AHLIKBLNPHG_OFFSET UNITYSDK_OFFSET(0x16FDB0B0)
#define AEJEOGFJNJG_BBJHAJJPFKG_OFFSET UNITYSDK_OFFSET(0x16FE10F0)
#define AEJEOGFJNJG_BBOFJKKLFLL_OFFSET UNITYSDK_OFFSET(0x16FDD840)
#define AEJEOGFJNJG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16FD95C0)
#define AEJEOGFJNJG_BFFGDDOFGNB_OFFSET UNITYSDK_OFFSET(0x16FDD440)
#define AEJEOGFJNJG_BJBMHDBFPEK_OFFSET UNITYSDK_OFFSET(0x16FDB9F0)
#define AEJEOGFJNJG_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x16FE1060)
#define AEJEOGFJNJG_CHFLCNOGKCK_OFFSET UNITYSDK_OFFSET(0x16FDBB60)
#define AEJEOGFJNJG_CPGNDDLJCEB_OFFSET UNITYSDK_OFFSET(0x16FDFBC0)
#define AEJEOGFJNJG_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x16FDBEF0)
#define AEJEOGFJNJG_EBCJPEKFALJ_OFFSET UNITYSDK_OFFSET(0x16FDA6A0)
#define AEJEOGFJNJG_EFFIBJJPKPO_OFFSET UNITYSDK_OFFSET(0x16FDA8B0)
#define AEJEOGFJNJG_EJGLAFHCJMH_OFFSET UNITYSDK_OFFSET(0x16FDBE20)
#define AEJEOGFJNJG_ELPCPKENLLE_OFFSET UNITYSDK_OFFSET(0x16FDE680)
#define AEJEOGFJNJG_FCBKGNCLDKL_OFFSET UNITYSDK_OFFSET(0x16FE0540)
#define AEJEOGFJNJG_FFKHDOBKMDB_OFFSET UNITYSDK_OFFSET(0x16FDD3B0)
#define AEJEOGFJNJG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16FE0660)
#define AEJEOGFJNJG_FKEMHMJBACA_OFFSET UNITYSDK_OFFSET(0x16FDE390)
#define AEJEOGFJNJG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16FDD090)
#define AEJEOGFJNJG_GGCIJBDIDFE_OFFSET UNITYSDK_OFFSET(0x16FDF730)
#define AEJEOGFJNJG_GHDCBFHLKGC_OFFSET UNITYSDK_OFFSET(0x16FDC260)
#define AEJEOGFJNJG_GKPFCGFIPGB_OFFSET UNITYSDK_OFFSET(0x16FE05D0)
#define AEJEOGFJNJG_HKGMCFGEEHO_OFFSET UNITYSDK_OFFSET(0x16FD9A00)
#define AEJEOGFJNJG_HPKLHIJKHJO_OFFSET UNITYSDK_OFFSET(0x16FDD4D0)
#define AEJEOGFJNJG_IGHKPDBDAKM_OFFSET UNITYSDK_OFFSET(0x16FDF360)
#define AEJEOGFJNJG_JBKCDOGOOHG_OFFSET UNITYSDK_OFFSET(0x16FDBDC0)
#define AEJEOGFJNJG_KDBGGFABOFF_OFFSET UNITYSDK_OFFSET(0x16FE0240)
#define AEJEOGFJNJG_KOCNGOLPCNB_OFFSET UNITYSDK_OFFSET(0x16FE0BA0)
#define AEJEOGFJNJG_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x16FDC010)
#define AEJEOGFJNJG_KOPFPIHOIKC_OFFSET UNITYSDK_OFFSET(0x16FDF0C0)
#define AEJEOGFJNJG_LBCBMNCKDPG_OFFSET UNITYSDK_OFFSET(0x16FE0FD0)
#define AEJEOGFJNJG_LBODGKNICHM_OFFSET UNITYSDK_OFFSET(0x16FDBA40)
#define AEJEOGFJNJG_LHCDDAHIOHJ_OFFSET UNITYSDK_OFFSET(0x16FE06F0)
#define AEJEOGFJNJG_LHLBNDFAMNE_OFFSET UNITYSDK_OFFSET(0x16FE0F30)
#define AEJEOGFJNJG_LJPJBPCIEAF_OFFSET UNITYSDK_OFFSET(0x16FDF470)
#define AEJEOGFJNJG_LNLKJIKGEEM_OFFSET UNITYSDK_OFFSET(0x16FDC830)
#define AEJEOGFJNJG_MMGMBDMNCLF_OFFSET UNITYSDK_OFFSET(0x16FD96E0)
#define AEJEOGFJNJG_NIFGNIBDEMD_OFFSET UNITYSDK_OFFSET(0x16FE11F0)
#define AEJEOGFJNJG_NOBBHJAJJEG_1_OFFSET UNITYSDK_OFFSET(0x16FDE230)
#define AEJEOGFJNJG_NOBBHJAJJEG_OFFSET UNITYSDK_OFFSET(0x16FDC900)
#define AEJEOGFJNJG_ONTRIGGERENTER_1_OFFSET UNITYSDK_OFFSET(0x16FDC5E0)
#define AEJEOGFJNJG_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x16FDC580)
#define AEJEOGFJNJG_ONTRIGGEREXIT_1_OFFSET UNITYSDK_OFFSET(0x16FDCBD0)
#define AEJEOGFJNJG_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x16FDCA80)
#define AEJEOGFJNJG_PELONNCAEJM_OFFSET UNITYSDK_OFFSET(0x16FDBD50)
#define AEJEOGFJNJG_PIGLKLPHEBM_OFFSET UNITYSDK_OFFSET(0x16FDD530)
#define AEJEOGFJNJG_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x16FDD430)
#define AEJEOGFJNJG_PPMDPPLLNMD_OFFSET UNITYSDK_OFFSET(0x16FDCDF0)
#define AEJEOGFJNJG__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FDD210)
#define AEJEOGFJNJG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FDD120)

inline static constexpr unsigned int AEJEOGFJNJG_TypeDefinitionIndex = 88780;

class AEJEOGFJNJG : public ::ABLPDAPPABA
{
public:
	static ::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>** StaticGet_LAMJNNMLFAB()
	{
		return (::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(AEJEOGFJNJG_TypeDefinitionIndex)->GetStaticField(0x42CA0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>*>* AMGHAIAMKEN; // 0x50
	::MoleMole::Battle::ColliderEventDispatcher* JLAOHJPKDPA; // 0x58
	::MoleMole::Battle::Entity* EAAOFPPFFFH; // 0x60
	::CGJPDOIKGKC* PNBEHFLPMEC; // 0x68
	::AGJFDPBLDDF* CGLBABFPANL; // 0x70
	::KFHNCJALFJK* AHDPHGHDHIF; // 0x78
	::MoleMole::MonoConfigurableCollider* MCCIEPIDCJE; // 0x80
	::System::String* LHNENMJJCLD; // 0x88
	::UnityEngine::Collider* BBHCLEOAJBG; // 0x90
	::System::Collections::Generic::HashSet_1<::System::UInt32>* BCKHJANNOFH; // 0x98
	::System::Collections::Generic::HashSet_1<::System::UInt32>* NLJKPINONJC; // 0xA0
	::System::Boolean AJKNEHLMKOI; // 0xA8
	::System::Boolean EKBGPAIDPLP; // 0xA9
	::System::Byte _padding0[0x2];
	::System::Int32 AAELDMNIBJG; // 0xAC
	::System::Int32 JEPHNMFFGON; // 0xB0
	::LFGBJHCEJID PAECGFCODCE; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEJEOGFJNJG__CCTOR_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::OOHOOAFNBNF* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_BBOMJDBNHIC_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, DFMKILICPFB);
	}

	::System::Void MMGMBDMNCLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_MMGMBDMNCLF_OFFSET))(this);
	}

	::System::Void EFFIBJJPKPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_EFFIBJJPKPO_OFFSET))(this);
	}

	::System::Void BJBMHDBFPEK(::FJGDLDIGJAE* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::FJGDLDIGJAE*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_BJBMHDBFPEK_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void LBODGKNICHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_LBODGKNICHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void EJGLAFHCJMH(::LFBBIECPOLF& FIHAFNMKPIH)
	{
		return ((::System::Void(*)(::PVOID, ::LFBBIECPOLF&))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_EJGLAFHCJMH_OFFSET))(this, FIHAFNMKPIH);
	}

	::System::Boolean DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Boolean KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP, ::System::Object* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP, HNOPAJLDCFB);
	}

	::System::Void OnTriggerEnter_1(::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_ONTRIGGERENTER_1_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP, ::System::Object* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP, HNOPAJLDCFB);
	}

	::System::Void OnTriggerExit_1(::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_ONTRIGGEREXIT_1_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::String* FFKHDOBKMDB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_FFKHDOBKMDB_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::OOHOOAFNBNF* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void EBCJPEKFALJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_EBCJPEKFALJ_OFFSET))(this);
	}

	::System::Void CHFLCNOGKCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_CHFLCNOGKCK_OFFSET))(this);
	}

	::System::Void BFFGDDOFGNB(::FJGDLDIGJAE* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FJGDLDIGJAE*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_BFFGDDOFGNB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HPKLHIJKHJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_HPKLHIJKHJO_OFFSET))(this);
	}

	::System::Void PIGLKLPHEBM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_PIGLKLPHEBM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void FKEMHMJBACA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_FKEMHMJBACA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean ELPCPKENLLE(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* JHEMDPICIGA)
	{
		return ((::System::Boolean(*)(::PVOID, ::GEIHCPAOKKK*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_ELPCPKENLLE_OFFSET))(this, OHPJHPEOFLD, JHEMDPICIGA);
	}

	::System::Void PPMDPPLLNMD(::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* PEMLFDFHCKH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_PPMDPPLLNMD_OFFSET))(this, PEMLFDFHCKH);
	}

	::System::Void KOPFPIHOIKC(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_KOPFPIHOIKC_OFFSET))(this, DJHFOGHIFEJ, EHHHMFKHNAI);
	}

	::System::Void AHLIKBLNPHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_AHLIKBLNPHG_OFFSET))(this);
	}

	::System::Void GGCIJBDIDFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_GGCIJBDIDFE_OFFSET))(this);
	}

	::System::Void CPGNDDLJCEB(::System::Boolean JPDIHAKOHOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_CPGNDDLJCEB_OFFSET))(this, JPDIHAKOHOA);
	}

	::System::Void KDBGGFABOFF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_KDBGGFABOFF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void FCBKGNCLDKL(::LFBBIECPOLF& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LFBBIECPOLF&))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_FCBKGNCLDKL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean GKPFCGFIPGB(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_GKPFCGFIPGB_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Battle::Entity* LJPJBPCIEAF(::System::String* IDOPOGOMOBE, ::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Transform* LNKKFDPDKBI)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_LJPJBPCIEAF_OFFSET))(this, IDOPOGOMOBE, CKPGOKHECCH, CFJFMMGPGKE, LNKKFDPDKBI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void GHDCBFHLKGC(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::System::Boolean OGOLFMEMNNI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_GHDCBFHLKGC_OFFSET))(this, DJHFOGHIFEJ, OGOLFMEMNNI);
	}

	::System::Void PELONNCAEJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_PELONNCAEJM_OFFSET))(this);
	}

	::System::Void NOBBHJAJJEG(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_NOBBHJAJJEG_OFFSET))(this, DJHFOGHIFEJ, EHHHMFKHNAI);
	}

	::System::Boolean LNLKJIKGEEM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_LNLKJIKGEEM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void JBKCDOGOOHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_JBKCDOGOOHG_OFFSET))(this);
	}

	::System::Void KOCNGOLPCNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_KOCNGOLPCNB_OFFSET))(this);
	}

	::System::Void HKGMCFGEEHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_HKGMCFGEEHO_OFFSET))(this);
	}

	::System::Void LHLBNDFAMNE(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_LHLBNDFAMNE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LBCBMNCKDPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_LBCBMNCKDPG_OFFSET))(this);
	}

	::System::Boolean BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LHCDDAHIOHJ(::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_LHCDDAHIOHJ_OFFSET))(this, DJHFOGHIFEJ);
	}

	::System::Void BBJHAJJPFKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_BBJHAJJPFKG_OFFSET))(this);
	}

	::System::Void ACJMLPLLAKJ(::System::Boolean FBILHHBPEHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_ACJMLPLLAKJ_OFFSET))(this, FBILHHBPEHD, KECKGDFIALJ);
	}

	::System::Void ABFIBHHBPMA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_ABFIBHHBPMA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NOBBHJAJJEG_1(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* HBGGCCKJJDA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_NOBBHJAJJEG_1_OFFSET))(this, DJHFOGHIFEJ, HBGGCCKJJDA);
	}

	::System::Boolean NIFGNIBDEMD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_NIFGNIBDEMD_OFFSET))(this);
	}

	::System::Boolean IGHKPDBDAKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_IGHKPDBDAKM_OFFSET))(this);
	}

	::System::Boolean BBOFJKKLFLL(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* JHEMDPICIGA)
	{
		return ((::System::Boolean(*)(::PVOID, ::GEIHCPAOKKK*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + AEJEOGFJNJG_BBOFJKKLFLL_OFFSET))(this, OHPJHPEOFLD, JHEMDPICIGA);
	}
};
