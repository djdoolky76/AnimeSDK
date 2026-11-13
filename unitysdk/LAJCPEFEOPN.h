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

#define LAJCPEFEOPN_ADD_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B281380)
#define LAJCPEFEOPN_ADD_ONPOSTLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B281440)
#define LAJCPEFEOPN_ADHPAOEOMEO_OFFSET UNITYSDK_OFFSET(0x1B282170)
#define LAJCPEFEOPN_AFLBCNKMKDG_OFFSET UNITYSDK_OFFSET(0x1B280DB0)
#define LAJCPEFEOPN_AGAEDEOALMF_OFFSET UNITYSDK_OFFSET(0x1B282060)
#define LAJCPEFEOPN_BOLMEIHNAOK_OFFSET UNITYSDK_OFFSET(0x1B282160)
#define LAJCPEFEOPN_BPBMPCPDPNJ_OFFSET UNITYSDK_OFFSET(0x1B2816A0)
#define LAJCPEFEOPN_CCJMKPOMLEP_OFFSET UNITYSDK_OFFSET(0x1B281FF0)
#define LAJCPEFEOPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B282340)
#define LAJCPEFEOPN_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x1B282100)
#define LAJCPEFEOPN_CGOBHEAEEEB_OFFSET UNITYSDK_OFFSET(0x1B282180)
#define LAJCPEFEOPN_CHNPGJHGFFG_OFFSET UNITYSDK_OFFSET(0x1B280E70)
#define LAJCPEFEOPN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B27F570)
#define LAJCPEFEOPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B282310)
#define LAJCPEFEOPN_DEEMLFIFNBK_OFFSET UNITYSDK_OFFSET(0x1B280760)
#define LAJCPEFEOPN_DFCBNMBHAKP_OFFSET UNITYSDK_OFFSET(0x1B281020)
#define LAJCPEFEOPN_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1B27FD40)
#define LAJCPEFEOPN_DIEGGJLIACL_OFFSET UNITYSDK_OFFSET(0x1B280D60)
#define LAJCPEFEOPN_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1B280A00)
#define LAJCPEFEOPN_DPAPDILDIHM_OFFSET UNITYSDK_OFFSET(0x1B281F70)
#define LAJCPEFEOPN_DPPBAHPBDAE_OFFSET UNITYSDK_OFFSET(0x1B2815E0)
#define LAJCPEFEOPN_FCDODAIKEPD_OFFSET UNITYSDK_OFFSET(0x1B282190)
#define LAJCPEFEOPN_FCNHBDCGFON_OFFSET UNITYSDK_OFFSET(0x1B2811A0)
#define LAJCPEFEOPN_FMJGBOJMFHJ_OFFSET UNITYSDK_OFFSET(0x1B282050)
#define LAJCPEFEOPN_GET_INITIALPOSE_OFFSET UNITYSDK_OFFSET(0x1B281300)
#define LAJCPEFEOPN_GET_SPAWNGROUP_OFFSET UNITYSDK_OFFSET(0x1B2812E0)
#define LAJCPEFEOPN_GET_SUPPRESSDISTANCELIFECYCLE_OFFSET UNITYSDK_OFFSET(0x1B281360)
#define LAJCPEFEOPN_GET_SUPPRESSMOTIONAGENTONSTART_OFFSET UNITYSDK_OFFSET(0x1B281340)
#define LAJCPEFEOPN_HCNCCLGKAPJ_OFFSET UNITYSDK_OFFSET(0x1B282230)
#define LAJCPEFEOPN_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x1B282080)
#define LAJCPEFEOPN_HKMPCHKMGMN_OFFSET UNITYSDK_OFFSET(0x1B281500)
#define LAJCPEFEOPN_HPGBPPKCKBF_OFFSET UNITYSDK_OFFSET(0x1B280D00)
#define LAJCPEFEOPN_IGOPHPJFCIC_OFFSET UNITYSDK_OFFSET(0x1B280370)
#define LAJCPEFEOPN_IHLCKDJPLCF_OFFSET UNITYSDK_OFFSET(0x1B281130)
#define LAJCPEFEOPN_INEPIJHGDIA_OFFSET UNITYSDK_OFFSET(0x1B281FD0)
#define LAJCPEFEOPN_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x1B280C60)
#define LAJCPEFEOPN_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x1B280AD0)
#define LAJCPEFEOPN_KJHMAFCIDOC_OFFSET UNITYSDK_OFFSET(0x1B280EC0)
#define LAJCPEFEOPN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B27F850)
#define LAJCPEFEOPN_LOFNPPGBIBB_OFFSET UNITYSDK_OFFSET(0x1B2821D0)
#define LAJCPEFEOPN_MFLANLLEGEK_OFFSET UNITYSDK_OFFSET(0x1B2810D0)
#define LAJCPEFEOPN_MGCJADOONGI_OFFSET UNITYSDK_OFFSET(0x1B280BA0)
#define LAJCPEFEOPN_MGDHGAMGCIO_OFFSET UNITYSDK_OFFSET(0x1B27FC30)
#define LAJCPEFEOPN_MKGAJPPKGMN_OFFSET UNITYSDK_OFFSET(0x1B281FE0)
#define LAJCPEFEOPN_MMFAHLFEJOK_OFFSET UNITYSDK_OFFSET(0x1B282070)
#define LAJCPEFEOPN_NABCIBMMFOA_OFFSET UNITYSDK_OFFSET(0x1B2801F0)
#define LAJCPEFEOPN_ONJMCEKKDNC_OFFSET UNITYSDK_OFFSET(0x1B281140)
#define LAJCPEFEOPN_PEEIFBIJHJI_OFFSET UNITYSDK_OFFSET(0x1B280E00)
#define LAJCPEFEOPN_PIHMKCFFLPB_OFFSET UNITYSDK_OFFSET(0x1B281260)
#define LAJCPEFEOPN_PINOKCNDANM_OFFSET UNITYSDK_OFFSET(0x1B280CB0)
#define LAJCPEFEOPN_PMPOGJILHBF_OFFSET UNITYSDK_OFFSET(0x1B282280)
#define LAJCPEFEOPN_REMOVE_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B2813E0)
#define LAJCPEFEOPN_REMOVE_ONPOSTLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B2814A0)
#define LAJCPEFEOPN_SET_INITIALPOSE_OFFSET UNITYSDK_OFFSET(0x1B281320)
#define LAJCPEFEOPN_SET_SPAWNGROUP_OFFSET UNITYSDK_OFFSET(0x1B2812F0)
#define LAJCPEFEOPN_SET_SUPPRESSDISTANCELIFECYCLE_OFFSET UNITYSDK_OFFSET(0x1B281370)
#define LAJCPEFEOPN_SET_SUPPRESSMOTIONAGENTONSTART_OFFSET UNITYSDK_OFFSET(0x1B281350)

