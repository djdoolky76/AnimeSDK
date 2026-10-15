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

#define LAJCPEFEOPN_ADD_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5DD5B0)
#define LAJCPEFEOPN_ADD_ONPOSTLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5DD670)
#define LAJCPEFEOPN_ADHPAOEOMEO_OFFSET UNITYSDK_OFFSET(0xB5DE3B0)
#define LAJCPEFEOPN_AFLBCNKMKDG_OFFSET UNITYSDK_OFFSET(0xB5DCFF0)
#define LAJCPEFEOPN_AGAEDEOALMF_OFFSET UNITYSDK_OFFSET(0xB5DE2A0)
#define LAJCPEFEOPN_BOLMEIHNAOK_OFFSET UNITYSDK_OFFSET(0xB5DE3A0)
#define LAJCPEFEOPN_BPBMPCPDPNJ_OFFSET UNITYSDK_OFFSET(0xB5DD8E0)
#define LAJCPEFEOPN_CCJMKPOMLEP_OFFSET UNITYSDK_OFFSET(0xB5DE230)
#define LAJCPEFEOPN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5DE5A0)
#define LAJCPEFEOPN_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0xB5DE340)
#define LAJCPEFEOPN_CGOBHEAEEEB_OFFSET UNITYSDK_OFFSET(0xB5DE3C0)
#define LAJCPEFEOPN_CHNPGJHGFFG_OFFSET UNITYSDK_OFFSET(0xB5DD0B0)
#define LAJCPEFEOPN_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5DB760)
#define LAJCPEFEOPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DE560)
#define LAJCPEFEOPN_DEEMLFIFNBK_OFFSET UNITYSDK_OFFSET(0xB5DC980)
#define LAJCPEFEOPN_DFCBNMBHAKP_OFFSET UNITYSDK_OFFSET(0xB5DD260)
#define LAJCPEFEOPN_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB5DBF40)
#define LAJCPEFEOPN_DIEGGJLIACL_OFFSET UNITYSDK_OFFSET(0xB5DCF90)
#define LAJCPEFEOPN_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xB5DCC30)
#define LAJCPEFEOPN_DPAPDILDIHM_OFFSET UNITYSDK_OFFSET(0xB5DE1B0)
#define LAJCPEFEOPN_DPPBAHPBDAE_OFFSET UNITYSDK_OFFSET(0xB5DD820)
#define LAJCPEFEOPN_FCDODAIKEPD_OFFSET UNITYSDK_OFFSET(0xB5DE3D0)
#define LAJCPEFEOPN_FCNHBDCGFON_OFFSET UNITYSDK_OFFSET(0xB5DD3E0)
#define LAJCPEFEOPN_FMJGBOJMFHJ_OFFSET UNITYSDK_OFFSET(0xB5DE290)
#define LAJCPEFEOPN_GET_INITIALPOSE_OFFSET UNITYSDK_OFFSET(0xB5DD540)
#define LAJCPEFEOPN_GET_SPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xB5DD520)
#define LAJCPEFEOPN_GET_SUPPRESSDISTANCELIFECYCLE_OFFSET UNITYSDK_OFFSET(0xB5DD590)
#define LAJCPEFEOPN_GET_SUPPRESSMOTIONAGENTONSTART_OFFSET UNITYSDK_OFFSET(0xB5DD570)
#define LAJCPEFEOPN_HCNCCLGKAPJ_OFFSET UNITYSDK_OFFSET(0xB5DE480)
#define LAJCPEFEOPN_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB5DE2C0)
#define LAJCPEFEOPN_HKMPCHKMGMN_OFFSET UNITYSDK_OFFSET(0xB5DD730)
#define LAJCPEFEOPN_HPGBPPKCKBF_OFFSET UNITYSDK_OFFSET(0xB5DCF30)
#define LAJCPEFEOPN_IGOPHPJFCIC_OFFSET UNITYSDK_OFFSET(0xB5DC580)
#define LAJCPEFEOPN_IHLCKDJPLCF_OFFSET UNITYSDK_OFFSET(0xB5DD370)
#define LAJCPEFEOPN_INEPIJHGDIA_OFFSET UNITYSDK_OFFSET(0xB5DE210)
#define LAJCPEFEOPN_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xB5DCE90)
#define LAJCPEFEOPN_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xB5DCD00)
#define LAJCPEFEOPN_KJHMAFCIDOC_OFFSET UNITYSDK_OFFSET(0xB5DD100)
#define LAJCPEFEOPN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB5DBA50)
#define LAJCPEFEOPN_LOFNPPGBIBB_OFFSET UNITYSDK_OFFSET(0xB5DE420)
#define LAJCPEFEOPN_MFLANLLEGEK_OFFSET UNITYSDK_OFFSET(0xB5DD310)
#define LAJCPEFEOPN_MGCJADOONGI_OFFSET UNITYSDK_OFFSET(0xB5DCDD0)
#define LAJCPEFEOPN_MGDHGAMGCIO_OFFSET UNITYSDK_OFFSET(0xB5DBE30)
#define LAJCPEFEOPN_MKGAJPPKGMN_OFFSET UNITYSDK_OFFSET(0xB5DE220)
#define LAJCPEFEOPN_MMFAHLFEJOK_OFFSET UNITYSDK_OFFSET(0xB5DE2B0)
#define LAJCPEFEOPN_NABCIBMMFOA_OFFSET UNITYSDK_OFFSET(0xB5DC400)
#define LAJCPEFEOPN_ONJMCEKKDNC_OFFSET UNITYSDK_OFFSET(0xB5DD380)
#define LAJCPEFEOPN_PEEIFBIJHJI_OFFSET UNITYSDK_OFFSET(0xB5DD040)
#define LAJCPEFEOPN_PIHMKCFFLPB_OFFSET UNITYSDK_OFFSET(0xB5DD4A0)
#define LAJCPEFEOPN_PINOKCNDANM_OFFSET UNITYSDK_OFFSET(0xB5DCEE0)
#define LAJCPEFEOPN_PMPOGJILHBF_OFFSET UNITYSDK_OFFSET(0xB5DE4D0)
#define LAJCPEFEOPN_REMOVE_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5DD610)
#define LAJCPEFEOPN_REMOVE_ONPOSTLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5DD6D0)
#define LAJCPEFEOPN_SET_INITIALPOSE_OFFSET UNITYSDK_OFFSET(0xB5DD560)
#define LAJCPEFEOPN_SET_SPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xB5DD530)
#define LAJCPEFEOPN_SET_SUPPRESSDISTANCELIFECYCLE_OFFSET UNITYSDK_OFFSET(0xB5DD5A0)
#define LAJCPEFEOPN_SET_SUPPRESSMOTIONAGENTONSTART_OFFSET UNITYSDK_OFFSET(0xB5DD580)

