#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Pose.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BatchAnimationClipGroup;
class CBOICBCAHBE;
class CBOICBCAHBE_CPHFNDGDBOH;
class NDMEMOIGNDG_MAOEAMNMIBM;
class NEOCEOCDEAF;
class PKFMLDAGKKB_DFOBNBPDLPK;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationAttachPointMapping; }
namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig; }
namespace RPG::Client { class PedestrianMemberExternalConfig_BatchAnimation; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define PKFMLDAGKKB_AGBEJJJHIFM_OFFSET UNITYSDK_OFFSET(0xC2B01F0)
#define PKFMLDAGKKB_BKLFKIIIKIK_OFFSET UNITYSDK_OFFSET(0xC2AFF40)
#define PKFMLDAGKKB_BPKOJGPJJJD_OFFSET UNITYSDK_OFFSET(0xC2B16D0)
#define PKFMLDAGKKB_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2B27D0)
#define PKFMLDAGKKB_CFJFOHELIFM_OFFSET UNITYSDK_OFFSET(0xC2AFF20)
#define PKFMLDAGKKB_CHLOCEBDIPH_OFFSET UNITYSDK_OFFSET(0xC2B1C40)
#define PKFMLDAGKKB_CLEAR_OFFSET UNITYSDK_OFFSET(0xC2AF460)
#define PKFMLDAGKKB_COHJKLOABND_OFFSET UNITYSDK_OFFSET(0xC2B1070)
#define PKFMLDAGKKB_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B2480)
#define PKFMLDAGKKB_DJPHNGMFOBF_OFFSET UNITYSDK_OFFSET(0xC2B17D0)
#define PKFMLDAGKKB_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xC2AE730)
#define PKFMLDAGKKB_DLHLGBHDOEG_OFFSET UNITYSDK_OFFSET(0xC2B08A0)
#define PKFMLDAGKKB_DLHNHEAIJNL_OFFSET UNITYSDK_OFFSET(0xC2AF8F0)
#define PKFMLDAGKKB_DLIHMJBMIIG_OFFSET UNITYSDK_OFFSET(0xC2B13A0)
#define PKFMLDAGKKB_EKOLMKMDCNB_OFFSET UNITYSDK_OFFSET(0xC2B0E70)
#define PKFMLDAGKKB_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0xC2B2050)
#define PKFMLDAGKKB_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xC2B2010)
#define PKFMLDAGKKB_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC2B1FF0)
#define PKFMLDAGKKB_GET_FEATUREID_OFFSET UNITYSDK_OFFSET(0xC2B1FB0)
#define PKFMLDAGKKB_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0xC2B1F90)
#define PKFMLDAGKKB_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xC2B1FD0)
#define PKFMLDAGKKB_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xC2AE6C0)
#define PKFMLDAGKKB_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC2B2030)
#define PKFMLDAGKKB_GJAPFMBKFHC_OFFSET UNITYSDK_OFFSET(0xC2B1A50)
#define PKFMLDAGKKB_GJMPCDMDAEO_OFFSET UNITYSDK_OFFSET(0xC2AE6E0)
#define PKFMLDAGKKB_HEHPNHBCBCM_OFFSET UNITYSDK_OFFSET(0xC2B07C0)
#define PKFMLDAGKKB_HJIJNEFPEEN_OFFSET UNITYSDK_OFFSET(0xC2B02C0)
#define PKFMLDAGKKB_HLOFLJIAIFO_OFFSET UNITYSDK_OFFSET(0xC2B1E50)
#define PKFMLDAGKKB_IBKCCEIIOBE_OFFSET UNITYSDK_OFFSET(0xC2AFAC0)
#define PKFMLDAGKKB_IBOEMHFGLHF_OFFSET UNITYSDK_OFFSET(0xC2AFB30)
#define PKFMLDAGKKB_IEIALHLHHHP_OFFSET UNITYSDK_OFFSET(0xC2B1D40)
#define PKFMLDAGKKB_IOIKKHPJEKK_OFFSET UNITYSDK_OFFSET(0xC2AFF30)
#define PKFMLDAGKKB_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xC2AFF50)
#define PKFMLDAGKKB_JFCHNLPOJAK_OFFSET UNITYSDK_OFFSET(0xC2B0E00)
#define PKFMLDAGKKB_KFOEDAKOILO_OFFSET UNITYSDK_OFFSET(0xC2AFDD0)
#define PKFMLDAGKKB_KHMMAGNCOBA_OFFSET UNITYSDK_OFFSET(0xC2B10E0)
#define PKFMLDAGKKB_KKMMBMPMEEO_OFFSET UNITYSDK_OFFSET(0xC2B1CD0)
#define PKFMLDAGKKB_LKFMONHKNEH_OFFSET UNITYSDK_OFFSET(0xC2B0700)
#define PKFMLDAGKKB_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0xC2B0A70)
#define PKFMLDAGKKB_MAMPFIHBMII_OFFSET UNITYSDK_OFFSET(0xC2B0250)
#define PKFMLDAGKKB_MBOGKNKADJC_OFFSET UNITYSDK_OFFSET(0xC2B2460)
#define PKFMLDAGKKB_MGCJADOONGI_OFFSET UNITYSDK_OFFSET(0xC2B0100)
#define PKFMLDAGKKB_MIGOGLNIILO_OFFSET UNITYSDK_OFFSET(0xC2AFE70)
#define PKFMLDAGKKB_MPKAFEJFNKN_OFFSET UNITYSDK_OFFSET(0xC2B1740)
#define PKFMLDAGKKB_NGLCJJKIKIF_OFFSET UNITYSDK_OFFSET(0xC2B0910)
#define PKFMLDAGKKB_NJHOAIFGNNH_OFFSET UNITYSDK_OFFSET(0xC2AFA40)
#define PKFMLDAGKKB_NMNGCMHMHJM_OFFSET UNITYSDK_OFFSET(0xC2B0750)
#define PKFMLDAGKKB_NNMKOCFCBOE_OFFSET UNITYSDK_OFFSET(0xC2AEA00)
#define PKFMLDAGKKB_NOFHFKNDBAO_OFFSET UNITYSDK_OFFSET(0xC2B09D0)
#define PKFMLDAGKKB_OGMDDPBHHKH_OFFSET UNITYSDK_OFFSET(0xC2B0B10)
#define PKFMLDAGKKB_OHLGICKBLKM_OFFSET UNITYSDK_OFFSET(0xC2B0CD0)
#define PKFMLDAGKKB_PINOKCNDANM_OFFSET UNITYSDK_OFFSET(0xC2B0050)
#define PKFMLDAGKKB_SET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0xC2B2060)
#define PKFMLDAGKKB_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xC2B2020)
#define PKFMLDAGKKB_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC2B2000)
#define PKFMLDAGKKB_SET_FEATUREID_OFFSET UNITYSDK_OFFSET(0xC2B1FC0)
#define PKFMLDAGKKB_SET_IDENTITY_OFFSET UNITYSDK_OFFSET(0xC2B1FA0)
#define PKFMLDAGKKB_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xC2B1FE0)
#define PKFMLDAGKKB_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xC2AE6D0)
#define PKFMLDAGKKB_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC2B2040)

inline static constexpr unsigned int PKFMLDAGKKB_TypeDefinitionIndex = 69258;

