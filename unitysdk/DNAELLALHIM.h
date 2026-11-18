#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCMKJGGIKO.h"
#include "unitysdk/DNOPJGNOPJO.h"
#include "unitysdk/ECLDJGAJPJM.h"
#include "unitysdk/JCJPPFPFIGE.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NKDKCCFJCDL.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/System/Object.h"

class AMPFOHPGFIM;
class CCMHKDLMAAN;
class CJMCICODFBN;
class DDBNHPLAKIE;
class HFOPDHLEBHJ;
namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DNAELLALHIM_ADHJAEHOCDI_1_OFFSET UNITYSDK_OFFSET(0x7FD32E0)
#define DNAELLALHIM_ADHJAEHOCDI_OFFSET UNITYSDK_OFFSET(0x7FCE570)
#define DNAELLALHIM_ADLIBGGELLK_OFFSET UNITYSDK_OFFSET(0x7FD35D0)
#define DNAELLALHIM_AEHJGDNJLEA_OFFSET UNITYSDK_OFFSET(0x7FCEF80)
#define DNAELLALHIM_BGDHLJKDANK_OFFSET UNITYSDK_OFFSET(0x7FD1460)
#define DNAELLALHIM_BHLPGPKKPNA_OFFSET UNITYSDK_OFFSET(0x7FCF400)
#define DNAELLALHIM_BNHFAAGBGNA_OFFSET UNITYSDK_OFFSET(0x7FD2DC0)
#define DNAELLALHIM_CCNKHAOGGNB_OFFSET UNITYSDK_OFFSET(0x7FD1030)
#define DNAELLALHIM_CJCOBGLDPFA_OFFSET UNITYSDK_OFFSET(0x7FCFB00)
#define DNAELLALHIM_CNNILFKCEDI_OFFSET UNITYSDK_OFFSET(0x7FCF410)
#define DNAELLALHIM_DHFMFGDLENN_OFFSET UNITYSDK_OFFSET(0x7FD0420)
#define DNAELLALHIM_DLOJNIGIIBB_OFFSET UNITYSDK_OFFSET(0x7FCD9A0)
#define DNAELLALHIM_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x7FD1520)
#define DNAELLALHIM_FCDAALIJLEH_OFFSET UNITYSDK_OFFSET(0x7FCF340)
#define DNAELLALHIM_FGHJLADOBKM_OFFSET UNITYSDK_OFFSET(0x7FD02A0)
#define DNAELLALHIM_FPEMFJDHJOE_OFFSET UNITYSDK_OFFSET(0x7FCDCF0)
#define DNAELLALHIM_GCKODMBAFCK_OFFSET UNITYSDK_OFFSET(0x7F99D60)
#define DNAELLALHIM_GHHNGCFEIBG_OFFSET UNITYSDK_OFFSET(0x7FCF0A0)
#define DNAELLALHIM_GKHLIMMBKBL_OFFSET UNITYSDK_OFFSET(0x7FA2BD0)
#define DNAELLALHIM_GPEPGCHONGN_OFFSET UNITYSDK_OFFSET(0x7FCFD40)
#define DNAELLALHIM_GPOGOCLKCLE_OFFSET UNITYSDK_OFFSET(0x7FD12D0)
#define DNAELLALHIM_HJHHKDAPMBM_OFFSET UNITYSDK_OFFSET(0x7FCF3F0)
#define DNAELLALHIM_HOOILDPHOEJ_OFFSET UNITYSDK_OFFSET(0x7FCD0E0)
#define DNAELLALHIM_HPCAIENDODF_OFFSET UNITYSDK_OFFSET(0x7FCD690)
#define DNAELLALHIM_IFELIACLKID_OFFSET UNITYSDK_OFFSET(0x7FD28A0)
#define DNAELLALHIM_JCCMACECGPP_OFFSET UNITYSDK_OFFSET(0x7FD0050)
#define DNAELLALHIM_JCNHPJAOGOD_OFFSET UNITYSDK_OFFSET(0x7FD0AE0)
#define DNAELLALHIM_JEGBKCLKGHC_1_OFFSET UNITYSDK_OFFSET(0x7FCE820)
#define DNAELLALHIM_JEGBKCLKGHC_OFFSET UNITYSDK_OFFSET(0x7FD0340)
#define DNAELLALHIM_JPMIFPOIPBJ_OFFSET UNITYSDK_OFFSET(0x7FD31D0)
#define DNAELLALHIM_KEOEGHDAMGJ_OFFSET UNITYSDK_OFFSET(0x7FCE330)
#define DNAELLALHIM_KJNKHDGAJIA_OFFSET UNITYSDK_OFFSET(0x7FCF470)
#define DNAELLALHIM_KNOEMPMAFLB_OFFSET UNITYSDK_OFFSET(0x7FCF9E0)
#define DNAELLALHIM_LMFICHMNFAB_OFFSET UNITYSDK_OFFSET(0x7FCE9B0)
#define DNAELLALHIM_LPJJNLKMDKG_OFFSET UNITYSDK_OFFSET(0x7FD27D0)
#define DNAELLALHIM_MAGAKJKMGAC_OFFSET UNITYSDK_OFFSET(0x7FD1DA0)
#define DNAELLALHIM_MHCHDCJACNN_OFFSET UNITYSDK_OFFSET(0x7FD0690)
#define DNAELLALHIM_NAONDFAFAIB_OFFSET UNITYSDK_OFFSET(0x7FD1A80)
#define DNAELLALHIM_NCHDDCBFAKA_OFFSET UNITYSDK_OFFSET(0x7FCDD00)
#define DNAELLALHIM_NHFGMFNDHLC_OFFSET UNITYSDK_OFFSET(0x7FD1CD0)
#define DNAELLALHIM_NHPHLJFIJHF_1_OFFSET UNITYSDK_OFFSET(0x7FD21A0)
#define DNAELLALHIM_NHPHLJFIJHF_OFFSET UNITYSDK_OFFSET(0x7FCF970)
#define DNAELLALHIM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7FD0AF0)
#define DNAELLALHIM_NPPOKPEAEGL_OFFSET UNITYSDK_OFFSET(0x7FCDA50)
#define DNAELLALHIM_OFHGBHBAANE_OFFSET UNITYSDK_OFFSET(0x7FD1470)
#define DNAELLALHIM_OFPPCKBKPLN_OFFSET UNITYSDK_OFFSET(0x7FCDC40)
#define DNAELLALHIM_OMEDODOHGLG_OFFSET UNITYSDK_OFFSET(0x7FCD140)
#define DNAELLALHIM_PBCBHCMPDJH_OFFSET UNITYSDK_OFFSET(0x7FCD630)
#define DNAELLALHIM_PJCGHLPKENF_OFFSET UNITYSDK_OFFSET(0x7FD1DF0)
#define DNAELLALHIM_PPFIOFNKJKO_OFFSET UNITYSDK_OFFSET(0x7FD22D0)
#define DNAELLALHIM__CTOR_OFFSET UNITYSDK_OFFSET(0x7FCCFB0)

