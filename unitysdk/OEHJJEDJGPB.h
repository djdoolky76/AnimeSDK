#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/DeviceType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/ScreenOrientation.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ConfigUIAdapt; }
namespace MoleMole { class DeviceAdaptData; }
namespace MoleMole { class DevicePhysicalData; }
namespace MoleMole { class DevicePhysicalPadingData; }
namespace MoleMole { class DeviceScreenAdaptProfile; }
namespace MoleMole { class GlobalPaddingData; }
namespace MoleMole { class UIAdaptData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }

#define OEHJJEDJGPB_AMOLBCHCCMH_OFFSET UNITYSDK_OFFSET(0xB31F2D0)
#define OEHJJEDJGPB_BANLLGAGPOJ_OFFSET UNITYSDK_OFFSET(0xB31D800)
#define OEHJJEDJGPB_BCBAJOJEBFF_OFFSET UNITYSDK_OFFSET(0xB31ED90)
#define OEHJJEDJGPB_BDLOHEEPMJJ_OFFSET UNITYSDK_OFFSET(0xB320480)
#define OEHJJEDJGPB_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0xB31FB00)
#define OEHJJEDJGPB_CHDJKCDIICK_OFFSET UNITYSDK_OFFSET(0xB31D7A0)
#define OEHJJEDJGPB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xB31ED00)
#define OEHJJEDJGPB_DEHLGECMMDA_OFFSET UNITYSDK_OFFSET(0xB31E930)
#define OEHJJEDJGPB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xB31EB50)
#define OEHJJEDJGPB_ELPMNNJLKKI_OFFSET UNITYSDK_OFFSET(0xB31F580)
#define OEHJJEDJGPB_FKFEILCIFAI_OFFSET UNITYSDK_OFFSET(0xB31E5D0)
#define OEHJJEDJGPB_HEIKDGJGLIH_OFFSET UNITYSDK_OFFSET(0xB31E300)
#define OEHJJEDJGPB_HIEBOPOKAPB_OFFSET UNITYSDK_OFFSET(0xB31F700)
#define OEHJJEDJGPB_IDHJBJGGBAI_OFFSET UNITYSDK_OFFSET(0xB320F90)
#define OEHJJEDJGPB_JJGDAOBPLGI_OFFSET UNITYSDK_OFFSET(0xB320160)
#define OEHJJEDJGPB_KEHPPNIHBOH_OFFSET UNITYSDK_OFFSET(0xB31D6C0)
#define OEHJJEDJGPB_KKDDCNJHLPM_OFFSET UNITYSDK_OFFSET(0xB320C70)
#define OEHJJEDJGPB_KNPOLHMPCCN_OFFSET UNITYSDK_OFFSET(0xB321060)
#define OEHJJEDJGPB_LFDCKMJHCGP_OFFSET UNITYSDK_OFFSET(0xB31DC00)
#define OEHJJEDJGPB_LJLHPGBFLGC_OFFSET UNITYSDK_OFFSET(0xB320690)
#define OEHJJEDJGPB_LLLDIOOCANE_OFFSET UNITYSDK_OFFSET(0xB3201E0)
#define OEHJJEDJGPB_LPDJECKLMFG_OFFSET UNITYSDK_OFFSET(0xB320760)
#define OEHJJEDJGPB_MDDKDJINEGG_OFFSET UNITYSDK_OFFSET(0xB31D530)
#define OEHJJEDJGPB_MHILMPPNJOK_OFFSET UNITYSDK_OFFSET(0xB31FA80)
#define OEHJJEDJGPB_OCPLJJOMHGN_1_OFFSET UNITYSDK_OFFSET(0xB31FDE0)
#define OEHJJEDJGPB_OCPLJJOMHGN_OFFSET UNITYSDK_OFFSET(0xB31DF00)
#define OEHJJEDJGPB_OGNKHPPNMAF_OFFSET UNITYSDK_OFFSET(0xB31E8A0)
#define OEHJJEDJGPB_OOHEGPOGICM_OFFSET UNITYSDK_OFFSET(0xB31EFF0)
#define OEHJJEDJGPB_OOHEOBJDABH_OFFSET UNITYSDK_OFFSET(0xB31DB40)
#define OEHJJEDJGPB_PCHLIEPONHD_OFFSET UNITYSDK_OFFSET(0xB31E6F0)
#define OEHJJEDJGPB_PDIMBBDAKKG_OFFSET UNITYSDK_OFFSET(0xB320870)
#define OEHJJEDJGPB_PIBFPFKANPK_OFFSET UNITYSDK_OFFSET(0xB31DE20)
#define OEHJJEDJGPB_PLJNGFBIGKG_OFFSET UNITYSDK_OFFSET(0xB31E770)
#define OEHJJEDJGPB__CCTOR_OFFSET UNITYSDK_OFFSET(0xB31D4F0)