inline static constexpr unsigned int LAJCPEFEOPN_TypeDefinitionIndex = 69252;

	class LAJCPEFEOPN : public ::System::Object
	{
	public:
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x10
		::BMDDCGIDIBB* PCOHLAAKEMN; // 0x18
		::PEELDCHBLJK* FLMODBLFAGD; // 0x20
		::GNHANKEMGLG* _SpawnGroup_k__BackingField; // 0x28
		::System::String* PLGOIHMNDLO; // 0x30
		::System::String* EOFPCPIHGJA; // 0x38
		::System::Action_1<::LAJCPEFEOPN*>* OnDisposeCallback; // 0x40
		::System::Action_1<::LAJCPEFEOPN*>* OnPostLateUpdateCallback; // 0x48
		::System::Action_1<::LAJCPEFEOPN*>* PNELGAPKCLO; // 0x50
		::System::Single PCECPNFNBFH; // 0x58
		::System::Boolean OIHMEIBDAKJ; // 0x5C
		::System::Boolean FODMOOINMGF; // 0x5D
		::System::Boolean _SuppressDistanceLifecycle_k__BackingField; // 0x5E
		::System::Boolean _SuppressMotionAgentOnStart_k__BackingField; // 0x5F
		::System::Nullable_1<::UnityEngine::Pose> _InitialPose_k__BackingField; // 0x60
		::System::Byte _padding0[0x18];
		::System::Single DNOAFIKANPL; // 0x80
		::System::UInt32 FMAGLGKDEAJ; // 0x84
		::System::Int32 DJKPDGNOKHB; // 0x88
		::System::Single DCKKAHPGIFI; // 0x8C
		::System::Single OKCBJDFDNNG; // 0x90
		::UnityEngine::Vector3 HANLGPEACPL; // 0x94
		::System::Boolean ODCBFIJPEKJ; // 0xA0
		::System::Boolean ECOBDMJJEBD; // 0xA1
		::System::Boolean LFJHKGPGMKN; // 0xA2
		::System::Boolean MPECKIIKDGD; // 0xA3
		::System::Single HGHKDHCEIJB; // 0xA4
		::UnityEngine::Vector3 OGAOJOLPMOH; // 0xA8
		::System::Int32 CPEGMMDCIAI; // 0xB4
		::RPG::Client::EPedestrianV2MotionState HCCHHGLDGGL; // 0xB8
		::System::Single EKHJIFJBBCJ; // 0xBC
		::RPG::Client::PedestrianV2State DLNIGFGLPLJ; // 0xC0
		static ::System::Single* StaticGet_LEDBOINMMLO()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x2670);
		}

		static ::System::Single* StaticGet_KJGAFKIOHBA()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x2674);
		}

		static ::System::Single* StaticGet_KJJGKGKBMKD()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x2678);
		}

		static ::System::Single* StaticGet_JEFNLODHKMG()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAJCPEFEOPN")->GetStaticField(0x267C);
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