inline static constexpr unsigned int DNAELLALHIM_TypeDefinitionIndex = 87435;

class DNAELLALHIM : public ::System::Object
{
public:
	::CCMHKDLMAAN* FCBJALPECFB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::NKDKCCFJCDL>* KNEGGMNBPJM; // 0x18
	::MoleMole::EntityHandle BFDPPMDEOFF; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* DGBDLOLBNNB; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::ECLDJGAJPJM>* _FGINNHEAPBN_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::NKDKCCFJCDL>* FMIHEJMHHIJ; // 0x40
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::ECLDJGAJPJM>* _CCNIBDPNMKD_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::DDBNHPLAKIE*>* JFHAGMFKIOH; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* MHBBPBGNNFA; // 0x58
	::JCJPPFPFIGE HHJHCMBGJBG; // 0x60
	::JCJPPFPFIGE ANIKPPNMKPH; // 0x6C
	::APCMKJGGIKO FDOGGANACAP; // 0x78
	::System::Int32 _KHAGAFIHFII_k__BackingField; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAELLALHIM__CTOR_OFFSET))(this);
	}

	::System::Single HOOILDPHOEJ(::HFOPDHLEBHJ* DEKJDEPKKLH, ::MoleMole::Config::BaseProperty OFKIIOMFAHO)
	{
		return ((::System::Single(*)(::PVOID, ::HFOPDHLEBHJ*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + DNAELLALHIM_HOOILDPHOEJ_OFFSET))(this, DEKJDEPKKLH, OFKIIOMFAHO);
	}

	::System::Single PBCBHCMPDJH(::MoleMole::Config::BaseProperty BGJOPBCCMOC, ::CJMCICODFBN* KFIDLBCLMMA)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::CJMCICODFBN*))((::PBYTE)hIl2Cpp + DNAELLALHIM_PBCBHCMPDJH_OFFSET))(this, BGJOPBCCMOC, KFIDLBCLMMA);
	}

	::System::Void HPCAIENDODF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAELLALHIM_HPCAIENDODF_OFFSET))(this);
	}

	::System::Boolean OFPPCKBKPLN(::System::String* MLAPBPHOKNM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DNAELLALHIM_OFPPCKBKPLN_OFFSET))(this, MLAPBPHOKNM);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::ECLDJGAJPJM>* FPEMFJDHJOE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::ECLDJGAJPJM>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAELLALHIM_FPEMFJDHJOE_OFFSET))(this);
	}

	::System::Double NCHDDCBFAKA(::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* FBLGONAJGHM, ::MoleMole::Config::PropertyModifyFunction EMJPCAFEJAK, ::System::Double DMIPCPAIKJL, ::System::Double HJEACOLOHJP)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + DNAELLALHIM_NCHDDCBFAKA_OFFSET))(this, ECAJMFPANNE, FBLGONAJGHM, EMJPCAFEJAK, DMIPCPAIKJL, HJEACOLOHJP);
	}

	::System::Void DLOJNIGIIBB(::MoleMole::Config::BaseProperty KJHGEBPALMD, ::MoleMole::Config::BaseProperty FAGLDFIKIOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + DNAELLALHIM_DLOJNIGIIBB_OFFSET))(this, KJHGEBPALMD, FAGLDFIKIOJ);
	}

	::System::Double LMFICHMNFAB(::ECLDJGAJPJM LFJGGMHMFGA, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* FBLGONAJGHM, ::MoleMole::Config::PropertyModifyFunction EMJPCAFEJAK, ::System::Double DMIPCPAIKJL)
	{
		return ((::System::Double(*)(::PVOID, ::ECLDJGAJPJM, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + DNAELLALHIM_LMFICHMNFAB_OFFSET))(this, LFJGGMHMFGA, ECAJMFPANNE, FBLGONAJGHM, EMJPCAFEJAK, DMIPCPAIKJL);
	}

	::System::Double GCKODMBAFCK(::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* PIONBJHNNNN)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + DNAELLALHIM_GCKODMBAFCK_OFFSET))(this, OBNIAHNMHPF, PIONBJHNNNN);
	}

	::System::Boolean GKHLIMMBKBL(::ECLDJGAJPJM& LHPFMGBDFPN, ::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* PIONBJHNNNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::ECLDJGAJPJM&, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + DNAELLALHIM_GKHLIMMBKBL_OFFSET))(this, LHPFMGBDFPN, OBNIAHNMHPF, PIONBJHNNNN);
	}

	::System::Void HJHHKDAPMBM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNAELLALHIM_HJHHKDAPMBM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BHLPGPKKPNA(::System::Collections::Generic::Dictionary_2<::System::String*, ::ECLDJGAJPJM>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ECLDJGAJPJM>*))((::PBYTE)hIl2Cpp + DNAELLALHIM_BHLPGPKKPNA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNNILFKCEDI(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + DNAELLALHIM_CNNILFKCEDI_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void KJNKHDGAJIA(::System::String* PJNOGCPNDOB, ::System::Single KOBOHEDFDOP, ::System::String* BBOMFAKIOPN, ::System::Single JPJEBPIAIPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DNAELLALHIM_KJNKHDGAJIA_OFFSET))(this, PJNOGCPNDOB, KOBOHEDFDOP, BBOMFAKIOPN, JPJEBPIAIPO);
	}

	::System::Void KNOEMPMAFLB(::MoleMole::Config::BaseProperty JJKPKHJPHBL, ::System::Double CDJFFDJJIGH, ::System::Double JNFGHKFENLH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + DNAELLALHIM_KNOEMPMAFLB_OFFSET))(this, JJKPKHJPHBL, CDJFFDJJIGH, JNFGHKFENLH);
	}

	::System::Int32 GPEPGCHONGN(::HFOPDHLEBHJ* DEKJDEPKKLH, ::MoleMole::Config::BaseProperty ECAJMFPANNE)
	{
		return ((::System::Int32(*)(::PVOID, ::HFOPDHLEBHJ*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + DNAELLALHIM_GPEPGCHONGN_OFFSET))(this, DEKJDEPKKLH, ECAJMFPANNE);
	}

	::System::Void JCCMACECGPP(::System::String* PJNOGCPNDOB, ::System::String* BBOMFAKIOPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DNAELLALHIM_JCCMACECGPP_OFFSET))(this, PJNOGCPNDOB, BBOMFAKIOPN);
	}

	::System::Boolean KEOEGHDAMGJ(::System::Double KGGJCGPMAIH, ::System::Double DMIPCPAIKJL, ::System::Double& EFBJELENNOD, ::System::Double HJEACOLOHJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double&, ::System::Double))((::PBYTE)hIl2Cpp + DNAELLALHIM_KEOEGHDAMGJ_OFFSET))(this, KGGJCGPMAIH, DMIPCPAIKJL, EFBJELENNOD, HJEACOLOHJP);
	}

	::System::Void JEGBKCLKGHC(::AMPFOHPGFIM* BLOJCONCFPP)
	{
		return ((::System::Void(*)(::PVOID, ::AMPFOHPGFIM*))((::PBYTE)hIl2Cpp + DNAELLALHIM_JEGBKCLKGHC_OFFSET))(this, BLOJCONCFPP);
	}

	::System::Void DHFMFGDLENN(::MoleMole::Config::BaseProperty NBEGLMMLNCL, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::HFOPDHLEBHJ* FMHHLHPNOFM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::HFOPDHLEBHJ*))((::PBYTE)hIl2Cpp + DNAELLALHIM_DHFMFGDLENN_OFFSET))(this, NBEGLMMLNCL, OJBJBOJKFJO, FMHHLHPNOFM);
	}

	::System::Void MHCHDCJACNN(::DDBNHPLAKIE* PFBCDDMCKLE)
	{
		return ((::System::Void(*)(::PVOID, ::DDBNHPLAKIE*))((::PBYTE)hIl2Cpp + DNAELLALHIM_MHCHDCJACNN_OFFSET))(this, PFBCDDMCKLE);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::ECLDJGAJPJM>* JCNHPJAOGOD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::ECLDJGAJPJM>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAELLALHIM_JCNHPJAOGOD_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD(::System::UInt32 PKMFBJMJCOO, ::System::Int32 MOBNMDEDJIP, ::HFOPDHLEBHJ* KDLJNJHOOOA, ::CCMHKDLMAAN* IDJOMIMIOGM, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Boolean ILIKDIPPNDJ, ::System::Int32 MAOCFFFKJCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::HFOPDHLEBHJ*, ::CCMHKDLMAAN*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + DNAELLALHIM_NPOLNFDBOOD_OFFSET))(this, PKMFBJMJCOO, MOBNMDEDJIP, KDLJNJHOOOA, IDJOMIMIOGM, OJBJBOJKFJO, ILIKDIPPNDJ, MAOCFFFKJCF);
	}

	::System::Double FCDAALIJLEH(::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* PIONBJHNNNN)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + DNAELLALHIM_FCDAALIJLEH_OFFSET))(this, OBNIAHNMHPF, PIONBJHNNNN);
	}

	::System::Void ADHJAEHOCDI(::ECLDJGAJPJM& LHPFMGBDFPN, ::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* PIONBJHNNNN)
	{
		return ((::System::Void(*)(::PVOID, ::ECLDJGAJPJM&, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + DNAELLALHIM_ADHJAEHOCDI_OFFSET))(this, LHPFMGBDFPN, OBNIAHNMHPF, PIONBJHNNNN);
	}

	::System::Boolean GPOGOCLKCLE(::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* PIONBJHNNNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + DNAELLALHIM_GPOGOCLKCLE_OFFSET))(this, OBNIAHNMHPF, PIONBJHNNNN);
	}

	::System::Int32 BGDHLJKDANK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAELLALHIM_BGDHLJKDANK_OFFSET))(this);
	}

	::System::Void OFHGBHBAANE(::System::Collections::Generic::List_1<::AMPFOHPGFIM*>* LOIGCKCIHOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AMPFOHPGFIM*>*))((::PBYTE)hIl2Cpp + DNAELLALHIM_OFHGBHBAANE_OFFSET))(this, LOIGCKCIHOD);
	}

	::ECLDJGAJPJM& NHPHLJFIJHF(::ECLDJGAJPJM& LHPFMGBDFPN, ::System::Single ACKKEDKGIKB)
	{
		return ((::ECLDJGAJPJM&(*)(::PVOID, ::ECLDJGAJPJM&, ::System::Single))((::PBYTE)hIl2Cpp + DNAELLALHIM_NHPHLJFIJHF_OFFSET))(this, LHPFMGBDFPN, ACKKEDKGIKB);
	}

	::System::Double GHHNGCFEIBG(::System::Boolean LGNCIPJFOJF, ::MoleMole::Config::BaseProperty KLDEGBHNDEI, ::System::String* MLAPBPHOKNM)
	{
		return ((::System::Double(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + DNAELLALHIM_GHHNGCFEIBG_OFFSET))(this, LGNCIPJFOJF, KLDEGBHNDEI, MLAPBPHOKNM);
	}

	::System::Void EDEFLFIKNFK(::System::UInt32 PKMFBJMJCOO, ::System::UInt32 IMGBAKKLEMJ, ::System::Int32 MOBNMDEDJIP, ::DNOPJGNOPJO EGDLIGBDIHA, ::HFOPDHLEBHJ* KDLJNJHOOOA, ::CCMHKDLMAAN* IDJOMIMIOGM, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Int32 MAOCFFFKJCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::DNOPJGNOPJO, ::HFOPDHLEBHJ*, ::CCMHKDLMAAN*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + DNAELLALHIM_EDEFLFIKNFK_OFFSET))(this, PKMFBJMJCOO, IMGBAKKLEMJ, MOBNMDEDJIP, EGDLIGBDIHA, KDLJNJHOOOA, IDJOMIMIOGM, OJBJBOJKFJO, MAOCFFFKJCF);
	}

	::System::Boolean NAONDFAFAIB(::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::Double KGGJCGPMAIH, ::System::Double DMIPCPAIKJL, ::System::Double& EFBJELENNOD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::Double, ::System::Double, ::System::Double&))((::PBYTE)hIl2Cpp + DNAELLALHIM_NAONDFAFAIB_OFFSET))(this, ECAJMFPANNE, KGGJCGPMAIH, DMIPCPAIKJL, EFBJELENNOD);
	}

	::System::Double NHFGMFNDHLC(::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* FBLGONAJGHM, ::MoleMole::Config::PropertyModifyFunction EMJPCAFEJAK, ::System::Double DMIPCPAIKJL)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + DNAELLALHIM_NHFGMFNDHLC_OFFSET))(this, ECAJMFPANNE, FBLGONAJGHM, EMJPCAFEJAK, DMIPCPAIKJL);
	}

	::System::Int32 OMEDODOHGLG(::HFOPDHLEBHJ* DEKJDEPKKLH, ::MoleMole::Config::BaseProperty ECAJMFPANNE)
	{
		return ((::System::Int32(*)(::PVOID, ::HFOPDHLEBHJ*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + DNAELLALHIM_OMEDODOHGLG_OFFSET))(this, DEKJDEPKKLH, ECAJMFPANNE);
	}

	::Share::EPropertyType MAGAKJKMGAC(::MoleMole::Config::BaseProperty ECAJMFPANNE)
	{
		return ((::Share::EPropertyType(*)(::PVOID, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + DNAELLALHIM_MAGAKJKMGAC_OFFSET))(this, ECAJMFPANNE);
	}

	::System::Void JEGBKCLKGHC_1(::MoleMole::Config::BaseProperty KJHGEBPALMD, ::System::String* MHCADNDFILD, ::NKDKCCFJCDL& LDEBJJHFLHG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::NKDKCCFJCDL&))((::PBYTE)hIl2Cpp + DNAELLALHIM_JEGBKCLKGHC_1_OFFSET))(this, KJHGEBPALMD, MHCADNDFILD, LDEBJJHFLHG);
	}

	::System::Double PJCGHLPKENF(::ECLDJGAJPJM LFJGGMHMFGA, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* FBLGONAJGHM, ::MoleMole::Config::PropertyModifyFunction EMJPCAFEJAK, ::System::Double DMIPCPAIKJL)
	{
		return ((::System::Double(*)(::PVOID, ::ECLDJGAJPJM, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + DNAELLALHIM_PJCGHLPKENF_OFFSET))(this, LFJGGMHMFGA, ECAJMFPANNE, FBLGONAJGHM, EMJPCAFEJAK, DMIPCPAIKJL);
	}

	::ECLDJGAJPJM& NHPHLJFIJHF_1(::ECLDJGAJPJM& LHPFMGBDFPN, ::System::Single EGEGIMGMJHN, ::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO)
	{
		return ((::ECLDJGAJPJM&(*)(::PVOID, ::ECLDJGAJPJM&, ::System::Single, ::MoleMole::Config::BaseProperty, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*))((::PBYTE)hIl2Cpp + DNAELLALHIM_NHPHLJFIJHF_1_OFFSET))(this, LHPFMGBDFPN, EGEGIMGMJHN, OBNIAHNMHPF, OJBJBOJKFJO);
	}

	::System::Void CCNKHAOGGNB(::HFOPDHLEBHJ* KDLJNJHOOOA, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO)
	{
		return ((::System::Void(*)(::PVOID, ::HFOPDHLEBHJ*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*))((::PBYTE)hIl2Cpp + DNAELLALHIM_CCNKHAOGGNB_OFFSET))(this, KDLJNJHOOOA, OJBJBOJKFJO);
	}

	::System::Double LPJJNLKMDKG(::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* FBLGONAJGHM, ::MoleMole::Config::PropertyModifyFunction EMJPCAFEJAK, ::System::Double DMIPCPAIKJL)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + DNAELLALHIM_LPJJNLKMDKG_OFFSET))(this, ECAJMFPANNE, FBLGONAJGHM, EMJPCAFEJAK, DMIPCPAIKJL);
	}

	::System::Double CJCOBGLDPFA(::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* FBLGONAJGHM, ::MoleMole::Config::PropertyModifyFunction EMJPCAFEJAK, ::System::Double DMIPCPAIKJL)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + DNAELLALHIM_CJCOBGLDPFA_OFFSET))(this, ECAJMFPANNE, FBLGONAJGHM, EMJPCAFEJAK, DMIPCPAIKJL);
	}

	::System::Void NPPOKPEAEGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAELLALHIM_NPPOKPEAEGL_OFFSET))(this);
	}

	::System::Boolean FGHJLADOBKM(::System::String* PIONBJHNNNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DNAELLALHIM_FGHJLADOBKM_OFFSET))(this, PIONBJHNNNN);
	}

	::System::Void PPFIOFNKJKO(::System::UInt32 HKHHHJHCGKL, ::HFOPDHLEBHJ* KDLJNJHOOOA, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::HFOPDHLEBHJ*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*))((::PBYTE)hIl2Cpp + DNAELLALHIM_PPFIOFNKJKO_OFFSET))(this, HKHHHJHCGKL, KDLJNJHOOOA, OJBJBOJKFJO);
	}

	::System::Void JPMIFPOIPBJ(::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>* ALKBABELALB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>*))((::PBYTE)hIl2Cpp + DNAELLALHIM_JPMIFPOIPBJ_OFFSET))(this, ALKBABELALB);
	}

	::System::Void ADHJAEHOCDI_1(::ECLDJGAJPJM LHPFMGBDFPN, ::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* PIONBJHNNNN)
	{
		return ((::System::Void(*)(::PVOID, ::ECLDJGAJPJM, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + DNAELLALHIM_ADHJAEHOCDI_1_OFFSET))(this, LHPFMGBDFPN, OBNIAHNMHPF, PIONBJHNNNN);
	}

	::System::Double IFELIACLKID(::ECLDJGAJPJM LFJGGMHMFGA, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* FBLGONAJGHM, ::MoleMole::Config::PropertyModifyFunction EMJPCAFEJAK, ::System::Double DMIPCPAIKJL)
	{
		return ((::System::Double(*)(::PVOID, ::ECLDJGAJPJM, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + DNAELLALHIM_IFELIACLKID_OFFSET))(this, LFJGGMHMFGA, ECAJMFPANNE, FBLGONAJGHM, EMJPCAFEJAK, DMIPCPAIKJL);
	}

	::System::Void BNHFAAGBGNA(::MoleMole::Config::BaseProperty NBEGLMMLNCL, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::HFOPDHLEBHJ* FMHHLHPNOFM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::HFOPDHLEBHJ*))((::PBYTE)hIl2Cpp + DNAELLALHIM_BNHFAAGBGNA_OFFSET))(this, NBEGLMMLNCL, OJBJBOJKFJO, FMHHLHPNOFM);
	}

	::System::Boolean AEHJGDNJLEA(::System::Double& EFBJELENNOD, ::System::Double& HNDCMEBOJMD, ::System::Double KGGJCGPMAIH, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::MoleMole::Config::PropertyModifyFunction EMJPCAFEJAK, ::System::Double DMIPCPAIKJL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Double&, ::System::Double&, ::System::Double, ::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + DNAELLALHIM_AEHJGDNJLEA_OFFSET))(this, EFBJELENNOD, HNDCMEBOJMD, KGGJCGPMAIH, ECAJMFPANNE, EMJPCAFEJAK, DMIPCPAIKJL);
	}

	::System::Void ADLIBGGELLK(::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::ECLDJGAJPJM>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::ECLDJGAJPJM>*))((::PBYTE)hIl2Cpp + DNAELLALHIM_ADLIBGGELLK_OFFSET))(this, EGEGIMGMJHN);
	}
};
