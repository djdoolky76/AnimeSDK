#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/RPG/Client/PedestrianV2State.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Pose.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/NEJLIGKNHCC_KKGCNNMCFAP.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class BMDDCGIDIBB;
class CFGLBPHCFGG;
class GNHANKEMGLG;
class KFGKNDNJKMI;
class LAJCPEFEOPN;
class MHHBDDMJOII;
class PEELDCHBLJK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LAJCPEFEOPN_ADD_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xBE759E0)
#define LAJCPEFEOPN_ADD_ONPOSTLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0xBE75AA0)
#define LAJCPEFEOPN_ADHPAOEOMEO_OFFSET UNITYSDK_OFFSET(0xBE767C0)
#define LAJCPEFEOPN_AFLBCNKMKDG_OFFSET UNITYSDK_OFFSET(0xBE75410)
#define LAJCPEFEOPN_AGAEDEOALMF_OFFSET UNITYSDK_OFFSET(0xBE766B0)
#define LAJCPEFEOPN_BOLMEIHNAOK_OFFSET UNITYSDK_OFFSET(0xBE767B0)
#define LAJCPEFEOPN_BPBMPCPDPNJ_OFFSET UNITYSDK_OFFSET(0xBE75CF0)
#define LAJCPEFEOPN_CCJMKPOMLEP_OFFSET UNITYSDK_OFFSET(0xBE76640)
#define LAJCPEFEOPN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE76990)
#define LAJCPEFEOPN_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0xBE76750)
#define LAJCPEFEOPN_CGOBHEAEEEB_OFFSET UNITYSDK_OFFSET(0xBE767D0)
#define LAJCPEFEOPN_CHNPGJHGFFG_OFFSET UNITYSDK_OFFSET(0xBE754D0)
#define LAJCPEFEOPN_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE73BC0)
#define LAJCPEFEOPN_CTOR_OFFSET UNITYSDK_OFFSET(0xBE76960)
#define LAJCPEFEOPN_DEEMLFIFNBK_OFFSET UNITYSDK_OFFSET(0xBE74DB0)
#define LAJCPEFEOPN_DFCBNMBHAKP_OFFSET UNITYSDK_OFFSET(0xBE75680)
#define LAJCPEFEOPN_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBE74390)
#define LAJCPEFEOPN_DIEGGJLIACL_OFFSET UNITYSDK_OFFSET(0xBE753C0)
#define LAJCPEFEOPN_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xBE75060)
#define LAJCPEFEOPN_DPAPDILDIHM_OFFSET UNITYSDK_OFFSET(0xBE765C0)
#define LAJCPEFEOPN_DPPBAHPBDAE_OFFSET UNITYSDK_OFFSET(0xBE75C40)
#define LAJCPEFEOPN_FCDODAIKEPD_OFFSET UNITYSDK_OFFSET(0xBE767E0)
#define LAJCPEFEOPN_FCNHBDCGFON_OFFSET UNITYSDK_OFFSET(0xBE75800)
#define LAJCPEFEOPN_FMJGBOJMFHJ_OFFSET UNITYSDK_OFFSET(0xBE766A0)
#define LAJCPEFEOPN_GET_INITIALPOSE_OFFSET UNITYSDK_OFFSET(0xBE75960)
#define LAJCPEFEOPN_GET_SPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xBE75940)
#define LAJCPEFEOPN_GET_SUPPRESSDISTANCELIFECYCLE_OFFSET UNITYSDK_OFFSET(0xBE759C0)
#define LAJCPEFEOPN_GET_SUPPRESSMOTIONAGENTONSTART_OFFSET UNITYSDK_OFFSET(0xBE759A0)
#define LAJCPEFEOPN_HCNCCLGKAPJ_OFFSET UNITYSDK_OFFSET(0xBE76880)
#define LAJCPEFEOPN_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xBE766D0)
#define LAJCPEFEOPN_HKMPCHKMGMN_OFFSET UNITYSDK_OFFSET(0xBE75B60)
#define LAJCPEFEOPN_HPGBPPKCKBF_OFFSET UNITYSDK_OFFSET(0xBE75360)
#define LAJCPEFEOPN_IGOPHPJFCIC_OFFSET UNITYSDK_OFFSET(0xBE749C0)
#define LAJCPEFEOPN_IHLCKDJPLCF_OFFSET UNITYSDK_OFFSET(0xBE75790)
#define LAJCPEFEOPN_INEPIJHGDIA_OFFSET UNITYSDK_OFFSET(0xBE76620)
#define LAJCPEFEOPN_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xBE752C0)
#define LAJCPEFEOPN_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xBE75130)
#define LAJCPEFEOPN_KJHMAFCIDOC_OFFSET UNITYSDK_OFFSET(0xBE75520)
#define LAJCPEFEOPN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE73EA0)
#define LAJCPEFEOPN_LOFNPPGBIBB_OFFSET UNITYSDK_OFFSET(0xBE76820)
#define LAJCPEFEOPN_MFLANLLEGEK_OFFSET UNITYSDK_OFFSET(0xBE75730)
#define LAJCPEFEOPN_MGCJADOONGI_OFFSET UNITYSDK_OFFSET(0xBE75200)
#define LAJCPEFEOPN_MGDHGAMGCIO_OFFSET UNITYSDK_OFFSET(0xBE74280)
#define LAJCPEFEOPN_MKGAJPPKGMN_OFFSET UNITYSDK_OFFSET(0xBE76630)
#define LAJCPEFEOPN_MMFAHLFEJOK_OFFSET UNITYSDK_OFFSET(0xBE766C0)
#define LAJCPEFEOPN_NABCIBMMFOA_OFFSET UNITYSDK_OFFSET(0xBE74840)
#define LAJCPEFEOPN_ONJMCEKKDNC_OFFSET UNITYSDK_OFFSET(0xBE757A0)
#define LAJCPEFEOPN_PEEIFBIJHJI_OFFSET UNITYSDK_OFFSET(0xBE75460)
#define LAJCPEFEOPN_PIHMKCFFLPB_OFFSET UNITYSDK_OFFSET(0xBE758C0)
#define LAJCPEFEOPN_PINOKCNDANM_OFFSET UNITYSDK_OFFSET(0xBE75310)
#define LAJCPEFEOPN_PMPOGJILHBF_OFFSET UNITYSDK_OFFSET(0xBE768D0)
#define LAJCPEFEOPN_REMOVE_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xBE75A40)
#define LAJCPEFEOPN_REMOVE_ONPOSTLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0xBE75B00)
#define LAJCPEFEOPN_SET_INITIALPOSE_OFFSET UNITYSDK_OFFSET(0xBE75980)
#define LAJCPEFEOPN_SET_SPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xBE75950)
#define LAJCPEFEOPN_SET_SUPPRESSDISTANCELIFECYCLE_OFFSET UNITYSDK_OFFSET(0xBE759D0)
#define LAJCPEFEOPN_SET_SUPPRESSMOTIONAGENTONSTART_OFFSET UNITYSDK_OFFSET(0xBE759B0)

