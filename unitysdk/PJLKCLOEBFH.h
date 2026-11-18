#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEGAIBENLJF.h"
#include "unitysdk/PJLKCLOEBFH_FLOLBLLMFKC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/ACMFDKHCPAB.h"
#include "unitysdk/BIIDNMMMEAF.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/LJJGNCGBFNE.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class FMENAINBNCL;
class HIGJALPGBNF;
class ICEEDDGLBNO;
class PJLKCLOEBFH_PEBADEAKKGD;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class ZipLineSubSystem; }
namespace MoleMole::Config { class ConfigZipLine_ConfigEnterCollisionCheck; }
namespace MoleMole::Config { class ConfigZipLine_ConfigPreEnterPointSelection; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define PJLKCLOEBFH_AHAOPPKFKLE_OFFSET UNITYSDK_OFFSET(0x1198D6C0)
#define PJLKCLOEBFH_AJMFKKABBBJ_OFFSET UNITYSDK_OFFSET(0x1198BF40)
#define PJLKCLOEBFH_AKLMKEDANCH_OFFSET UNITYSDK_OFFSET(0x11985D00)
#define PJLKCLOEBFH_AOBHFEBPONL_OFFSET UNITYSDK_OFFSET(0x1198C340)
#define PJLKCLOEBFH_APCPANOKLFL_OFFSET UNITYSDK_OFFSET(0x1198AE50)
#define PJLKCLOEBFH_BANAMGMDLAJ_OFFSET UNITYSDK_OFFSET(0x1198C480)
#define PJLKCLOEBFH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1198D500)
#define PJLKCLOEBFH_BCJCAMCPBPM_OFFSET UNITYSDK_OFFSET(0x11986330)
#define PJLKCLOEBFH_BMPLCLAOEGE_OFFSET UNITYSDK_OFFSET(0x1198C4A0)
#define PJLKCLOEBFH_CJONCFBOIOI_OFFSET UNITYSDK_OFFSET(0x1198BA50)
#define PJLKCLOEBFH_CNBCCMAEBNL_OFFSET UNITYSDK_OFFSET(0x1198A3F0)
#define PJLKCLOEBFH_CPOIOKKCPDJ_OFFSET UNITYSDK_OFFSET(0x1198D000)
#define PJLKCLOEBFH_DGFMIPNFMEC_OFFSET UNITYSDK_OFFSET(0x11987870)
#define PJLKCLOEBFH_DIDGKDECNAH_OFFSET UNITYSDK_OFFSET(0x1198BA60)
#define PJLKCLOEBFH_DKKMAPJGMEA_OFFSET UNITYSDK_OFFSET(0x11986480)
#define PJLKCLOEBFH_EAPAKADFAIN_OFFSET UNITYSDK_OFFSET(0x119865A0)
#define PJLKCLOEBFH_EDODOFJIJJC_OFFSET UNITYSDK_OFFSET(0x1198BA40)
#define PJLKCLOEBFH_EFCHMGECANH_OFFSET UNITYSDK_OFFSET(0x11987920)
#define PJLKCLOEBFH_EMEJFNOIOJJ_OFFSET UNITYSDK_OFFSET(0x1198D6D0)
#define PJLKCLOEBFH_FMOLBOOENPM_OFFSET UNITYSDK_OFFSET(0x11988900)
#define PJLKCLOEBFH_FOEDPLPMCAM_OFFSET UNITYSDK_OFFSET(0x1198BA70)
#define PJLKCLOEBFH_GCKDPBHDJNC_OFFSET UNITYSDK_OFFSET(0x11988360)
#define PJLKCLOEBFH_GDDMBFBIMNB_OFFSET UNITYSDK_OFFSET(0x119860E0)
#define PJLKCLOEBFH_GEHGNDBFNCE_OFFSET UNITYSDK_OFFSET(0x1198AF00)
#define PJLKCLOEBFH_GJADLNLAECH_OFFSET UNITYSDK_OFFSET(0x1198D6F0)
#define PJLKCLOEBFH_GNHBMLPGNDJ_OFFSET UNITYSDK_OFFSET(0x1198BBB0)
#define PJLKCLOEBFH_GOEAIJCIHBG_OFFSET UNITYSDK_OFFSET(0x11986120)
#define PJLKCLOEBFH_HICIBPAGKFN_OFFSET UNITYSDK_OFFSET(0x11988370)
#define PJLKCLOEBFH_IFLGOEEBAIC_OFFSET UNITYSDK_OFFSET(0x11987500)
#define PJLKCLOEBFH_IGEGCHJKCMD_OFFSET UNITYSDK_OFFSET(0x11988910)
#define PJLKCLOEBFH_IPPCEJAONMF_OFFSET UNITYSDK_OFFSET(0x11986110)
#define PJLKCLOEBFH_JEADALOKGDL_OFFSET UNITYSDK_OFFSET(0x1198C9C0)
#define PJLKCLOEBFH_JGPFAMKGNGG_OFFSET UNITYSDK_OFFSET(0x1198BA30)
#define PJLKCLOEBFH_JILCAMHCCDE_OFFSET UNITYSDK_OFFSET(0x11987CA0)
#define PJLKCLOEBFH_KAOMEAKODBE_OFFSET UNITYSDK_OFFSET(0x119884B0)
#define PJLKCLOEBFH_KCEBOHOKMFP_OFFSET UNITYSDK_OFFSET(0x11985D80)
#define PJLKCLOEBFH_KCFCMNKPFHP_OFFSET UNITYSDK_OFFSET(0x11988DE0)
#define PJLKCLOEBFH_KJLGGJAKCLL_OFFSET UNITYSDK_OFFSET(0x1198B620)
#define PJLKCLOEBFH_LGCPCDGCFLD_OFFSET UNITYSDK_OFFSET(0x1198EBC0)
#define PJLKCLOEBFH_MGJJNEMGEGL_OFFSET UNITYSDK_OFFSET(0x1198AF10)
#define PJLKCLOEBFH_MGLJKEPPPKO_OFFSET UNITYSDK_OFFSET(0x1198A560)
#define PJLKCLOEBFH_MHPHOEOEEFC_OFFSET UNITYSDK_OFFSET(0x1198C090)
#define PJLKCLOEBFH_MIBCKFAFEBH_OFFSET UNITYSDK_OFFSET(0x1198CA10)
#define PJLKCLOEBFH_NJKEJIHGKOD_OFFSET UNITYSDK_OFFSET(0x1198C0A0)
#define PJLKCLOEBFH_NNHEPOGGJGG_OFFSET UNITYSDK_OFFSET(0x119890A0)
#define PJLKCLOEBFH_OCMLIOBEPPF_OFFSET UNITYSDK_OFFSET(0x11989EB0)
#define PJLKCLOEBFH_PGBBBEFJGFO_OFFSET UNITYSDK_OFFSET(0x11988810)
#define PJLKCLOEBFH_PMDOOGIFCNA_OFFSET UNITYSDK_OFFSET(0x1198D180)
#define PJLKCLOEBFH__CCTOR_OFFSET UNITYSDK_OFFSET(0x11985B00)
#define PJLKCLOEBFH__CTOR_OFFSET UNITYSDK_OFFSET(0x11985990)

inline static constexpr unsigned int PJLKCLOEBFH_TypeDefinitionIndex = 57284;

class PJLKCLOEBFH : public ::System::Object
{
public:
	static ::Unity::Profiling::ProfilerMarker* StaticGet_NAFBPJEODAP()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF4B0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_FKFLBOIOIJA()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF4B8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_HBGLOPMIAHH()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF4C0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_LKAKHEOLPAF()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF4C8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_NNDMCFDFACO()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF4D0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_PKCOBMKBFBO()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF4D8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_PKBAOJMILNM()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF4E0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_MCCKAFANGBB()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF4E8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_IJDFGFDNCOD()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF4F0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_IDIPEJCGAML()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF4F8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_FLBNKIKFODM()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF500);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_MPFININFGFB()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF508);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_LCJPEABOBCE()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF510);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_FFMFFLDAODJ()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF518);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_DAIGGOBNFDJ()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF520);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_FJODAGPDBMD()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF528);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_JILCCMCLLGH()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF530);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_EEJCNDNLDEE()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF538);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_CDDLEBGJDPE()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF540);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_JEDEOIDANNK()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF548);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_NIMIKOALCND()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(PJLKCLOEBFH_TypeDefinitionIndex)->GetStaticField(0xF550);
	}
	// static const ::System::Int32 EDBOJDDNPFB = 0x1; // 0x0
	// static const ::System::Int32 HNNDGDIGGMI = 0x2; // 0x0
	// static const ::System::Int32 EIOHAHKGDNE = 0x3; // 0x0
	// static const ::System::Int32 KDLFBCAMOOB = 0x2; // 0x0
	// static const ::System::Int32 AONGKKFCPFJ = 0x8; // 0x0
	// static const ::System::Single NBEGELNHHPA; // 0x0
	// static const ::System::Single DCPMJDPDDDJ; // 0x0
	// static const ::System::Single CLGNFKNNFNB; // 0x0
	// static const ::System::Int32 GPBKLAAJGOD = 0x5; // 0x0
	// static const ::System::Single OLBECCNPOON; // 0x0
	::MoleMole::ZipLineSubSystem* _DKNELDAGPCO_k__BackingField; // 0x10
	::HIGJALPGBNF* GMOHOMNJBMI; // 0x18
	::Il2CppArray<::UnityEngine::RaycastHit>* GIKKFCDEMBL; // 0x20
	::HEGAIBENLJF IGBGOIENOLG; // 0x28
	::ICEEDDGLBNO* FAMCCCIONKK; // 0x38
	::PJLKCLOEBFH_PEBADEAKKGD* IIBFCLKCFGB; // 0x40
	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* LLJJBFMLJFG; // 0x48
	::FluffyUnderware::Curvy::CurvySpline* LMMHMLIFDHB; // 0x50
	::System::Int32 DKBAKLAFIAB; // 0x58
	::UnityEngine::Quaternion FHNLGPFAABD; // 0x5C
	::UnityEngine::Vector3 LPGJPPOLGEK; // 0x6C
	::System::Single PGPPONKEANA; // 0x78
	::System::Int32 JMNHIKJHLFI; // 0x7C
	::System::Single PCLGKKGLNGJ; // 0x80
	::System::Int32 FIMIGNHFFOJ; // 0x84
	::System::Single _BEBPALIFJHB_k__BackingField; // 0x88
	::System::Int32 _JCBHJDCECCH_k__BackingField; // 0x8C
	::System::Boolean _KFLHDNOFGII_k__BackingField; // 0x90
	::System::Boolean PEAFLPHAOBD; // 0x91
	::System::Boolean _KCEKHFBIAEK_k__BackingField; // 0x92

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLKCLOEBFH__CCTOR_OFFSET))();
	}

	::System::Void AKLMKEDANCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_AKLMKEDANCH_OFFSET))(this);
	}

	static ::System::Nullable_1<::ACMFDKHCPAB> KCEBOHOKMFP(::System::Single DDDONMCDKMG, ::System::Nullable_1<::ACMFDKHCPAB> JBELLEJJOLM, ::System::Nullable_1<::ACMFDKHCPAB> FAHOINCMMCB, ::System::Nullable_1<::ACMFDKHCPAB> DFKBICAINLJ)
	{
		return ((::System::Nullable_1<::ACMFDKHCPAB>(*)(::System::Single, ::System::Nullable_1<::ACMFDKHCPAB>, ::System::Nullable_1<::ACMFDKHCPAB>, ::System::Nullable_1<::ACMFDKHCPAB>))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_KCEBOHOKMFP_OFFSET))(DDDONMCDKMG, JBELLEJJOLM, FAHOINCMMCB, DFKBICAINLJ);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* IPPCEJAONMF()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_IPPCEJAONMF_OFFSET))(this);
	}

	::UnityEngine::Vector3 GOEAIJCIHBG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_GOEAIJCIHBG_OFFSET))(this);
	}

	::System::Void DKKMAPJGMEA(::FMENAINBNCL* GBDJKMBDGIF, ::PJLKCLOEBFH_FLOLBLLMFKC GEJCKFFFKCL, ::Unity::Profiling::ProfilerMarker MPANLEMNKCK)
	{
		return ((::System::Void(*)(::PVOID, ::FMENAINBNCL*, ::PJLKCLOEBFH_FLOLBLLMFKC, ::Unity::Profiling::ProfilerMarker))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_DKKMAPJGMEA_OFFSET))(this, GBDJKMBDGIF, GEJCKFFFKCL, MPANLEMNKCK);
	}

	::HEGAIBENLJF DGFMIPNFMEC(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI)
	{
		return ((::HEGAIBENLJF(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_DGFMIPNFMEC_OFFSET))(this, PJLEHOLOIGI);
	}

	static ::UnityEngine::Vector3 EFCHMGECANH(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_EFCHMGECANH_OFFSET))(KECKGDFIALJ);
	}

	::System::Void JILCAMHCCDE(::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* ANICLEAEHOP, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_JILCAMHCCDE_OFFSET))(this, ANICLEAEHOP, IGAAKDOIPNN);
	}

	::System::Void GCKDPBHDJNC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_GCKDPBHDJNC_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Quaternion HICIBPAGKFN()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_HICIBPAGKFN_OFFSET))(this);
	}

	::UnityEngine::Camera* PGBBBEFJGFO()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_PGBBBEFJGFO_OFFSET))(this);
	}

	::System::Boolean FMOLBOOENPM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_FMOLBOOENPM_OFFSET))(this);
	}

	::System::Void IGEGCHJKCMD(::FMENAINBNCL* GBDJKMBDGIF, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::FMENAINBNCL*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_IGEGCHJKCMD_OFFSET))(this, GBDJKMBDGIF, DJLOKMMLFJC);
	}

	::UnityEngine::Vector3 BCJCAMCPBPM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_BCJCAMCPBPM_OFFSET))(this);
	}

	::System::Nullable_1<::LJJGNCGBFNE> NNHEPOGGJGG(::System::Nullable_1<::LJJGNCGBFNE> KBKLMCBPFJC, ::System::Nullable_1<::LJJGNCGBFNE> BNNFMEJFBEA, ::System::Nullable_1<::LJJGNCGBFNE> FMOAKAHNJGM, ::System::Nullable_1<::LJJGNCGBFNE> GDKBGECMFON, ::System::Nullable_1<::LJJGNCGBFNE> EIHIKEOGKCF, ::System::Nullable_1<::LJJGNCGBFNE> MIFDBIOFLNJ, ::System::Nullable_1<::LJJGNCGBFNE> AAKPKFOAEBK)
	{
		return ((::System::Nullable_1<::LJJGNCGBFNE>(*)(::PVOID, ::System::Nullable_1<::LJJGNCGBFNE>, ::System::Nullable_1<::LJJGNCGBFNE>, ::System::Nullable_1<::LJJGNCGBFNE>, ::System::Nullable_1<::LJJGNCGBFNE>, ::System::Nullable_1<::LJJGNCGBFNE>, ::System::Nullable_1<::LJJGNCGBFNE>, ::System::Nullable_1<::LJJGNCGBFNE>))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_NNHEPOGGJGG_OFFSET))(this, KBKLMCBPFJC, BNNFMEJFBEA, FMOAKAHNJGM, GDKBGECMFON, EIHIKEOGKCF, MIFDBIOFLNJ, AAKPKFOAEBK);
	}

	::System::Void CNBCCMAEBNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_CNBCCMAEBNL_OFFSET))(this);
	}

	::System::Void GEHGNDBFNCE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_GEHGNDBFNCE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean MGJJNEMGEGL(::UnityEngine::Vector3 KIAIIPAMCBC, ::System::Nullable_1<::LJJGNCGBFNE> HJNBDBFOHHK, ::MoleMole::Config::ConfigZipLine_ConfigEnterCollisionCheck* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::LJJGNCGBFNE>, ::MoleMole::Config::ConfigZipLine_ConfigEnterCollisionCheck*))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_MGJJNEMGEGL_OFFSET))(this, KIAIIPAMCBC, HJNBDBFOHHK, DFMKILICPFB);
	}

	::System::Void KJLGGJAKCLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_KJLGGJAKCLL_OFFSET))(this);
	}

	::MoleMole::ZipLineSubSystem* JGPFAMKGNGG()
	{
		return ((::MoleMole::ZipLineSubSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_JGPFAMKGNGG_OFFSET))(this);
	}

	::System::Void EDODOFJIJJC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_EDODOFJIJJC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CJONCFBOIOI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_CJONCFBOIOI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IFLGOEEBAIC(::FMENAINBNCL* GBDJKMBDGIF)
	{
		return ((::System::Void(*)(::PVOID, ::FMENAINBNCL*))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_IFLGOEEBAIC_OFFSET))(this, GBDJKMBDGIF);
	}

	::System::Int32 DIDGKDECNAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_DIDGKDECNAH_OFFSET))(this);
	}

	::System::Void FOEDPLPMCAM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_FOEDPLPMCAM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Single GNHBMLPGNDJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_GNHBMLPGNDJ_OFFSET))(this);
	}

	::System::Boolean MHPHOEOEEFC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_MHPHOEOEEFC_OFFSET))(this);
	}

	::System::Void NJKEJIHGKOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_NJKEJIHGKOD_OFFSET))(this);
	}

	::UnityEngine::Vector3 AJMFKKABBBJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_AJMFKKABBBJ_OFFSET))(this);
	}

	::System::Single AOBHFEBPONL(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Vector3 MAGJBFMNFCI, ::UnityEngine::Vector3 CCFBLAICMPO)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_AOBHFEBPONL_OFFSET))(this, OPMPKFEHOBM, MAGJBFMNFCI, CCFBLAICMPO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::BIIDNMMMEAF>* BANAMGMDLAJ()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::BIIDNMMMEAF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_BANAMGMDLAJ_OFFSET))(this);
	}

	static ::System::Boolean GDDMBFBIMNB(::System::Single EMKGPNDOMHF, ::System::Nullable_1<::System::Single> GMHFKOELHPL, ::System::Single DIFAIJKOIPG)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Nullable_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_GDDMBFBIMNB_OFFSET))(EMKGPNDOMHF, GMHFKOELHPL, DIFAIJKOIPG);
	}

	static ::UnityEngine::Quaternion KAOMEAKODBE(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::UnityEngine::Quaternion(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_KAOMEAKODBE_OFFSET))(KECKGDFIALJ);
	}

	::System::Void MGLJKEPPPKO(::FMENAINBNCL* GBDJKMBDGIF)
	{
		return ((::System::Void(*)(::PVOID, ::FMENAINBNCL*))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_MGLJKEPPPKO_OFFSET))(this, GBDJKMBDGIF);
	}

	::System::Void JEADALOKGDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_JEADALOKGDL_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Nullable_1<::ACMFDKHCPAB>, ::System::Nullable_1<::ACMFDKHCPAB>> MIBCKFAFEBH(::System::Single GBBKMOIGDFP, ::System::Nullable_1<::ACMFDKHCPAB> KBKLMCBPFJC, ::System::Nullable_1<::ACMFDKHCPAB> FMOAKAHNJGM, ::System::Nullable_1<::ACMFDKHCPAB> IPKHEIFAIPP, ::System::Nullable_1<::ACMFDKHCPAB> GDKBGECMFON)
	{
		return ((::System::ValueTuple_2<::System::Nullable_1<::ACMFDKHCPAB>, ::System::Nullable_1<::ACMFDKHCPAB>>(*)(::PVOID, ::System::Single, ::System::Nullable_1<::ACMFDKHCPAB>, ::System::Nullable_1<::ACMFDKHCPAB>, ::System::Nullable_1<::ACMFDKHCPAB>, ::System::Nullable_1<::ACMFDKHCPAB>))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_MIBCKFAFEBH_OFFSET))(this, GBBKMOIGDFP, KBKLMCBPFJC, FMOAKAHNJGM, IPKHEIFAIPP, GDKBGECMFON);
	}

	static ::System::Nullable_1<::LJJGNCGBFNE> OCMLIOBEPPF(::LJJGNCGBFNE FHFHODNGCPB, ::System::Nullable_1<::LJJGNCGBFNE> JBELLEJJOLM, ::System::Nullable_1<::LJJGNCGBFNE> FAHOINCMMCB, ::System::Nullable_1<::LJJGNCGBFNE> DFKBICAINLJ, ::System::Nullable_1<::LJJGNCGBFNE> OKINBKLABCF, ::System::Nullable_1<::LJJGNCGBFNE> OAPJCPDKOOI)
	{
		return ((::System::Nullable_1<::LJJGNCGBFNE>(*)(::LJJGNCGBFNE, ::System::Nullable_1<::LJJGNCGBFNE>, ::System::Nullable_1<::LJJGNCGBFNE>, ::System::Nullable_1<::LJJGNCGBFNE>, ::System::Nullable_1<::LJJGNCGBFNE>, ::System::Nullable_1<::LJJGNCGBFNE>))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_OCMLIOBEPPF_OFFSET))(FHFHODNGCPB, JBELLEJJOLM, FAHOINCMMCB, DFKBICAINLJ, OKINBKLABCF, OAPJCPDKOOI);
	}

	::System::Void CPOIOKKCPDJ(::System::Single OJKMNCBCCGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_CPOIOKKCPDJ_OFFSET))(this, OJKMNCBCCGF);
	}

	::System::Void EAPAKADFAIN(::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* CABMAELHHIO, ::FMENAINBNCL* GBDJKMBDGIF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*, ::FMENAINBNCL*))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_EAPAKADFAIN_OFFSET))(this, CABMAELHHIO, GBDJKMBDGIF);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::ZipLineSubSystem* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_BBOMJDBNHIC_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void BMPLCLAOEGE(::System::Single PMNLNNGEIFM, ::System::Boolean LPDIPHEOJLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_BMPLCLAOEGE_OFFSET))(this, PMNLNNGEIFM, LPDIPHEOJLH);
	}

	::System::Void AHAOPPKFKLE(::MoleMole::ZipLineSubSystem* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_AHAOPPKFKLE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::IReadOnlyList_1<::BIIDNMMMEAF>* EMEJFNOIOJJ()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::BIIDNMMMEAF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_EMEJFNOIOJJ_OFFSET))(this);
	}

	::System::Void KCFCMNKPFHP(::Foundation::Unreal::FGameplayTag MDIDPKOOFFF, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* ANICLEAEHOP, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_KCFCMNKPFHP_OFFSET))(this, MDIDPKOOFFF, ANICLEAEHOP, IGAAKDOIPNN);
	}

	::System::Void APCPANOKLFL(::System::Single PMNLNNGEIFM, ::System::Boolean NPPMJEIPMFC, ::System::Nullable_1<::System::Single> BOOFFGLPJLE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_APCPANOKLFL_OFFSET))(this, PMNLNNGEIFM, NPPMJEIPMFC, BOOFFGLPJLE);
	}

	::System::Single LGCPCDGCFLD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_LGCPCDGCFLD_OFFSET))(this);
	}

	::System::Void GJADLNLAECH(::System::Nullable_1<::System::Single> BOOFFGLPJLE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_GJADLNLAECH_OFFSET))(this, BOOFFGLPJLE);
	}

	::LJJGNCGBFNE PMDOOGIFCNA(::LJJGNCGBFNE PAICAJCMNDI, ::System::Single FAIKLGCEFIM, ::System::Single NJANIEEHJNB)
	{
		return ((::LJJGNCGBFNE(*)(::PVOID, ::LJJGNCGBFNE, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PJLKCLOEBFH_PMDOOGIFCNA_OFFSET))(this, PAICAJCMNDI, FAIKLGCEFIM, NJANIEEHJNB);
	}
};
