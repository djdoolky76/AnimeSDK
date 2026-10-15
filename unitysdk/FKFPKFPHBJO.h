#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EVideoPlayMode.h"
#include "unitysdk/System/Object.h"
class CCJPMOKKAED;
class DBLCHICFCLA;
namespace CriWare { class CriManaMovieController; }
namespace CriWare { class CriManaMovieControllerForUI; }
namespace CriWare { class CriManaMovieMaterial; }
namespace CriWare { class CriManaVP9Initializer; }
namespace CriWare { class CriWareErrorHandler; }
namespace CriWare { class CriWareInitializer; }
namespace CriWare::CriMana { class MovieInfo; }
namespace RPG::GameCore { class PlayVideoSequence; }
namespace RPG::GameCore { class RemoveVideoSequence; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Shader; }

#define FKFPKFPHBJO_AKOFIDBKPJE_OFFSET UNITYSDK_OFFSET(0x157F13E0)
#define FKFPKFPHBJO_BIAGOIKPFHE_OFFSET UNITYSDK_OFFSET(0x157F3160)
#define FKFPKFPHBJO_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x157F0770)
#define FKFPKFPHBJO_CAPEFMCCNAD_OFFSET UNITYSDK_OFFSET(0x157F2820)
#define FKFPKFPHBJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x157F34F0)
#define FKFPKFPHBJO_CFMIKPHKGAN_OFFSET UNITYSDK_OFFSET(0x157F23A0)
#define FKFPKFPHBJO_CTOR_OFFSET UNITYSDK_OFFSET(0x157F32F0)
#define FKFPKFPHBJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157F06A0)
#define FKFPKFPHBJO_ELBDLFFONBE_OFFSET UNITYSDK_OFFSET(0x157F1D20)
#define FKFPKFPHBJO_ELHCJKJPJBC_OFFSET UNITYSDK_OFFSET(0x157F2B60)
#define FKFPKFPHBJO_FDDBKMMHNDN_OFFSET UNITYSDK_OFFSET(0x157F24A0)
#define FKFPKFPHBJO_FHLOBBNNEND_OFFSET UNITYSDK_OFFSET(0x157F2B10)
#define FKFPKFPHBJO_FKLCNNCPAFM_OFFSET UNITYSDK_OFFSET(0x157F1900)
#define FKFPKFPHBJO_GET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0x157F32D0)
#define FKFPKFPHBJO_GMKLMJMPMCM_OFFSET UNITYSDK_OFFSET(0x157F0FB0)
#define FKFPKFPHBJO_HGIDGONNHBJ_OFFSET UNITYSDK_OFFSET(0x157F0D30)
#define FKFPKFPHBJO_ICEGKNOAGPL_OFFSET UNITYSDK_OFFSET(0x157F2430)
#define FKFPKFPHBJO_ILIHJMPANCP_OFFSET UNITYSDK_OFFSET(0x157F2150)
#define FKFPKFPHBJO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x157F2040)
#define FKFPKFPHBJO_JLOECEFCNIK_OFFSET UNITYSDK_OFFSET(0x157F1810)
#define FKFPKFPHBJO_KFENNFMLBKK_OFFSET UNITYSDK_OFFSET(0x157F3250)
#define FKFPKFPHBJO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x157F0E00)
#define FKFPKFPHBJO_LCEOJEMBEDN_OFFSET UNITYSDK_OFFSET(0x157F19C0)
#define FKFPKFPHBJO_LGMJPLBNBEL_OFFSET UNITYSDK_OFFSET(0x157F2690)
#define FKFPKFPHBJO_MCLHAMKLPJB_OFFSET UNITYSDK_OFFSET(0x157F1FD0)
#define FKFPKFPHBJO_MCNPIPBKEDJ_OFFSET UNITYSDK_OFFSET(0x157F1F40)
#define FKFPKFPHBJO_MMMIPHHCEGC_OFFSET UNITYSDK_OFFSET(0x157F0FF0)
#define FKFPKFPHBJO_MONHHPKLIND_OFFSET UNITYSDK_OFFSET(0x157F2700)
#define FKFPKFPHBJO_MOPFNNIAAFN_OFFSET UNITYSDK_OFFSET(0x157F1040)
#define FKFPKFPHBJO_NBLIBBLMOOK_OFFSET UNITYSDK_OFFSET(0x157F2970)
#define FKFPKFPHBJO_NGLKJEPEFAK_OFFSET UNITYSDK_OFFSET(0x157F25E0)
#define FKFPKFPHBJO_NOGAPNONCOB_OFFSET UNITYSDK_OFFSET(0x157F1570)
#define FKFPKFPHBJO_OAMHEDCALKF_OFFSET UNITYSDK_OFFSET(0x157F1B80)
#define FKFPKFPHBJO_OLLLDDALIGG_OFFSET UNITYSDK_OFFSET(0x157F12F0)
#define FKFPKFPHBJO_PDNILOLJOMO_OFFSET UNITYSDK_OFFSET(0x157F2F30)
#define FKFPKFPHBJO_PIDDPFJDGKL_OFFSET UNITYSDK_OFFSET(0x157F0F40)
#define FKFPKFPHBJO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x157F0DB0)
#define FKFPKFPHBJO_SET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0x157F32E0)
#define FKFPKFPHBJO__SPAWNUICONTROLLER_B__24_0_OFFSET UNITYSDK_OFFSET(0x157F3520)
#define FKFPKFPHBJO___CREATEVIDEOTEXTURE_B__22_0_OFFSET UNITYSDK_OFFSET(0x157F3510)

	class FKFPKFPHBJO : public ::System::Object
	{
	public:
		::UnityEngine::Shader* POMDJBNGCLL; // 0x10
		::System::Collections::Generic::List_1<::CriWare::CriManaMovieController*>* FBDGNNLPCGB; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::CCJPMOKKAED*>* NOPMBHGJHMP; // 0x20
		::CriWare::CriWareErrorHandler* GEPONNBNGHF; // 0x28
		::System::Collections::Generic::List_1<::CriWare::CriManaMovieController*>* FLNEKJAFGGH; // 0x30
		::UnityEngine::GameObject* CGAMDBOLHLA; // 0x38
		::CriWare::CriWareInitializer* MMINIDBGNDM; // 0x40
		::CriWare::CriManaVP9Initializer* FNIDGGBFPPG; // 0x48
		::System::Collections::Generic::List_1<::CCJPMOKKAED*>* ANGNFJIGNOC; // 0x50
		::UnityEngine::Shader* JBNKALCBMEL; // 0x58
		::System::Collections::Generic::HashSet_1<::DBLCHICFCLA*>* IHHFDIEDEHF; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::CriWare::CriManaMovieMaterial*>* JFPPBDJLBLG; // 0x68
		::System::Int32 NGGKEMLIEAK; // 0x70
		::System::Single FIFJJJDDJFH; // 0x74
		::System::Boolean MMMENIJLAJE; // 0x78
		::System::Boolean NFNNIPBFDCA; // 0x79
		::System::Byte _padding0[0x2];
		::System::Int32 DIFFFBMGAHC; // 0x7C
		::System::Int32 JAAADFGGDJI; // 0x80
		::System::Int32 BLMMNEOJCGP; // 0x84
		::RPG::Client::EVideoPlayMode _PlayMode_k__BackingField; // 0x88
		static ::System::Int32* StaticGet_FGNHOCPENNA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FKFPKFPHBJO")->GetStaticField(0x15480);
		}

		static ::System::Int32* StaticGet_GPFPNHHAACC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FKFPKFPHBJO")->GetStaticField(0x15484);
		}

		static ::System::Int32* StaticGet_MIONLNENENI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FKFPKFPHBJO")->GetStaticField(0x15488);
		}

		// static const ::System::Object PCJJBKODONG; // 0x0
		// static const ::System::String* DBJFLGANNOF; // 0x0
		// static const ::System::String* KFLMMMKPFOJ; // 0x0
		// static const ::System::String* ECCNKHAHKOB; // 0x0
		// static const ::System::String* DNCOBJJBMAA; // 0x0
		// static const ::System::String* GOLJNFMDGFJ; // 0x0
		// static const ::System::String* CFILKBEHEIK; // 0x0
		// static const ::System::String* CHHIMIDIKEA; // 0x0
		// static const ::System::String* FBFDHMBAHPO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKFPKFPHBJO_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void MMMIPHHCEGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_MMMIPHHCEGC_OFFSET))(this);
		}

		::CriWare::CriManaMovieControllerForUI* OLLLDDALIGG(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_OLLLDDALIGG_OFFSET))(this, a1, a2);
		}

		::CriWare::CriManaMovieController* JLOECEFCNIK(::System::String* a1, ::System::Int32 a2)
		{
			return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_JLOECEFCNIK_OFFSET))(this, a1, a2);
		}

		::System::Void LCEOJEMBEDN(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_LCEOJEMBEDN_OFFSET))(this, a1, a2);
		}

		::System::Void ELBDLFFONBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_ELBDLFFONBE_OFFSET))(this);
		}

		::System::Void MCNPIPBKEDJ(::DBLCHICFCLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBLCHICFCLA*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_MCNPIPBKEDJ_OFFSET))(this, a1);
		}

		::System::Void MCLHAMKLPJB(::DBLCHICFCLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBLCHICFCLA*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_MCLHAMKLPJB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void ICEGKNOAGPL(::RPG::Client::EVideoPlayMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_ICEGKNOAGPL_OFFSET))(this, a1);
		}

		::System::Void PIDDPFJDGKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_PIDDPFJDGKL_OFFSET))(this);
		}

		::System::Void GMKLMJMPMCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_GMKLMJMPMCM_OFFSET))(this);
		}

		::System::Void CFMIKPHKGAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_CFMIKPHKGAN_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_BJMNKLGEMPM_OFFSET))(this, a1);
		}

		::System::Void MOPFNNIAAFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_MOPFNNIAAFN_OFFSET))(this);
		}

		::System::Void LGMJPLBNBEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_LGMJPLBNBEL_OFFSET))(this);
		}

		::System::Void NGLKJEPEFAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_NGLKJEPEFAK_OFFSET))(this);
		}

		::CriWare::CriManaMovieController* FKLCNNCPAFM(::System::String* a1)
		{
			return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_FKLCNNCPAFM_OFFSET))(this, a1);
		}

		::CriWare::CriManaMovieController* NBLIBBLMOOK(::System::String* a1)
		{
			return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_NBLIBBLMOOK_OFFSET))(this, a1);
		}

		::CriWare::CriManaMovieController* CAPEFMCCNAD(::System::String* a1)
		{
			return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_CAPEFMCCNAD_OFFSET))(this, a1);
		}

		::CriWare::CriManaMovieControllerForUI* NOGAPNONCOB(::System::String* a1)
		{
			return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_NOGAPNONCOB_OFFSET))(this, a1);
		}

		::System::Void FHLOBBNNEND(::CriWare::CriManaMovieMaterial* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_FHLOBBNNEND_OFFSET))(this, a1);
		}

		::System::Void ELHCJKJPJBC(::RPG::GameCore::PlayVideoSequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_ELHCJKJPJBC_OFFSET))(this, a1);
		}

		::System::Void PDNILOLJOMO(::RPG::GameCore::RemoveVideoSequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RemoveVideoSequence*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_PDNILOLJOMO_OFFSET))(this, a1);
		}

		::System::Void OAMHEDCALKF(::System::Int32 a1, ::CriWare::CriManaMovieController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CriWare::CriManaMovieController*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_OAMHEDCALKF_OFFSET))(this, a1, a2);
		}

		::System::Void MONHHPKLIND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_MONHHPKLIND_OFFSET))(this);
		}

		::System::Void ILIHJMPANCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_ILIHJMPANCP_OFFSET))(this);
		}

		::System::Void AKOFIDBKPJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_AKOFIDBKPJE_OFFSET))(this);
		}

		::System::String* BIAGOIKPFHE(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_BIAGOIKPFHE_OFFSET))(this, a1);
		}

		::System::String* KFENNFMLBKK(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_KFENNFMLBKK_OFFSET))(this, a1);
		}

		::System::Void HGIDGONNHBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_HGIDGONNHBJ_OFFSET))(this);
		}

		::System::Void FDDBKMMHNDN(::RPG::Client::EVideoPlayMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_FDDBKMMHNDN_OFFSET))(this, a1);
		}

		::RPG::Client::EVideoPlayMode get_PlayMode()
		{
			return ((::RPG::Client::EVideoPlayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_GET_PLAYMODE_OFFSET))(this);
		}

		::System::Void set_PlayMode(::RPG::Client::EVideoPlayMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + FKFPKFPHBJO_SET_PLAYMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Shader* __CreateVideoTexture_b__22_0(::CriWare::CriMana::MovieInfo* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKFPKFPHBJO___CREATEVIDEOTEXTURE_B__22_0_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Shader* _SpawnUIController_b__24_0(::CriWare::CriMana::MovieInfo* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKFPKFPHBJO__SPAWNUICONTROLLER_B__24_0_OFFSET))(this, a1, a2);
		}

	};
