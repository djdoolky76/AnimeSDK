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

#define LAJCPEFEOPN_ADD_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E3F20)
#define LAJCPEFEOPN_ADD_ONPOSTLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E3FE0)
#define LAJCPEFEOPN_ADHPAOEOMEO_OFFSET UNITYSDK_OFFSET(0xB5E4D20)
#define LAJCPEFEOPN_AFLBCNKMKDG_OFFSET UNITYSDK_OFFSET(0xB5E3950)
#define LAJCPEFEOPN_AGAEDEOALMF_OFFSET UNITYSDK_OFFSET(0xB5E4C10)
#define LAJCPEFEOPN_BOLMEIHNAOK_OFFSET UNITYSDK_OFFSET(0xB5E4D10)
#define LAJCPEFEOPN_BPBMPCPDPNJ_OFFSET UNITYSDK_OFFSET(0xB5E4250)
#define LAJCPEFEOPN_CCJMKPOMLEP_OFFSET UNITYSDK_OFFSET(0xB5E4BA0)
#define LAJCPEFEOPN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5E4F10)
#define LAJCPEFEOPN_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0xB5E4CB0)
#define LAJCPEFEOPN_CGOBHEAEEEB_OFFSET UNITYSDK_OFFSET(0xB5E4D30)
#define LAJCPEFEOPN_CHNPGJHGFFG_OFFSET UNITYSDK_OFFSET(0xB5E3A10)
#define LAJCPEFEOPN_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5E20C0)
#define LAJCPEFEOPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E4ED0)
#define LAJCPEFEOPN_DEEMLFIFNBK_OFFSET UNITYSDK_OFFSET(0xB5E32E0)
#define LAJCPEFEOPN_DFCBNMBHAKP_OFFSET UNITYSDK_OFFSET(0xB5E3BC0)
#define LAJCPEFEOPN_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB5E28A0)
#define LAJCPEFEOPN_DIEGGJLIACL_OFFSET UNITYSDK_OFFSET(0xB5E38F0)
#define LAJCPEFEOPN_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xB5E3590)
#define LAJCPEFEOPN_DPAPDILDIHM_OFFSET UNITYSDK_OFFSET(0xB5E4B20)
#define LAJCPEFEOPN_DPPBAHPBDAE_OFFSET UNITYSDK_OFFSET(0xB5E4190)
#define LAJCPEFEOPN_FCDODAIKEPD_OFFSET UNITYSDK_OFFSET(0xB5E4D40)
#define LAJCPEFEOPN_FCNHBDCGFON_OFFSET UNITYSDK_OFFSET(0xB5E3D40)
#define LAJCPEFEOPN_FMJGBOJMFHJ_OFFSET UNITYSDK_OFFSET(0xB5E4C00)
#define LAJCPEFEOPN_GET_INITIALPOSE_OFFSET UNITYSDK_OFFSET(0xB5E3EA0)
#define LAJCPEFEOPN_GET_SPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xB5E3E80)
#define LAJCPEFEOPN_GET_SUPPRESSDISTANCELIFECYCLE_OFFSET UNITYSDK_OFFSET(0xB5E3F00)
#define LAJCPEFEOPN_GET_SUPPRESSMOTIONAGENTONSTART_OFFSET UNITYSDK_OFFSET(0xB5E3EE0)
#define LAJCPEFEOPN_HCNCCLGKAPJ_OFFSET UNITYSDK_OFFSET(0xB5E4DF0)
#define LAJCPEFEOPN_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB5E4C30)
#define LAJCPEFEOPN_HKMPCHKMGMN_OFFSET UNITYSDK_OFFSET(0xB5E40A0)
#define LAJCPEFEOPN_HPGBPPKCKBF_OFFSET UNITYSDK_OFFSET(0xB5E3890)
#define LAJCPEFEOPN_IGOPHPJFCIC_OFFSET UNITYSDK_OFFSET(0xB5E2EE0)
#define LAJCPEFEOPN_IHLCKDJPLCF_OFFSET UNITYSDK_OFFSET(0xB5E3CD0)
#define LAJCPEFEOPN_INEPIJHGDIA_OFFSET UNITYSDK_OFFSET(0xB5E4B80)
#define LAJCPEFEOPN_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xB5E37F0)
#define LAJCPEFEOPN_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xB5E3660)
#define LAJCPEFEOPN_KJHMAFCIDOC_OFFSET UNITYSDK_OFFSET(0xB5E3A60)
#define LAJCPEFEOPN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB5E23C0)
#define LAJCPEFEOPN_LOFNPPGBIBB_OFFSET UNITYSDK_OFFSET(0xB5E4D90)
#define LAJCPEFEOPN_MFLANLLEGEK_OFFSET UNITYSDK_OFFSET(0xB5E3C70)
#define LAJCPEFEOPN_MGCJADOONGI_OFFSET UNITYSDK_OFFSET(0xB5E3730)
#define LAJCPEFEOPN_MGDHGAMGCIO_OFFSET UNITYSDK_OFFSET(0xB5E2790)
#define LAJCPEFEOPN_MKGAJPPKGMN_OFFSET UNITYSDK_OFFSET(0xB5E4B90)
#define LAJCPEFEOPN_MMFAHLFEJOK_OFFSET UNITYSDK_OFFSET(0xB5E4C20)
#define LAJCPEFEOPN_NABCIBMMFOA_OFFSET UNITYSDK_OFFSET(0xB5E2D40)
#define LAJCPEFEOPN_ONJMCEKKDNC_OFFSET UNITYSDK_OFFSET(0xB5E3CE0)
#define LAJCPEFEOPN_PEEIFBIJHJI_OFFSET UNITYSDK_OFFSET(0xB5E39A0)
#define LAJCPEFEOPN_PIHMKCFFLPB_OFFSET UNITYSDK_OFFSET(0xB5E3E00)
#define LAJCPEFEOPN_PINOKCNDANM_OFFSET UNITYSDK_OFFSET(0xB5E3840)
#define LAJCPEFEOPN_PMPOGJILHBF_OFFSET UNITYSDK_OFFSET(0xB5E4E40)
#define LAJCPEFEOPN_REMOVE_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E3F80)
#define LAJCPEFEOPN_REMOVE_ONPOSTLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E4040)
#define LAJCPEFEOPN_SET_INITIALPOSE_OFFSET UNITYSDK_OFFSET(0xB5E3EC0)
#define LAJCPEFEOPN_SET_SPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xB5E3E90)
#define LAJCPEFEOPN_SET_SUPPRESSDISTANCELIFECYCLE_OFFSET UNITYSDK_OFFSET(0xB5E3F10)
#define LAJCPEFEOPN_SET_SUPPRESSMOTIONAGENTONSTART_OFFSET UNITYSDK_OFFSET(0xB5E3EF0)