inline static constexpr unsigned int OEHJJEDJGPB_TypeDefinitionIndex = 65988;

class OEHJJEDJGPB : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIAdapt** StaticGet_ACIKNMKBOLF()
	{
		return (::MoleMole::ConfigUIAdapt**)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x4DD80);
	}
	static ::Il2CppArray<::UnityEngine::Rect>** StaticGet_JKDIBHKJKJD()
	{
		return (::Il2CppArray<::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x4DD88);
	}
	static ::System::String** StaticGet_CFEOMEBKGKL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x4DD90);
	}
	static ::UnityEngine::Rect* StaticGet_OHHFFLGIICL()
	{
		return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x125F0);
	}
	static ::MoleMole::Vector2Int* StaticGet_NLDMNDIANIO()
	{
		return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x12600);
	}
	static ::System::Single* StaticGet_PJBKELBHLBF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x12608);
	}
	static ::System::Boolean* StaticGet_MCBNIDGNBDG()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x1260C);
	}
	static ::System::Nullable_1<::System::Boolean>* StaticGet_AAMBLODJIFH()
	{
		return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x1260D);
	}
	static ::System::Boolean* StaticGet_CFFJIGFOBDE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x1260F);
	}
	static ::System::Boolean* StaticGet_IKHPNOACKDP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x12610);
	}
	static ::System::Nullable_1<::System::Boolean>* StaticGet_COOGNGEIJBO()
	{
		return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x12611);
	}
	static ::System::Boolean* StaticGet_PJOOMEMPJAP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x12613);
	}
	static ::UnityEngine::DeviceType* StaticGet_LOHKCADIGIJ()
	{
		return (::UnityEngine::DeviceType*)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x12614);
	}
	static ::UnityEngine::ScreenOrientation* StaticGet_LJFGLHHFDKP()
	{
		return (::UnityEngine::ScreenOrientation*)Il2CppClass::FromTypeDefinitionIndex(OEHJJEDJGPB_TypeDefinitionIndex)->GetStaticField(0x12618);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEHJJEDJGPB__CCTOR_OFFSET))();
	}

	static ::System::Int32 MDDKDJINEGG(::UnityEngine::Rect NGNBGHKPIFF, ::System::Int32 JBGLCAFPGHK, ::System::Int32 KKAMDFNMMJH)
	{
		return ((::System::Int32(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_MDDKDJINEGG_OFFSET))(NGNBGHKPIFF, JBGLCAFPGHK, KKAMDFNMMJH);
	}

	static ::UnityEngine::Vector2 KEHPPNIHBOH(::System::Single NGIAEEBHCOC, ::System::Single EHEGJCCCJCA, ::System::Boolean GGAJNLBAFKK)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_KEHPPNIHBOH_OFFSET))(NGIAEEBHCOC, EHEGJCCCJCA, GGAJNLBAFKK);
	}

	static ::System::Boolean CHDJKCDIICK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEHJJEDJGPB_CHDJKCDIICK_OFFSET))();
	}

	static ::MoleMole::GlobalPaddingData* BANLLGAGPOJ(::System::String* HCHGNFDMINL)
	{
		return ((::MoleMole::GlobalPaddingData*(*)(::System::String*))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_BANLLGAGPOJ_OFFSET))(HCHGNFDMINL);
	}

	static ::System::Single OOHEOBJDABH(::System::Single OCPOIHJPPAP, ::System::Single MGJOFMPHEJK, ::System::Int32 EJOIHNMAENJ)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_OOHEOBJDABH_OFFSET))(OCPOIHJPPAP, MGJOFMPHEJK, EJOIHNMAENJ);
	}

	static ::System::Void LFDCKMJHCGP(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_LFDCKMJHCGP_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean PIBFPFKANPK(::UnityEngine::Camera* KONLMDBCDCK, ::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_PIBFPFKANPK_OFFSET))(KONLMDBCDCK, GGAJNLBAFKK);
	}

	static ::MoleMole::DeviceAdaptData* OCPLJJOMHGN(::System::String* HCHGNFDMINL)
	{
		return ((::MoleMole::DeviceAdaptData*(*)(::System::String*))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_OCPLJJOMHGN_OFFSET))(HCHGNFDMINL);
	}

	static ::System::Boolean HEIKDGJGLIH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEHJJEDJGPB_HEIKDGJGLIH_OFFSET))();
	}

	static ::System::Void PLJNGFBIGKG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEHJJEDJGPB_PLJNGFBIGKG_OFFSET))();
	}

	static ::System::Void DEHLGECMMDA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_DEHLGECMMDA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::UIAdaptData* BCBAJOJEBFF(::System::String* ONBDOPOHLIB, ::GMFAKIPCDED BJONBLDFNHC)
	{
		return ((::MoleMole::UIAdaptData*(*)(::System::String*, ::GMFAKIPCDED))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_BCBAJOJEBFF_OFFSET))(ONBDOPOHLIB, BJONBLDFNHC);
	}

	static ::Il2CppArray<::UnityEngine::Rect>* AMOLBCHCCMH(::MoleMole::Vector2Int& BNCHENOPKCB)
	{
		return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::MoleMole::Vector2Int&))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_AMOLBCHCCMH_OFFSET))(BNCHENOPKCB);
	}

	static ::System::Void ELPMNNJLKKI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_ELPMNNJLKKI_OFFSET))(EGEGIMGMJHN);
	}

	static ::MoleMole::UIAdaptData* OOHEGPOGICM(::System::String* ONBDOPOHLIB, ::GMFAKIPCDED BJONBLDFNHC)
	{
		return ((::MoleMole::UIAdaptData*(*)(::System::String*, ::GMFAKIPCDED))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_OOHEGPOGICM_OFFSET))(ONBDOPOHLIB, BJONBLDFNHC);
	}

	static ::System::Boolean PCHLIEPONHD(::System::String* HCHGNFDMINL)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_PCHLIEPONHD_OFFSET))(HCHGNFDMINL);
	}

	static ::MoleMole::DevicePhysicalData* HIEBOPOKAPB(::System::String* HCHGNFDMINL)
	{
		return ((::MoleMole::DevicePhysicalData*(*)(::System::String*))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_HIEBOPOKAPB_OFFSET))(HCHGNFDMINL);
	}

	static ::UnityEngine::Vector2 MHILMPPNJOK(::UnityEngine::Vector2 GGJCDGHENFI, ::UnityEngine::Vector2 NCGCIAFCCBG)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_MHILMPPNJOK_OFFSET))(GGJCDGHENFI, NCGCIAFCCBG);
	}

	static ::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEHJJEDJGPB_BJHHNNGACFN_OFFSET))();
	}

	static ::MoleMole::DeviceAdaptData* OCPLJJOMHGN_1(::System::String* HCHGNFDMINL, ::System::Int32 NGIAEEBHCOC, ::System::Int32 EHEGJCCCJCA, ::MoleMole::DeviceScreenAdaptProfile*& EBHHDPPBPDK)
	{
		return ((::MoleMole::DeviceAdaptData*(*)(::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::DeviceScreenAdaptProfile*&))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_OCPLJJOMHGN_1_OFFSET))(HCHGNFDMINL, NGIAEEBHCOC, EHEGJCCCJCA, EBHHDPPBPDK);
	}

	static ::System::Void OGNKHPPNMAF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEHJJEDJGPB_OGNKHPPNMAF_OFFSET))();
	}

	static ::System::String* FKFEILCIFAI(::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_FKFEILCIFAI_OFFSET))(GGAJNLBAFKK);
	}

	static ::UnityEngine::Vector2 JJGDAOBPLGI(::UnityEngine::Vector2 PLHMJANNHEH, ::UnityEngine::Vector2 NCGCIAFCCBG)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_JJGDAOBPLGI_OFFSET))(PLHMJANNHEH, NCGCIAFCCBG);
	}

	static ::System::Boolean LLLDIOOCANE(::MoleMole::DeviceScreenAdaptProfile* JFDDLNDKIKM, ::UnityEngine::ScreenOrientation ONKNFLAKGJM, ::Il2CppArray<::UnityEngine::Rect>* EEAEFGDALAL, ::System::Int32 JBGLCAFPGHK, ::System::Int32 KKAMDFNMMJH, ::UnityEngine::ScreenOrientation& OAHFEAOLDFN)
	{
		return ((::System::Boolean(*)(::MoleMole::DeviceScreenAdaptProfile*, ::UnityEngine::ScreenOrientation, ::Il2CppArray<::UnityEngine::Rect>*, ::System::Int32, ::System::Int32, ::UnityEngine::ScreenOrientation&))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_LLLDIOOCANE_OFFSET))(JFDDLNDKIKM, ONKNFLAKGJM, EEAEFGDALAL, JBGLCAFPGHK, KKAMDFNMMJH, OAHFEAOLDFN);
	}

	static ::System::Single BDLOHEEPMJJ(::System::Single BBEBNGKKMBK, ::System::Boolean FACKFLBBOON)
	{
		return ((::System::Single(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_BDLOHEEPMJJ_OFFSET))(BBEBNGKKMBK, FACKFLBBOON);
	}

	static ::UnityEngine::DeviceType LPDJECKLMFG(::System::Boolean GGAJNLBAFKK)
	{
		return ((::UnityEngine::DeviceType(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_LPDJECKLMFG_OFFSET))(GGAJNLBAFKK);
	}

	static ::MoleMole::DevicePhysicalPadingData* PDIMBBDAKKG(::System::String* HCHGNFDMINL)
	{
		return ((::MoleMole::DevicePhysicalPadingData*(*)(::System::String*))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_PDIMBBDAKKG_OFFSET))(HCHGNFDMINL);
	}

	static ::System::Boolean KKDDCNJHLPM(::MoleMole::DeviceScreenAdaptProfile*& JFDDLNDKIKM, ::UnityEngine::ScreenOrientation& ONKNFLAKGJM)
	{
		return ((::System::Boolean(*)(::MoleMole::DeviceScreenAdaptProfile*&, ::UnityEngine::ScreenOrientation&))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_KKDDCNJHLPM_OFFSET))(JFDDLNDKIKM, ONKNFLAKGJM);
	}

	static ::System::Boolean IDHJBJGGBAI(::MoleMole::DeviceScreenAdaptProfile* JFDDLNDKIKM, ::UnityEngine::ScreenOrientation ONKNFLAKGJM, ::UnityEngine::ScreenOrientation& OAHFEAOLDFN)
	{
		return ((::System::Boolean(*)(::MoleMole::DeviceScreenAdaptProfile*, ::UnityEngine::ScreenOrientation, ::UnityEngine::ScreenOrientation&))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_IDHJBJGGBAI_OFFSET))(JFDDLNDKIKM, ONKNFLAKGJM, OAHFEAOLDFN);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Single LJLHPGBFLGC(::System::Single BBEBNGKKMBK, ::System::Single MGJOFMPHEJK, ::System::Int32 EJOIHNMAENJ)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_LJLHPGBFLGC_OFFSET))(BBEBNGKKMBK, MGJOFMPHEJK, EJOIHNMAENJ);
	}

	static ::System::Boolean KNPOLHMPCCN(::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OEHJJEDJGPB_KNPOLHMPCCN_OFFSET))(GGAJNLBAFKK);
	}
};
