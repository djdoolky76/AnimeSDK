#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELEAAKFDPL.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/HCDCPDGBIMB.h"

class ANOBCEAFALM;
class FCBNEBOPNIF;
class GCDBKACBCMI;
class GDCLGFPAMDH;
class KJPPANPJBOJ;
class POFOFGILKAA;
namespace MoleMole { class UIBaseController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define PNEKPIPPHFK_AONCNMPGFEH_OFFSET UNITYSDK_OFFSET(0x1C2C54F0)
#define PNEKPIPPHFK_BKMEHMBLFKK_OFFSET UNITYSDK_OFFSET(0x1C2C55C0)
#define PNEKPIPPHFK_BMNDCLLKICN_OFFSET UNITYSDK_OFFSET(0x1C2C33F0)
#define PNEKPIPPHFK_CCEJOPLAEPI_OFFSET UNITYSDK_OFFSET(0x1C2C2120)
#define PNEKPIPPHFK_CCLJEALMALJ_OFFSET UNITYSDK_OFFSET(0x1C2C0D90)
#define PNEKPIPPHFK_CDAIEEMOOMN_OFFSET UNITYSDK_OFFSET(0x1C2C3560)
#define PNEKPIPPHFK_CFKLHCKBOLI_OFFSET UNITYSDK_OFFSET(0x1C2C08C0)
#define PNEKPIPPHFK_CHJFIAOPDKK_OFFSET UNITYSDK_OFFSET(0x1C2C3350)
#define PNEKPIPPHFK_CMMHFOPKIAH_OFFSET UNITYSDK_OFFSET(0x1C2C31A0)
#define PNEKPIPPHFK_CPCBPOJOLFN_OFFSET UNITYSDK_OFFSET(0x1C2C12C0)
#define PNEKPIPPHFK_DFILIFBBMLN_OFFSET UNITYSDK_OFFSET(0x1C2C0330)
#define PNEKPIPPHFK_EBPFAFKCNKI_OFFSET UNITYSDK_OFFSET(0x1C2C2770)
#define PNEKPIPPHFK_FANJOGNJBOK_OFFSET UNITYSDK_OFFSET(0x1C2C1B60)
#define PNEKPIPPHFK_FBOLDBCMMOI_OFFSET UNITYSDK_OFFSET(0x1C2C2180)
#define PNEKPIPPHFK_FDLJBJGJKMO_OFFSET UNITYSDK_OFFSET(0x1C2C34B0)
#define PNEKPIPPHFK_FGNKOPFDKNN_OFFSET UNITYSDK_OFFSET(0x1C2C0CD0)
#define PNEKPIPPHFK_FHCLFMMAJCC_OFFSET UNITYSDK_OFFSET(0x1C2C1250)
#define PNEKPIPPHFK_FKGPGGNMDFI_OFFSET UNITYSDK_OFFSET(0x1C2C08A0)
#define PNEKPIPPHFK_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0x1C2C2BF0)
#define PNEKPIPPHFK_FOLOCLNNPFM_OFFSET UNITYSDK_OFFSET(0x1C2C03A0)
#define PNEKPIPPHFK_GBKALHIMHBP_OFFSET UNITYSDK_OFFSET(0x1C2C1D30)
#define PNEKPIPPHFK_GPEBDHEKGCI_OFFSET UNITYSDK_OFFSET(0x1C2C10F0)
#define PNEKPIPPHFK_HCPGALIGDFH_OFFSET UNITYSDK_OFFSET(0x1C2C0320)
#define PNEKPIPPHFK_HGDPCJHICEA_OFFSET UNITYSDK_OFFSET(0x1C2C06F0)
#define PNEKPIPPHFK_HHPFJINOFHI_OFFSET UNITYSDK_OFFSET(0x1C2C1010)
#define PNEKPIPPHFK_IDJFMLLMAKF_OFFSET UNITYSDK_OFFSET(0x1C2C11B0)
#define PNEKPIPPHFK_IGMNDOMOMPP_OFFSET UNITYSDK_OFFSET(0x1C2C5410)
#define PNEKPIPPHFK_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0x1C2C31B0)
#define PNEKPIPPHFK_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0x1C2C1800)
#define PNEKPIPPHFK_JNEAEBPNIIH_OFFSET UNITYSDK_OFFSET(0x1C2C35F0)
#define PNEKPIPPHFK_JPJLHGHIOMA_OFFSET UNITYSDK_OFFSET(0x1C2C0C30)
#define PNEKPIPPHFK_JPMNBOHLDPP_OFFSET UNITYSDK_OFFSET(0x1C2C5500)
#define PNEKPIPPHFK_KFKCDCAJEFJ_OFFSET UNITYSDK_OFFSET(0x1C2C3540)
#define PNEKPIPPHFK_KLDDPGKOCEM_OFFSET UNITYSDK_OFFSET(0x1C2C2470)
#define PNEKPIPPHFK_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0x1C2C34A0)
#define PNEKPIPPHFK_LDKLHJJIINL_OFFSET UNITYSDK_OFFSET(0x1C2C31C0)
#define PNEKPIPPHFK_LEOKODLANAJ_OFFSET UNITYSDK_OFFSET(0x1C2C08B0)
#define PNEKPIPPHFK_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x1C2C1140)
#define PNEKPIPPHFK_LLPJEODJJIE_OFFSET UNITYSDK_OFFSET(0x1C2C1150)
#define PNEKPIPPHFK_MGIHMJOBCMB_OFFSET UNITYSDK_OFFSET(0x1C2C3340)
#define PNEKPIPPHFK_MIIPMGKBPFP_OFFSET UNITYSDK_OFFSET(0x1C2C3270)
#define PNEKPIPPHFK_MKEIGFMHLHF_OFFSET UNITYSDK_OFFSET(0x1C2C5430)
#define PNEKPIPPHFK_NHJPLGDBPNB_OFFSET UNITYSDK_OFFSET(0x1C2C1470)
#define PNEKPIPPHFK_NJBFHOJBJMH_OFFSET UNITYSDK_OFFSET(0x1C2C2A40)
#define PNEKPIPPHFK_NPHBLJDPFHH_OFFSET UNITYSDK_OFFSET(0x1C2C0340)
#define PNEKPIPPHFK_NPMCIMJNNHA_OFFSET UNITYSDK_OFFSET(0x1C2C3100)
#define PNEKPIPPHFK_OGDJMFAFDOO_OFFSET UNITYSDK_OFFSET(0x1C2C1EC0)
#define PNEKPIPPHFK_OGLFBGFNADB_OFFSET UNITYSDK_OFFSET(0x1C2C3550)
#define PNEKPIPPHFK_OIGJOHALEJA_OFFSET UNITYSDK_OFFSET(0x1C2C5420)
#define PNEKPIPPHFK_OMPDOHONEMB_OFFSET UNITYSDK_OFFSET(0x1C2C55F0)
#define PNEKPIPPHFK_OPCDJBJBPBD_OFFSET UNITYSDK_OFFSET(0x1C2C1110)
#define PNEKPIPPHFK_PDPEPEFPPEG_OFFSET UNITYSDK_OFFSET(0x1C2C0E50)
#define PNEKPIPPHFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C30F0)

inline static constexpr unsigned int PNEKPIPPHFK_TypeDefinitionIndex = 61189;

class PNEKPIPPHFK : public ::CELEAAKFDPL
{
public:
	::System::Boolean PPBFJEFHEBL; // 0x2F8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK__CTOR_OFFSET))(this);
	}

