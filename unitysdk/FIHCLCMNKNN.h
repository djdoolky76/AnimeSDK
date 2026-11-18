#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELNCIBFCNP.h"
#include "unitysdk/DOILEFIOJDE.h"
#include "unitysdk/FCJCHPLPDHL.h"
#include "unitysdk/FIAJBFIOBFD.h"
#include "unitysdk/FIHCLCMNKNN_CGFKMOBMKPF.h"
#include "unitysdk/ILNHNJBGNAJ.h"
#include "unitysdk/KNPMCIAOJPL.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/MFPOMKPCBPE.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/PKCCMJBJENO.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AGJFDPBLDDF;
class JKKHEOIKLOD;
class OMMFLPNFNIL;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }

#define FIHCLCMNKNN_AEPCFFBMOJC_OFFSET UNITYSDK_OFFSET(0x140FCF70)
#define FIHCLCMNKNN_AHIDKKLLPDE_OFFSET UNITYSDK_OFFSET(0x140FCC00)
#define FIHCLCMNKNN_AMEIIPHLOPK_OFFSET UNITYSDK_OFFSET(0x140FD3D0)
#define FIHCLCMNKNN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x140FC4D0)
#define FIHCLCMNKNN_BCHKFLDBOMH_OFFSET UNITYSDK_OFFSET(0x140FCF60)
#define FIHCLCMNKNN_BHOPCDANKJN_OFFSET UNITYSDK_OFFSET(0x140FD0A0)
#define FIHCLCMNKNN_CBNCMIJOPCM_OFFSET UNITYSDK_OFFSET(0x140FCE80)
#define FIHCLCMNKNN_CGLJPLFPOOI_OFFSET UNITYSDK_OFFSET(0x140FCC70)
#define FIHCLCMNKNN_COFPJOCAFFG_OFFSET UNITYSDK_OFFSET(0x140FD200)
#define FIHCLCMNKNN_DHMJBEDFHFB_OFFSET UNITYSDK_OFFSET(0x140FD100)
#define FIHCLCMNKNN_ECHEOPKIDCD_OFFSET UNITYSDK_OFFSET(0x140FCB80)
#define FIHCLCMNKNN_FIACIHEFNIA_OFFSET UNITYSDK_OFFSET(0x140FCE00)
#define FIHCLCMNKNN_FMIOLGIEOCL_OFFSET UNITYSDK_OFFSET(0x140FCD80)
#define FIHCLCMNKNN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x140FBB40)
#define FIHCLCMNKNN_GFIKELKBJIP_OFFSET UNITYSDK_OFFSET(0x140FCAF0)
#define FIHCLCMNKNN_GIPLKNJOGPI_OFFSET UNITYSDK_OFFSET(0x140FCDF0)
#define FIHCLCMNKNN_GKPHIHJPDHD_OFFSET UNITYSDK_OFFSET(0x140FD040)
#define FIHCLCMNKNN_GNGDFMJKDIP_OFFSET UNITYSDK_OFFSET(0x140FD2A0)
#define FIHCLCMNKNN_HGEFKMOFEAL_OFFSET UNITYSDK_OFFSET(0x140FCCA0)
#define FIHCLCMNKNN_HKAFBAKGDDL_OFFSET UNITYSDK_OFFSET(0x140FCE70)
#define FIHCLCMNKNN_IFGEHNJBAKF_OFFSET UNITYSDK_OFFSET(0x140FD6D0)
#define FIHCLCMNKNN_IPFMPGCANNF_OFFSET UNITYSDK_OFFSET(0x140FCC60)
#define FIHCLCMNKNN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x140FD650)
#define FIHCLCMNKNN_JMCBKGGCKOL_OFFSET UNITYSDK_OFFSET(0x140FD110)
#define FIHCLCMNKNN_KHDMABGKDIB_OFFSET UNITYSDK_OFFSET(0x140FCEF0)
#define FIHCLCMNKNN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x140FD210)
#define FIHCLCMNKNN_MOBAGIIHBEL_OFFSET UNITYSDK_OFFSET(0x140FCFD0)
#define FIHCLCMNKNN_NHMBAMPPKNB_OFFSET UNITYSDK_OFFSET(0x140FCF50)
#define FIHCLCMNKNN_NIIJOEEOGOL_OFFSET UNITYSDK_OFFSET(0x140FCBF0)
#define FIHCLCMNKNN_NININOKJNGN_OFFSET UNITYSDK_OFFSET(0x140FCE90)
#define FIHCLCMNKNN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x140FB180)
#define FIHCLCMNKNN_PFNCHCKJLPF_OFFSET UNITYSDK_OFFSET(0x140FCD10)
#define FIHCLCMNKNN_POOFOANDAGD_OFFSET UNITYSDK_OFFSET(0x140FCDE0)
#define FIHCLCMNKNN__CCTOR_OFFSET UNITYSDK_OFFSET(0x140FBB90)
#define FIHCLCMNKNN__CTOR_OFFSET UNITYSDK_OFFSET(0x140FBC60)