	class PKFMLDAGKKB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*>* MDDCCAENAEP; // 0x10
		::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* _Config_k__BackingField; // 0x18
		::RPG::Client::BAPartVariantRes* FGKMEFPNHDJ; // 0x20
		::System::String* IBBCELHNBHC; // 0x28
		::System::Action* _Callback_k__BackingField; // 0x30
		::System::String* JPMIMGKFFHA; // 0x38
		::CBOICBCAHBE_CPHFNDGDBOH* OJEKKHBADKA; // 0x40
		::CBOICBCAHBE* FLMODBLFAGD; // 0x48
		::System::String* OOECGNNINLO; // 0x50
		::System::String* KPIOPHGBKIJ; // 0x58
		::NEOCEOCDEAF* NMIHNJICJBG; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* ONMDNNFBHBC; // 0x68
		::RPG::Client::AssemNPC* GBACLGGLMJF; // 0x70
		::UnityEngine::MaterialPropertyBlock* OLMNDJNHOGE; // 0x78
		::UnityEngine::Transform* _Transform_k__BackingField; // 0x80
		::System::String* _FeatureID_k__BackingField; // 0x88
		::UnityEngine::Rendering::BatchAnimationInstance* _BatchAnimation_k__BackingField; // 0x90
		::System::Collections::Generic::HashSet_1<::System::String*>* MJNNHILBOBC; // 0x98
		::System::String* BMABFIDFEKG; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*>* MHPNBHKCMLC; // 0xA8
		::System::String* _PrefabPath_k__BackingField; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DIDLEMCMOGP; // 0xB8
		::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig* APNNFHPNOKK; // 0xC0
		::NDMEMOIGNDG_MAOEAMNMIBM* KDHMDGBHKGF; // 0xC8
		::System::String* _Identity_k__BackingField; // 0xD0
		::System::Collections::Generic::List_1<::System::Object*>* OLGONBDJIKN; // 0xD8
		::UnityEngine::Bounds KPKONAAKNFF; // 0xE0
		::System::Single _Radius_k__BackingField; // 0xF8
		::System::Boolean JDKBGILFNCG; // 0xFC
		::System::Boolean ODMMJFBMNBP; // 0xFD
		::System::Boolean PJOBJLOMAEO; // 0xFE
		::System::Boolean GACJIFJFCIA; // 0xFF
		::UnityEngine::Bounds MPBIFEFGKGO; // 0x100
		::System::Nullable_1<::UnityEngine::Pose> OGFMJEKIEEC; // 0x118
		static ::System::Single* StaticGet_FKMNGONKABF()
		{
			return (::System::Single*)UnitySDK::FromName("", "PKFMLDAGKKB")->GetStaticField(0x15BE0);
		}