	::System::Boolean HCPGALIGDFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_HCPGALIGDFH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* DFILIFBBMLN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_DFILIFBBMLN_OFFSET))(this);
	}

	::System::Single NPHBLJDPFHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_NPHBLJDPFHH_OFFSET))(this);
	}

	::System::Void FOLOCLNNPFM(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_FOLOCLNNPFM_OFFSET))(this, CENFDFIKBDC);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CFKLHCKBOLI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_CFKLHCKBOLI_OFFSET))(this);
	}

	::System::Boolean JPJLHGHIOMA(::MoleMole::ESystemSettingType JELHEKJMJNI, ::System::Boolean& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_JPJLHGHIOMA_OFFSET))(this, JELHEKJMJNI, IGAAKDOIPNN);
	}

	::System::Boolean FGNKOPFDKNN(::UnityEngine::Transform* JNLBPMKIFNK, ::MoleMole::UIBaseController* IPDOACOBKDK, ::MoleMole::UIBaseController*& JOLDOMEIKEF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::UIBaseController*, ::MoleMole::UIBaseController*&))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_FGNKOPFDKNN_OFFSET))(this, JNLBPMKIFNK, IPDOACOBKDK, JOLDOMEIKEF);
	}

	::MoleMole::UIBaseController* CCLJEALMALJ(::MoleMole::UIBaseController* IPDOACOBKDK, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_CCLJEALMALJ_OFFSET))(this, IPDOACOBKDK, JNLBPMKIFNK);
	}

	::System::Boolean PDPEPEFPPEG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_PDPEPEFPPEG_OFFSET))(this);
	}

	::System::String* HHPFJINOFHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_HHPFJINOFHI_OFFSET))(this);
	}

	::System::Int32 GPEBDHEKGCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_GPEBDHEKGCI_OFFSET))(this);
	}

	::System::Void LEOKODLANAJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_LEOKODLANAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OPCDJBJBPBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_OPCDJBJBPBD_OFFSET))(this);
	}

	::System::Void FKGPGGNMDFI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_FKGPGGNMDFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Int32 LLPJEODJJIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_LLPJEODJJIE_OFFSET))(this);
	}

	::System::Boolean IDJFMLLMAKF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_IDJFMLLMAKF_OFFSET))(this);
	}

	::System::Boolean CPCBPOJOLFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_CPCBPOJOLFN_OFFSET))(this);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_JLHBKJKDGDE_OFFSET))(this);
	}

	::System::Boolean GBKALHIMHBP(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType& DMGMICAMAGO)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType&))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_GBKALHIMHBP_OFFSET))(this, DMGMICAMAGO);
	}

	::System::Boolean OGDJMFAFDOO(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& KJHGEBPALMD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_OGDJMFAFDOO_OFFSET))(this, KJHGEBPALMD);
	}

	::System::Boolean FHCLFMMAJCC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_FHCLFMMAJCC_OFFSET))(this);
	}

	::System::Boolean FANJOGNJBOK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_FANJOGNJBOK_OFFSET))(this);
	}

	::System::Boolean CCEJOPLAEPI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_CCEJOPLAEPI_OFFSET))(this);
	}

	::System::Boolean KLDDPGKOCEM(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType JIPPMBKLFHE, ::System::Boolean DOFCLPCLHOJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_KLDDPGKOCEM_OFFSET))(this, JIPPMBKLFHE, DOFCLPCLHOJ);
	}

	::System::Boolean EBPFAFKCNKI(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType JIPPMBKLFHE, ::System::Boolean DOFCLPCLHOJ, ::GDCLGFPAMDH* MJLGHGFCHOM, ::KJPPANPJBOJ* GLAOEHCGCFO)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::GDCLGFPAMDH*, ::KJPPANPJBOJ*))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_EBPFAFKCNKI_OFFSET))(this, JIPPMBKLFHE, DOFCLPCLHOJ, MJLGHGFCHOM, GLAOEHCGCFO);
	}

	::System::Void NJBFHOJBJMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_NJBFHOJBJMH_OFFSET))(this);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Boolean NPMCIMJNNHA(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_NPMCIMJNNHA_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean CMMHFOPKIAH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_CMMHFOPKIAH_OFFSET))(this);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_JJCECLNIHEK_OFFSET))(this);
	}

	::System::String* LDKLHJJIINL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_LDKLHJJIINL_OFFSET))(this);
	}

	::ANOBCEAFALM* FBOLDBCMMOI()
	{
		return ((::ANOBCEAFALM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_FBOLDBCMMOI_OFFSET))(this);
	}

	::System::Void NHJPLGDBPNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_NHJPLGDBPNB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MIIPMGKBPFP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_MIIPMGKBPFP_OFFSET))(this);
	}

	::System::Boolean MGIHMJOBCMB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_MGIHMJOBCMB_OFFSET))(this);
	}

	::System::Boolean CHJFIAOPDKK(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType&))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_CHJFIAOPDKK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean BMNDCLLKICN(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA, ::GDCLGFPAMDH* FDHMCIFPNCK, ::KJPPANPJBOJ* MPBJAGIKPJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::GDCLGFPAMDH*, ::KJPPANPJBOJ*))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_BMNDCLLKICN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FDLJBJGJKMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_FDLJBJGJKMO_OFFSET))(this);
	}

	::System::Boolean KFKCDCAJEFJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_KFKCDCAJEFJ_OFFSET))(this);
	}

	::System::Boolean OGLFBGFNADB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_OGLFBGFNADB_OFFSET))(this);
	}

	::System::Boolean CDAIEEMOOMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_CDAIEEMOOMN_OFFSET))(this);
	}

	::System::Void JNEAEBPNIIH(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_JNEAEBPNIIH_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void IGMNDOMOMPP(::FCBNEBOPNIF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_IGMNDOMOMPP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 OIGJOHALEJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_OIGJOHALEJA_OFFSET))(this);
	}

	::GCDBKACBCMI* HGDPCJHICEA()
	{
		return ((::GCDBKACBCMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_HGDPCJHICEA_OFFSET))(this);
	}

	::System::Boolean MKEIGFMHLHF(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_MKEIGFMHLHF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean AONCNMPGFEH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_AONCNMPGFEH_OFFSET))(this);
	}

	::System::Boolean JPMNBOHLDPP(::MoleMole::ESystemSettingType MIALFKCCCPI, ::System::Boolean& KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_JPMNBOHLDPP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void BKMEHMBLFKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_BKMEHMBLFKK_OFFSET))(this);
	}

	::MoleMole::UIBaseController* OMPDOHONEMB(::MoleMole::UIBaseController* MIALFKCCCPI, ::UnityEngine::Transform* KMGKAIDEIBA)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PNEKPIPPHFK_OMPDOHONEMB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