inline static constexpr unsigned int LAJCPEFEOPN_TypeDefinitionIndex = 69252;

	class LAJCPEFEOPN : public ::System::Object
	{
	public:
		::PEELDCHBLJK* FLMODBLFAGD; // 0x10
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x18
		::BMDDCGIDIBB* PCOHLAAKEMN; // 0x20
		::System::String* EOFPCPIHGJA; // 0x28
		::System::Action_1<::LAJCPEFEOPN*>* OnPostLateUpdateCallback; // 0x30
		::GNHANKEMGLG* _SpawnGroup_k__BackingField; // 0x38
		::System::String* PLGOIHMNDLO; // 0x40
		::System::Action_1<::LAJCPEFEOPN*>* PNELGAPKCLO; // 0x48
		::System::Action_1<::LAJCPEFEOPN*>* OnDisposeCallback; // 0x50
		::RPG::Client::PedestrianV2State DLNIGFGLPLJ; // 0x58
		::RPG::Client::EPedestrianV2MotionState HCCHHGLDGGL; // 0x5C
		::System::Single EKHJIFJBBCJ; // 0x60
		::System::Single HGHKDHCEIJB; // 0x64
		::System::UInt32 FMAGLGKDEAJ; // 0x68
		::System::Int32 DJKPDGNOKHB; // 0x6C
		::System::Single DCKKAHPGIFI; // 0x70
		::System::Nullable_1<::UnityEngine::Pose> _InitialPose_k__BackingField; // 0x74
		::System::Byte _padding0[0x18];
		::System::Boolean MPECKIIKDGD; // 0x94
		::System::Boolean ODCBFIJPEKJ; // 0x95
		::System::Boolean _SuppressDistanceLifecycle_k__BackingField; // 0x96
		::System::Boolean FODMOOINMGF; // 0x97
		::System::Single PCECPNFNBFH; // 0x98
		::UnityEngine::Vector3 OGAOJOLPMOH; // 0x9C
		::System::Single DNOAFIKANPL; // 0xA8
		::System::Single OKCBJDFDNNG; // 0xAC
		::UnityEngine::Vector3 HANLGPEACPL; // 0xB0
		::System::Int32 CPEGMMDCIAI; // 0xBC
		::System::Boolean LFJHKGPGMKN; // 0xC0
		::System::Boolean _SuppressMotionAgentOnStart_k__BackingField; // 0xC1
		::System::Boolean ECOBDMJJEBD; // 0xC2
		::System::Boolean OIHMEIBDAKJ; // 0xC3
		static ::System::Single* StaticGet_JEFNLODHKMG()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x23D0);
		}

		static ::System::Single* StaticGet_LEDBOINMMLO()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x23D4);
		}

		static ::System::Single* StaticGet_KJJGKGKBMKD()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x23D8);
		}

		static ::System::Single* StaticGet_KJGAFKIOHBA()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x23DC);
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