inline static constexpr unsigned int FIHCLCMNKNN_TypeDefinitionIndex = 72025;

class FIHCLCMNKNN : public ::MJHDNMKGLBJ
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_LMJOMDBAEBM()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(FIHCLCMNKNN_TypeDefinitionIndex)->GetStaticField(0x495F0);
	}
	static ::Il2CppArray<::UnityEngine::BoxCollider*>** StaticGet_AHDOICFHKNH()
	{
		return (::Il2CppArray<::UnityEngine::BoxCollider*>**)Il2CppClass::FromTypeDefinitionIndex(FIHCLCMNKNN_TypeDefinitionIndex)->GetStaticField(0x495F8);
	}
	static ::System::String** StaticGet_KCDDIFJPENK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FIHCLCMNKNN_TypeDefinitionIndex)->GetStaticField(0x49600);
	}
	static ::UnityEngine::RaycastHit* StaticGet_PGPEMNPJGNP()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(FIHCLCMNKNN_TypeDefinitionIndex)->GetStaticField(0x111E0);
	}
	// static const ::System::String* KBKKMIKEIEF; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x79; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* OCFACBECIIK; // 0x48
	::AGJFDPBLDDF* IPDOOCECIPF; // 0x50
	::MoleMole::EntityHandle ECDNIMEADLG; // 0x58
	::System::String* MNEGCBGJICO; // 0x68
	::MoleMole::EntityHandle LHHLFEGIPJN; // 0x70
	::System::Collections::Generic::HashSet_1<::System::String*>* JAOLLOFNHLD; // 0x80
	::AGJFDPBLDDF* DNMBOOGOEPD; // 0x88
	::System::String* AFEGGHDPNOE; // 0x90
	::System::Collections::Generic::List_1<::OMMFLPNFNIL*>* ICBCFBLLJHK; // 0x98
	::MoleMole::EntityHandle EGFAFCAEINN; // 0xA0
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* CPMIKAKNNDI; // 0xB0
	::OMMFLPNFNIL* DIADPJHEMAE; // 0xB8
	::MoleMole::EntityHandle BAKPDFEFBEP; // 0xC0
	::AGJFDPBLDDF* MJACJJAPNCA; // 0xD0
	::MoleMole::Battle::AnimatorParamControl* FIFNEJMNCHL; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* HBHMCAHKKAE; // 0xE0
	::System::Collections::Generic::List_1<::OMMFLPNFNIL*>* KLPPEELCOIK; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EMABHMAIBNK; // 0xF0
	::System::Collections::Generic::List_1<::MFPOMKPCBPE>* KGCHDLIDPNE; // 0xF8
	::System::Collections::Generic::List_1<::System::String*>* HFEBKGBNIJG; // 0x100
	::System::Collections::Generic::List_1<::OMMFLPNFNIL*>* ICNJIOMKAGI; // 0x108
	::System::String* HFFLJCAMCOF; // 0x110
	::System::Collections::Generic::List_1<::OMMFLPNFNIL*>* BJIEJGNLGNO; // 0x118
	::System::Collections::Generic::List_1<::JKKHEOIKLOD*>* DKEKGBPEFMN; // 0x120
	::System::Action_1<::System::Object*>* DGFACHGIHPA; // 0x128
	::MoleMole::Config::ConfigPosRot* HFCAEMGADHC; // 0x130
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* NBHHCFPJPDF; // 0x138
	::System::Collections::Generic::List_1<::System::String*>* NLAEJDEAPCN; // 0x140
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* HFNLFBLMBOD; // 0x148
	::MoleMole::Config::ConfigPosRot* HHMIIHINOOI; // 0x150
	::System::Collections::Generic::HashSet_1<::System::String*>* PNEGKPNJDLL; // 0x158
	::System::Action_2<::System::Int32, ::System::Int32>* BGBECBBDJLP; // 0x160
	::AGJFDPBLDDF* LIPIIMBKLJI; // 0x168
	::AGJFDPBLDDF* HGKDJFOFGHJ; // 0x170
	::System::Collections::Generic::HashSet_1<::System::UInt32>* LDNHOFBIFMG; // 0x178
	::System::Collections::Generic::Dictionary_2<::PKCCMJBJENO, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* FBFFFCIKKII; // 0x180
	::System::Collections::Generic::List_1<::System::String*>* HINFPBBNEAC; // 0x188
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* IEEGNJAKGPD; // 0x190
	::AGJFDPBLDDF* FOOAGJAKDBF; // 0x198
	::MoleMole::Battle::AnimatorParamControl* DBFONPGCMEP; // 0x1A0
	::System::Collections::Generic::List_1<::CELNCIBFCNP>* PCMKFMOOPLN; // 0x1A8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FCJCHPLPDHL>* EJKHNHMDKDE; // 0x1B0
	::System::Collections::Generic::List_1<::FIAJBFIOBFD>* LMDANKIAFNH; // 0x1B8
	::UnityEngine::Vector3 AEDGKLKIKDB; // 0x1C0
	::System::Boolean LHABAGDGGDO; // 0x1CC
	::System::Boolean EJPGLGOFMLO; // 0x1CD
	::System::Boolean DGGLNHLHDGD; // 0x1CE
	::System::Boolean IODDAJHCHPM; // 0x1CF
	::System::Int32 LICOCKMAGCF; // 0x1D0
	::System::UInt32 EJBMHEFGPFH; // 0x1D4
	::System::Int32 FDNGJKEDBKG; // 0x1D8
	::System::Single IALBFLGOBFB; // 0x1DC
	::System::Boolean PEAOBHJKDOF; // 0x1E0
	::System::Boolean IECLFDGAJAI; // 0x1E1
	::System::Boolean CDECLBJMGCF; // 0x1E2
	::System::Boolean BJELJCAOGOB; // 0x1E3
	::System::Single AJJMPEEDOHO; // 0x1E4
	::MoleMole::Config::AidAttackType ONLHMFMOEDH; // 0x1E8
	::System::Int32 KECGELGIGDN; // 0x1EC
	::System::Single HPGNEMOAPEN; // 0x1F0
	::System::Boolean FEDGFIFKAHJ; // 0x1F4
	::System::Boolean CDHKCFKKOKP; // 0x1F5
	::System::Boolean IIEHFBIMDBH; // 0x1F6
	::System::Boolean BJPJLHKDJMO; // 0x1F7
	::System::Boolean MMKLLFPPNCC; // 0x1F8
	::System::Boolean DFDPLGOIHFJ; // 0x1F9
	::System::Boolean AMGOBIJFDOP; // 0x1FA
	::System::Boolean BKEHCONJFAP; // 0x1FB
	::DOILEFIOJDE CFDCAGMDEEF; // 0x1FC
	::System::Int32 OEDJJMDFJPE; // 0x200
	::FIHCLCMNKNN_CGFKMOBMKPF LMHGIJJNKCC; // 0x204
	::System::Single PBBMGMDJEKN; // 0x208
	::System::Int32 EAOJCIFAGJJ; // 0x20C
	::System::Int32 AEBBJDKAGAF; // 0x210
	::System::Single CPKKICICEHC; // 0x214
	::System::UInt32 BDBFDIJLBDP; // 0x218
	::System::Single OBPEGMJCJGF; // 0x21C
	::System::Int32 CBNBLGOJHCB; // 0x220
	::System::Single OAHIHPLLFEK; // 0x224
	::System::Boolean EFMLILFCJGK; // 0x228
	::System::Boolean FFLMDOFJAJD; // 0x229
	::System::Boolean HLBMKFMFHKP; // 0x22A
	::System::Boolean IBEPFMMAJEO; // 0x22B
	::System::Single PADCNLEMJAB; // 0x22C
	::ILNHNJBGNAJ LJFCFMCGMGE; // 0x230
	::System::Single HJDJENIIHBF; // 0x234
	::System::Int32 GLDEGHHBBAB; // 0x238
	::System::Single BIHKECGHONO; // 0x23C
	::LFGBJHCEJID MIPAJIKOPBE; // 0x240
	::System::Int32 NIFNHNOKDAL; // 0x25C
	::System::Single GMCDKIIIGHI; // 0x260
	::System::UInt32 IOKFMJMHDMJ; // 0x264
	::System::Single GKMOCJAAACL; // 0x268
	::System::Single ABACJLEINEG; // 0x26C
	::KNPMCIAOJPL KIAKFOGFCAK; // 0x270

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIHCLCMNKNN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_GETCLASSID_OFFSET))(this);
	}

	::FIHCLCMNKNN* BBOMJDBNHIC()
	{
		return ((::FIHCLCMNKNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void GFIKELKBJIP(::FIHCLCMNKNN_CGFKMOBMKPF EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FIHCLCMNKNN_CGFKMOBMKPF))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_GFIKELKBJIP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean ECHEOPKIDCD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_ECHEOPKIDCD_OFFSET))(this);
	}

	::System::Single NIIJOEEOGOL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_NIIJOEEOGOL_OFFSET))(this);
	}

	::MoleMole::Config::ConfigPosRot* AHIDKKLLPDE()
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_AHIDKKLLPDE_OFFSET))(this);
	}

	::System::Boolean IPFMPGCANNF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_IPFMPGCANNF_OFFSET))(this);
	}

	::System::Boolean CGLJPLFPOOI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_CGLJPLFPOOI_OFFSET))(this);
	}

	::System::Int32 HGEFKMOFEAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_HGEFKMOFEAL_OFFSET))(this);
	}

	::System::Boolean PFNCHCKJLPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_PFNCHCKJLPF_OFFSET))(this);
	}

	::System::Boolean FMIOLGIEOCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_FMIOLGIEOCL_OFFSET))(this);
	}

	::System::Void FIACIHEFNIA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_FIACIHEFNIA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HKAFBAKGDDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_HKAFBAKGDDL_OFFSET))(this);
	}

	::System::Boolean GIPLKNJOGPI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_GIPLKNJOGPI_OFFSET))(this);
	}

	::System::Boolean CBNCMIJOPCM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_CBNCMIJOPCM_OFFSET))(this);
	}

	::System::Single NININOKJNGN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_NININOKJNGN_OFFSET))(this);
	}

	::System::Single KHDMABGKDIB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_KHDMABGKDIB_OFFSET))(this);
	}

	::System::Single NHMBAMPPKNB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_NHMBAMPPKNB_OFFSET))(this);
	}

	::System::Int32 BCHKFLDBOMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_BCHKFLDBOMH_OFFSET))(this);
	}

	::System::Single AEPCFFBMOJC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_AEPCFFBMOJC_OFFSET))(this);
	}

	::System::Boolean MOBAGIIHBEL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_MOBAGIIHBEL_OFFSET))(this);
	}

	::System::Boolean POOFOANDAGD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_POOFOANDAGD_OFFSET))(this);
	}

	::System::Single GKPHIHJPDHD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_GKPHIHJPDHD_OFFSET))(this);
	}

	::System::Single BHOPCDANKJN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_BHOPCDANKJN_OFFSET))(this);
	}

	::FIHCLCMNKNN_CGFKMOBMKPF DHMJBEDFHFB()
	{
		return ((::FIHCLCMNKNN_CGFKMOBMKPF(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_DHMJBEDFHFB_OFFSET))(this);
	}

	::System::Void JMCBKGGCKOL(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_JMCBKGGCKOL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 COFPJOCAFFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_COFPJOCAFFG_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GNGDFMJKDIP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_GNGDFMJKDIP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AMEIIPHLOPK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_AMEIIPHLOPK_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::FIHCLCMNKNN* JFDOOELFAOA()
	{
		return ((::FIHCLCMNKNN*(*)())((::PBYTE)hIl2Cpp + FIHCLCMNKNN_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean IFGEHNJBAKF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHCLCMNKNN_IFGEHNJBAKF_OFFSET))(this);
	}
};