inline static constexpr unsigned int LAJCPEFEOPN_TypeDefinitionIndex = 71206;

	class LAJCPEFEOPN : public ::System::Object
	{
	public:
		::System::Action_1<::LAJCPEFEOPN*>* OnPostLateUpdateCallback; // 0x10
		::System::Action_1<::LAJCPEFEOPN*>* OnDisposeCallback; // 0x18
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x20
		::PEELDCHBLJK* FLMODBLFAGD; // 0x28
		::System::String* PLGOIHMNDLO; // 0x30
		::System::Action_1<::LAJCPEFEOPN*>* PNELGAPKCLO; // 0x38
		::System::String* EOFPCPIHGJA; // 0x40
		::BMDDCGIDIBB* PCOHLAAKEMN; // 0x48
		::GNHANKEMGLG* _SpawnGroup_k__BackingField; // 0x50
		::System::Single HGHKDHCEIJB; // 0x58
		::System::Single PCECPNFNBFH; // 0x5C
		::UnityEngine::Vector3 HANLGPEACPL; // 0x60
		::System::Int32 DJKPDGNOKHB; // 0x6C
		::RPG::Client::EPedestrianV2MotionState HCCHHGLDGGL; // 0x70
		::System::Boolean OIHMEIBDAKJ; // 0x74
		::System::Boolean ODCBFIJPEKJ; // 0x75
		::System::Boolean _SuppressMotionAgentOnStart_k__BackingField; // 0x76
		::System::Boolean FODMOOINMGF; // 0x77
		::System::Nullable_1<::UnityEngine::Pose> _InitialPose_k__BackingField; // 0x78
		::System::Byte _padding0[0x18];
		::System::Boolean ECOBDMJJEBD; // 0x98
		::System::Boolean _SuppressDistanceLifecycle_k__BackingField; // 0x99
		::System::Boolean MPECKIIKDGD; // 0x9A
		::System::Boolean LFJHKGPGMKN; // 0x9B
		::System::Single OKCBJDFDNNG; // 0x9C
		::System::Single DNOAFIKANPL; // 0xA0
		::System::Int32 CPEGMMDCIAI; // 0xA4
		::System::Single DCKKAHPGIFI; // 0xA8
		::RPG::Client::PedestrianV2State DLNIGFGLPLJ; // 0xAC
		::UnityEngine::Vector3 OGAOJOLPMOH; // 0xB0
		::System::Single EKHJIFJBBCJ; // 0xBC
		::System::UInt32 FMAGLGKDEAJ; // 0xC0
		static ::System::Single* StaticGet_KJJGKGKBMKD()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x146E0);
		}

		static ::System::Single* StaticGet_KJGAFKIOHBA()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x146E4);
		}

		static ::System::Single* StaticGet_LEDBOINMMLO()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x146E8);
		}

		static ::System::Single* StaticGet_JEFNLODHKMG()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x146EC);
		}

		// static const ::System::Object CFGCPDGFEHC; // 0x0
		// static const ::System::Object KMNAKCDIJHB; // 0x0
		// static const ::System::Object ODAMIEFLLFM; // 0x0
		// static const ::System::Object FKMDGMLEDOG; // 0x0
		// static const ::System::Object OCEENCGFFEM; // 0x0
		// static const ::System::Object KIHJGGFNHBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAJCPEFEOPN_CCTOR_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::PEELDCHBLJK* a1, ::System::UInt32 a2, ::MHHBDDMJOII* a3, ::NEJLIGKNHCC_KKGCNNMCFAP a4)
		{
			return ((::System::Void(*)(::PVOID, ::PEELDCHBLJK*, ::System::UInt32, ::MHHBDDMJOII*, ::NEJLIGKNHCC_KKGCNNMCFAP))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MGDHGAMGCIO(::System::Action_1<::LAJCPEFEOPN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::LAJCPEFEOPN*>*))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_MGDHGAMGCIO_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void IGOPHPJFCIC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_IGOPHPJFCIC_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void MGCJADOONGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_MGCJADOONGI_OFFSET))(this, a1);
		}

		::System::Void JDEKJLHMPLG(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_JDEKJLHMPLG_OFFSET))(this, a1, a2);
		}

		::System::Void PINOKCNDANM(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_PINOKCNDANM_OFFSET))(this, a1, a2);
		}

		::System::Void HPGBPPKCKBF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_HPGBPPKCKBF_OFFSET))(this, a1);
		}

		::System::Void DIEGGJLIACL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_DIEGGJLIACL_OFFSET))(this, a1);
		}

		::System::Void AFLBCNKMKDG(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_AFLBCNKMKDG_OFFSET))(this, a1, a2);
		}

		::System::Boolean PEEIFBIJHJI(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_PEEIFBIJHJI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CHNPGJHGFFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_CHNPGJHGFFG_OFFSET))(this);
		}

		::System::Void KJHMAFCIDOC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_KJHMAFCIDOC_OFFSET))(this, a1, a2);
		}

		::System::Void DFCBNMBHAKP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_DFCBNMBHAKP_OFFSET))(this, a1, a2);
		}

		::System::Void MFLANLLEGEK(::KFGKNDNJKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFGKNDNJKMI*))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_MFLANLLEGEK_OFFSET))(this, a1);
		}

		::System::Single IHLCKDJPLCF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_IHLCKDJPLCF_OFFSET))(this);
		}

		::System::Single ONJMCEKKDNC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_ONJMCEKKDNC_OFFSET))(this);
		}

		::System::Void FCNHBDCGFON(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_FCNHBDCGFON_OFFSET))(this, a1);
		}

		::System::Void PIHMKCFFLPB(::KFGKNDNJKMI* a1, ::JOGBIBJLPJB a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::KFGKNDNJKMI*, ::JOGBIBJLPJB, ::System::Int32))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_PIHMKCFFLPB_OFFSET))(this, a1, a2, a3);
		}

		::GNHANKEMGLG* get_SpawnGroup()
		{
			return ((::GNHANKEMGLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_GET_SPAWNGROUP_OFFSET))(this);
		}

		::System::Void set_SpawnGroup(::GNHANKEMGLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNHANKEMGLG*))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_SET_SPAWNGROUP_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Pose> get_InitialPose()
		{
			return ((::System::Nullable_1<::UnityEngine::Pose>(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_GET_INITIALPOSE_OFFSET))(this);
		}

		::System::Void set_InitialPose(::System::Nullable_1<::UnityEngine::Pose> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Pose>))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_SET_INITIALPOSE_OFFSET))(this, a1);
		}

		::System::Boolean get_SuppressMotionAgentOnStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_GET_SUPPRESSMOTIONAGENTONSTART_OFFSET))(this);
		}

		::System::Void set_SuppressMotionAgentOnStart(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_SET_SUPPRESSMOTIONAGENTONSTART_OFFSET))(this, a1);
		}

		::System::Boolean get_SuppressDistanceLifecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_GET_SUPPRESSDISTANCELIFECYCLE_OFFSET))(this);
		}

		::System::Void set_SuppressDistanceLifecycle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_SET_SUPPRESSDISTANCELIFECYCLE_OFFSET))(this, a1);
		}

		::System::Void add_OnDisposeCallback(::System::Action_1<::LAJCPEFEOPN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::LAJCPEFEOPN*>*))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_ADD_ONDISPOSECALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_OnDisposeCallback(::System::Action_1<::LAJCPEFEOPN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::LAJCPEFEOPN*>*))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_REMOVE_ONDISPOSECALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_OnPostLateUpdateCallback(::System::Action_1<::LAJCPEFEOPN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::LAJCPEFEOPN*>*))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_ADD_ONPOSTLATEUPDATECALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_OnPostLateUpdateCallback(::System::Action_1<::LAJCPEFEOPN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::LAJCPEFEOPN*>*))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_REMOVE_ONPOSTLATEUPDATECALLBACK_OFFSET))(this, a1);
		}

		::System::Void HKMPCHKMGMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_HKMPCHKMGMN_OFFSET))(this);
		}

		::System::Void DPPBAHPBDAE(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_DPPBAHPBDAE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 DEEMLFIFNBK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_DEEMLFIFNBK_OFFSET))(this);
		}

		::System::Single NABCIBMMFOA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_NABCIBMMFOA_OFFSET))(this);
		}

		::System::Boolean BPBMPCPDPNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_BPBMPCPDPNJ_OFFSET))(this);
		}

		::System::Boolean INEPIJHGDIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_INEPIJHGDIA_OFFSET))(this);
		}

		::System::Boolean MKGAJPPKGMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_MKGAJPPKGMN_OFFSET))(this);
		}

		::System::Boolean CCJMKPOMLEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_CCJMKPOMLEP_OFFSET))(this);
		}

		::UnityEngine::GameObject* DPAPDILDIHM()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_DPAPDILDIHM_OFFSET))(this);
		}

		::System::UInt32 FMJGBOJMFHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_FMJGBOJMFHJ_OFFSET))(this);
		}

		::System::Boolean AGAEDEOALMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_AGAEDEOALMF_OFFSET))(this);
		}

		::System::Boolean MMFAHLFEJOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_MMFAHLFEJOK_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_CECMCADBMDE_OFFSET))(this);
		}

		::RPG::GameCore::NPCBodySize BOLMEIHNAOK()
		{
			return ((::RPG::GameCore::NPCBodySize(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_BOLMEIHNAOK_OFFSET))(this);
		}

		::System::String* ADHPAOEOMEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_ADHPAOEOMEO_OFFSET))(this);
		}

		::System::String* CGOBHEAEEEB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_CGOBHEAEEEB_OFFSET))(this);
		}

		::System::Boolean FCDODAIKEPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_FCDODAIKEPD_OFFSET))(this);
		}

		::System::Boolean LOFNPPGBIBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_LOFNPPGBIBB_OFFSET))(this);
		}

		::System::Void HCNCCLGKAPJ(::CFGLBPHCFGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFGLBPHCFGG*))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_HCNCCLGKAPJ_OFFSET))(this, a1);
		}

		static ::System::Void PMPOGJILHBF(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + LAJCPEFEOPN_PMPOGJILHBF_OFFSET))(a1);
		}

	};