inline static constexpr unsigned int LAJCPEFEOPN_TypeDefinitionIndex = 71206;

	class LAJCPEFEOPN : public ::System::Object
	{
	public:
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x10
		::BMDDCGIDIBB* PCOHLAAKEMN; // 0x18
		::System::String* PLGOIHMNDLO; // 0x20
		::GNHANKEMGLG* _SpawnGroup_k__BackingField; // 0x28
		::System::Action_1<::LAJCPEFEOPN*>* OnDisposeCallback; // 0x30
		::System::Action_1<::LAJCPEFEOPN*>* OnPostLateUpdateCallback; // 0x38
		::System::String* EOFPCPIHGJA; // 0x40
		::PEELDCHBLJK* FLMODBLFAGD; // 0x48
		::System::Action_1<::LAJCPEFEOPN*>* PNELGAPKCLO; // 0x50
		::RPG::Client::PedestrianV2State DLNIGFGLPLJ; // 0x58
		::System::Boolean OIHMEIBDAKJ; // 0x5C
		::System::Boolean ODCBFIJPEKJ; // 0x5D
		::System::Boolean ECOBDMJJEBD; // 0x5E
		::System::Boolean _SuppressDistanceLifecycle_k__BackingField; // 0x5F
		::UnityEngine::Vector3 OGAOJOLPMOH; // 0x60
		::System::Int32 CPEGMMDCIAI; // 0x6C
		::System::Nullable_1<::UnityEngine::Pose> _InitialPose_k__BackingField; // 0x70
		::System::Byte _padding0[0x18];
		::System::Single EKHJIFJBBCJ; // 0x90
		::System::Single DNOAFIKANPL; // 0x94
		::System::Single OKCBJDFDNNG; // 0x98
		::System::Single DCKKAHPGIFI; // 0x9C
		::System::UInt32 FMAGLGKDEAJ; // 0xA0
		::RPG::Client::EPedestrianV2MotionState HCCHHGLDGGL; // 0xA4
		::UnityEngine::Vector3 HANLGPEACPL; // 0xA8
		::System::Boolean MPECKIIKDGD; // 0xB4
		::System::Boolean _SuppressMotionAgentOnStart_k__BackingField; // 0xB5
		::System::Boolean FODMOOINMGF; // 0xB6
		::System::Boolean LFJHKGPGMKN; // 0xB7
		::System::Int32 DJKPDGNOKHB; // 0xB8
		::System::Single PCECPNFNBFH; // 0xBC
		::System::Single HGHKDHCEIJB; // 0xC0
		static ::System::Single* StaticGet_LEDBOINMMLO()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x155E0);
		}

		static ::System::Single* StaticGet_KJGAFKIOHBA()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x155E4);
		}

		static ::System::Single* StaticGet_JEFNLODHKMG()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x155E8);
		}

		static ::System::Single* StaticGet_KJJGKGKBMKD()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x155EC);
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