		static ::System::Int32* StaticGet_JONPCFBBICG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PKFMLDAGKKB")->GetStaticField(0x15BE4);
		}

		static ::System::Int32* StaticGet_OLOGEKHMEJN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PKFMLDAGKKB")->GetStaticField(0x15BE8);
		}

		static ::System::Single* StaticGet_OABDNNHCDLM()
		{
			return (::System::Single*)UnitySDK::FromName("", "PKFMLDAGKKB")->GetStaticField(0x15BEC);
		}

		static ::System::Single* StaticGet_MOEHGHKCGCN()
		{
			return (::System::Single*)UnitySDK::FromName("", "PKFMLDAGKKB")->GetStaticField(0x15BF0);
		}

		static ::UnityEngine::Vector3* StaticGet_LCLIBCPMLIN()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "PKFMLDAGKKB")->GetStaticField(0x15BF4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKFMLDAGKKB_CCTOR_OFFSET))();
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::Single GJMPCDMDAEO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_GJMPCDMDAEO_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* a4, ::System::Action* a5, ::System::Nullable_1<::UnityEngine::Pose> a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*, ::System::Action*, ::System::Nullable_1<::UnityEngine::Pose>))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_CLEAR_OFFSET))(this);
		}

		::System::Void NJHOAIFGNNH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_NJHOAIFGNNH_OFFSET))(this, a1);
		}

		::System::Void IBKCCEIIOBE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_IBKCCEIIOBE_OFFSET))(this, a1);
		}

		::System::Void IBOEMHFGLHF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_IBOEMHFGLHF_OFFSET))(this, a1);
		}

		::System::Void MIGOGLNIILO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_MIGOGLNIILO_OFFSET))(this);
		}

		::System::String* CFJFOHELIFM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_CFJFOHELIFM_OFFSET))(this);
		}

		::System::String* IOIKKHPJEKK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_IOIKKHPJEKK_OFFSET))(this);
		}

		::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig* BKLFKIIIKIK()
		{
			return ((::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_BKLFKIIIKIK_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_JDEKJLHMPLG_OFFSET))(this, a1, a2);
		}

		::System::Void PINOKCNDANM(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_PINOKCNDANM_OFFSET))(this, a1, a2);
		}

		::System::Void MGCJADOONGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_MGCJADOONGI_OFFSET))(this, a1);
		}

		::System::Void LKFMONHKNEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_LKFMONHKNEH_OFFSET))(this, a1);
		}

		::System::Void NMNGCMHMHJM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_NMNGCMHMHJM_OFFSET))(this, a1);
		}

		::System::String* MAMPFIHBMII()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_MAMPFIHBMII_OFFSET))(this);
		}

		::System::String* AGBEJJJHIFM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_AGBEJJJHIFM_OFFSET))(this);
		}

		::System::Boolean DLHLGBHDOEG(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_DLHLGBHDOEG_OFFSET))(this, a1);
		}

		::System::Boolean NGLCJJKIKIF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_NGLCJJKIKIF_OFFSET))(this);
		}

		::System::Void NOFHFKNDBAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_NOFHFKNDBAO_OFFSET))(this);
		}

		::System::Void LNGDBLEKGHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_LNGDBLEKGHG_OFFSET))(this);
		}

		::System::Void OGMDDPBHHKH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_OGMDDPBHHKH_OFFSET))(this, a1, a2);
		}

		::System::Void JFCHNLPOJAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_JFCHNLPOJAK_OFFSET))(this, a1);
		}

		::System::Void OHLGICKBLKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_OHLGICKBLKM_OFFSET))(this, a1);
		}

		::System::Void EKOLMKMDCNB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_EKOLMKMDCNB_OFFSET))(this, a1);
		}

		::System::Void DLHNHEAIJNL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_DLHNHEAIJNL_OFFSET))(this, a1);
		}

		::System::Void COHJKLOABND(::CBOICBCAHBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBOICBCAHBE*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_COHJKLOABND_OFFSET))(this, a1);
		}

		::System::Void KHMMAGNCOBA(::BatchAnimationClipGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BatchAnimationClipGroup*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_KHMMAGNCOBA_OFFSET))(this, a1);
		}

		::System::Void MPKAFEJFNKN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_MPKAFEJFNKN_OFFSET))(this, a1);
		}

		::System::Void BPKOJGPJJJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_BPKOJGPJJJD_OFFSET))(this);
		}

		::System::Void NNMKOCFCBOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_NNMKOCFCBOE_OFFSET))(this);
		}

		::System::Void DJPHNGMFOBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_DJPHNGMFOBF_OFFSET))(this);
		}

		::System::Void KKMMBMPMEEO(::PKFMLDAGKKB_DFOBNBPDLPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKFMLDAGKKB_DFOBNBPDLPK*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_KKMMBMPMEEO_OFFSET))(this, a1);
		}

		::PKFMLDAGKKB_DFOBNBPDLPK* GJAPFMBKFHC(::System::String* a1)
		{
			return ((::PKFMLDAGKKB_DFOBNBPDLPK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_GJAPFMBKFHC_OFFSET))(this, a1);
		}

		::PKFMLDAGKKB_DFOBNBPDLPK* CHLOCEBDIPH()
		{
			return ((::PKFMLDAGKKB_DFOBNBPDLPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_CHLOCEBDIPH_OFFSET))(this);
		}

		::System::Boolean DLIHMJBMIIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_DLIHMJBMIIG_OFFSET))(this);
		}

		::System::Void IEIALHLHHHP(::UnityEngine::Rendering::BatchAnimationInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_IEIALHLHHHP_OFFSET))(this, a1);
		}

		::System::Void HJIJNEFPEEN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_HJIJNEFPEEN_OFFSET))(this, a1);
		}

		::System::Void KFOEDAKOILO(::System::String* a1, ::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig*, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_KFOEDAKOILO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HLOFLJIAIFO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_HLOFLJIAIFO_OFFSET))(this, a1);
		}

		::System::String* HEHPNHBCBCM(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_HEHPNHBCBCM_OFFSET))(this, a1);
		}

		::System::String* get_Identity()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_GET_IDENTITY_OFFSET))(this);
		}

		::System::Void set_Identity(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_SET_IDENTITY_OFFSET))(this, a1);
		}

		::System::String* get_FeatureID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_GET_FEATUREID_OFFSET))(this);
		}

		::System::Void set_FeatureID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_SET_FEATUREID_OFFSET))(this, a1);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Void set_PrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_SET_PREFABPATH_OFFSET))(this, a1);
		}

		::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* get_Config()
		{
			return ((::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Action* get_Callback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_GET_CALLBACK_OFFSET))(this);
		}

		::System::Void set_Callback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_SET_CALLBACK_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_Transform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_SET_TRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::BatchAnimationInstance* get_BatchAnimation()
		{
			return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_GET_BATCHANIMATION_OFFSET))(this);
		}

		::System::Void set_BatchAnimation(::UnityEngine::Rendering::BatchAnimationInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_SET_BATCHANIMATION_OFFSET))(this, a1);
		}

		::RPG::Client::BatchAnimationAttachPointMapping* MBOGKNKADJC()
		{
			return ((::RPG::Client::BatchAnimationAttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_MBOGKNKADJC_OFFSET))(this);
		}

	};
