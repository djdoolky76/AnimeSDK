#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Rect.h"
class CJJCNKJHNEA;
class DEBEAKKOHLN;
class PHKFMKDHNBO;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginMultiCRPVCamera; }
namespace RPG::GameCore { class CRPVirtualCameraConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define AIINICCOBFB_AENCGFLIIFP_OFFSET UNITYSDK_OFFSET(0xEBA6740)
#define AIINICCOBFB_ALONALBAOHE_1_OFFSET UNITYSDK_OFFSET(0xEBA6AF0)
#define AIINICCOBFB_ALONALBAOHE_OFFSET UNITYSDK_OFFSET(0xEBA6870)
#define AIINICCOBFB_BAKIEECOECO_OFFSET UNITYSDK_OFFSET(0xEBA4130)
#define AIINICCOBFB_BEPNIIDBBMG_OFFSET UNITYSDK_OFFSET(0xEBA4920)
#define AIINICCOBFB_BLJJEKIMKOE_OFFSET UNITYSDK_OFFSET(0xEBA73C0)
#define AIINICCOBFB_BNNGECMJGBL_OFFSET UNITYSDK_OFFSET(0xEBA6000)
#define AIINICCOBFB_BOCBFKDPELO_OFFSET UNITYSDK_OFFSET(0xEBA4980)
#define AIINICCOBFB_BPPDOHJNENA_OFFSET UNITYSDK_OFFSET(0xEBA63B0)
#define AIINICCOBFB_CAKCBPJGANH_OFFSET UNITYSDK_OFFSET(0xEBA24E0)
#define AIINICCOBFB_CGGGGCLFFAD_OFFSET UNITYSDK_OFFSET(0xEBA2CC0)
#define AIINICCOBFB_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA74E0)
#define AIINICCOBFB_DIGPANBGONA_OFFSET UNITYSDK_OFFSET(0xEBA20D0)
#define AIINICCOBFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBA71A0)
#define AIINICCOBFB_DJOCNLOHHOC_OFFSET UNITYSDK_OFFSET(0xEBA4A50)
#define AIINICCOBFB_EAJMPOOOBNE_OFFSET UNITYSDK_OFFSET(0xEBA3B90)
#define AIINICCOBFB_EJCMOECKIKD_OFFSET UNITYSDK_OFFSET(0xEBA72B0)
#define AIINICCOBFB_EJHDFLGFHAL_OFFSET UNITYSDK_OFFSET(0xEBA5E60)
#define AIINICCOBFB_FAKOFGCFHNB_OFFSET UNITYSDK_OFFSET(0xEBA3800)
#define AIINICCOBFB_FBDJOABNKOO_OFFSET UNITYSDK_OFFSET(0xEBA7210)
#define AIINICCOBFB_FJKBHMJCBID_OFFSET UNITYSDK_OFFSET(0xEBA7480)
#define AIINICCOBFB_FJMCPOPMAGD_OFFSET UNITYSDK_OFFSET(0xEBA5330)
#define AIINICCOBFB_FPPKPELNLEH_OFFSET UNITYSDK_OFFSET(0xEBA56F0)
#define AIINICCOBFB_GCFIKNDBCLD_OFFSET UNITYSDK_OFFSET(0xEBA5520)
#define AIINICCOBFB_GOCOPKNJBJJ_OFFSET UNITYSDK_OFFSET(0xEBA3B20)
#define AIINICCOBFB_GPEPKLBIGJH_OFFSET UNITYSDK_OFFSET(0xEBA38B0)
#define AIINICCOBFB_HJCJOGIPAPP_OFFSET UNITYSDK_OFFSET(0xEBA4D60)
#define AIINICCOBFB_HNAGBPIDKDE_OFFSET UNITYSDK_OFFSET(0xEBA22D0)
#define AIINICCOBFB_HNBEOBEGEHG_OFFSET UNITYSDK_OFFSET(0xEBA3F20)
#define AIINICCOBFB_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xEBA2280)
#define AIINICCOBFB_ILDFEAIKNOH_OFFSET UNITYSDK_OFFSET(0xEBA7090)
#define AIINICCOBFB_JDOKONIHNAH_OFFSET UNITYSDK_OFFSET(0xEBA65A0)
#define AIINICCOBFB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xEBA7360)
#define AIINICCOBFB_KBANEIEBMDE_OFFSET UNITYSDK_OFFSET(0xEBA4E20)
#define AIINICCOBFB_KIOOAMMCHDD_OFFSET UNITYSDK_OFFSET(0xEBA6930)
#define AIINICCOBFB_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xEBA7300)
#define AIINICCOBFB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEBA7130)
#define AIINICCOBFB_LAGMKBFHAAC_OFFSET UNITYSDK_OFFSET(0xEBA2400)
#define AIINICCOBFB_LIOPJDDOIMD_OFFSET UNITYSDK_OFFSET(0xEBA5970)
#define AIINICCOBFB_LKJLBLJEOGA_OFFSET UNITYSDK_OFFSET(0xEBA3FC0)
#define AIINICCOBFB_LNBGONIHPBD_1_OFFSET UNITYSDK_OFFSET(0xEBA6ED0)
#define AIINICCOBFB_LNBGONIHPBD_OFFSET UNITYSDK_OFFSET(0xEBA6E30)
#define AIINICCOBFB_MGLLAHPEHPB_OFFSET UNITYSDK_OFFSET(0xEBA5A90)
#define AIINICCOBFB_MJBEJEOBENO_OFFSET UNITYSDK_OFFSET(0xEBA6CF0)
#define AIINICCOBFB_NBBEEFCPLIO_OFFSET UNITYSDK_OFFSET(0xEBA50B0)
#define AIINICCOBFB_OBEOEDKHIHA_OFFSET UNITYSDK_OFFSET(0xEBA5C30)
#define AIINICCOBFB_OHPCADPGKOG_OFFSET UNITYSDK_OFFSET(0xEBA7030)
#define AIINICCOBFB_OPBFGDOKHHG_OFFSET UNITYSDK_OFFSET(0xEBA45C0)
#define AIINICCOBFB_PJIBIJGOINF_OFFSET UNITYSDK_OFFSET(0xEBA58B0)
#define AIINICCOBFB_POEDEHOJOMP_OFFSET UNITYSDK_OFFSET(0xEBA2490)
#define AIINICCOBFB_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xEBA7250)

inline static constexpr unsigned int AIINICCOBFB_TypeDefinitionIndex = 69885;

	class AIINICCOBFB : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Texture*>* BODKNBDDBIP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Byte>* COLOFAMBLFI; // 0x20
		::System::Collections::Generic::List_1<::PHKFMKDHNBO*>* HBHHJKFPLLM; // 0x28
		::Il2CppArray<::CJJCNKJHNEA*>* KJMFJJEAFDA; // 0x30
		::System::Collections::Generic::List_1<::PHKFMKDHNBO*>* AFCCBAMJPKL; // 0x38
		::RPG::GameCore::GameEntity* PFHKDKKPBMF; // 0x40
		::Il2CppArray<::System::Byte>* BJMBPMDODCN; // 0x48
		::UnityEngine::Rect GPMKOAEJMME; // 0x50
		::System::Single KKPEIMJKION; // 0x60
		::UnityEngine::Rect MNLNOBNDCGF; // 0x64
		::System::Boolean EIAEJHBDBCA; // 0x74
		::System::Boolean ODBGAHHJDHJ; // 0x75
		::System::Boolean DAGIGEPKLDE; // 0x76
		::System::Boolean LOPDECIHCII; // 0x77
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_CTOR_OFFSET))(this);
		}

		::System::Void DIGPANBGONA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_DIGPANBGONA_OFFSET))(this);
		}

		::System::Void POEDEHOJOMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_POEDEHOJOMP_OFFSET))(this);
		}

		::System::Void CAKCBPJGANH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_CAKCBPJGANH_OFFSET))(this);
		}

		::System::Void CGGGGCLFFAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_CGGGGCLFFAD_OFFSET))(this);
		}

		::System::Boolean FAKOFGCFHNB(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIINICCOBFB_FAKOFGCFHNB_OFFSET))(this, a1);
		}

		::System::Boolean GPEPKLBIGJH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIINICCOBFB_GPEPKLBIGJH_OFFSET))(this, a1);
		}

		::System::Void GOCOPKNJBJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_GOCOPKNJBJJ_OFFSET))(this);
		}

		::System::Void HNBEOBEGEHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_HNBEOBEGEHG_OFFSET))(this);
		}

		::System::Void EAJMPOOOBNE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIINICCOBFB_EAJMPOOOBNE_OFFSET))(this, a1);
		}

		::System::Void BAKIEECOECO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIINICCOBFB_BAKIEECOECO_OFFSET))(this, a1);
		}

		::System::Void OPBFGDOKHHG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIINICCOBFB_OPBFGDOKHHG_OFFSET))(this, a1);
		}

		::System::Void HJCJOGIPAPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_HJCJOGIPAPP_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>* BOCBFKDPELO(::PHKFMKDHNBO* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>*(*)(::PVOID, ::PHKFMKDHNBO*, ::System::Int32))((::PBYTE)hIl2Cpp + AIINICCOBFB_BOCBFKDPELO_OFFSET))(this, a1, a2);
		}

		::System::String* BEPNIIDBBMG(::PHKFMKDHNBO* a1)
		{
			return ((::System::String*(*)(::PVOID, ::PHKFMKDHNBO*))((::PBYTE)hIl2Cpp + AIINICCOBFB_BEPNIIDBBMG_OFFSET))(this, a1);
		}

		::System::Void DJOCNLOHHOC(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>*))((::PBYTE)hIl2Cpp + AIINICCOBFB_DJOCNLOHHOC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LKJLBLJEOGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_LKJLBLJEOGA_OFFSET))(this);
		}

		::System::Void KBANEIEBMDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_KBANEIEBMDE_OFFSET))(this);
		}

		::System::Void NBBEEFCPLIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_NBBEEFCPLIO_OFFSET))(this);
		}

		::System::Void FJMCPOPMAGD(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + AIINICCOBFB_FJMCPOPMAGD_OFFSET))(this, a1, a2);
		}

		::System::Void HNAGBPIDKDE(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + AIINICCOBFB_HNAGBPIDKDE_OFFSET))(this, a1, a2);
		}

		::System::Void GCFIKNDBCLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_GCFIKNDBCLD_OFFSET))(this);
		}

		::System::Void OBEOEDKHIHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_OBEOEDKHIHA_OFFSET))(this);
		}

		::System::Void EJHDFLGFHAL(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::PHKFMKDHNBO*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::PHKFMKDHNBO*>*))((::PBYTE)hIl2Cpp + AIINICCOBFB_EJHDFLGFHAL_OFFSET))(this, a1, a2);
		}

		::System::Void BPPDOHJNENA(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4, ::Il2CppArray<::System::String*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + AIINICCOBFB_BPPDOHJNENA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BNNGECMJGBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_BNNGECMJGBL_OFFSET))(this);
		}

		::System::Void MGLLAHPEHPB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIINICCOBFB_MGLLAHPEHPB_OFFSET))(this, a1);
		}

		::System::Boolean AENCGFLIIFP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AIINICCOBFB_AENCGFLIIFP_OFFSET))(this, a1);
		}

		::System::Void JDOKONIHNAH(::Il2CppArray<::System::String*>* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Byte))((::PBYTE)hIl2Cpp + AIINICCOBFB_JDOKONIHNAH_OFFSET))(this, a1, a2);
		}

		::System::Void FPPKPELNLEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIINICCOBFB_FPPKPELNLEH_OFFSET))(this, a1);
		}

		::System::Void PJIBIJGOINF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIINICCOBFB_PJIBIJGOINF_OFFSET))(this, a1);
		}

		::System::Void LIOPJDDOIMD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIINICCOBFB_LIOPJDDOIMD_OFFSET))(this, a1);
		}

		::System::Void KIOOAMMCHDD(::RPG::Client::MonoEffect* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::System::Boolean))((::PBYTE)hIl2Cpp + AIINICCOBFB_KIOOAMMCHDD_OFFSET))(this, a1, a2);
		}

		::System::Byte MJBEJEOBENO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AIINICCOBFB_MJBEJEOBENO_OFFSET))(this, a1);
		}

		::System::Void ALONALBAOHE(::UnityEngine::GameObject* a1, ::System::Byte a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + AIINICCOBFB_ALONALBAOHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LNBGONIHPBD(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AIINICCOBFB_LNBGONIHPBD_OFFSET))(this, a1);
		}

		::System::Void ALONALBAOHE_1(::DEBEAKKOHLN* a1, ::System::Byte a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + AIINICCOBFB_ALONALBAOHE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LNBGONIHPBD_1(::DEBEAKKOHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*))((::PBYTE)hIl2Cpp + AIINICCOBFB_LNBGONIHPBD_1_OFFSET))(this, a1);
		}

		::System::Void OHPCADPGKOG(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + AIINICCOBFB_OHPCADPGKOG_OFFSET))(this, a1);
		}

		::System::Void ILDFEAIKNOH(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + AIINICCOBFB_ILDFEAIKNOH_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + AIINICCOBFB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_DISPOSE_OFFSET))(this);
		}

		::System::Void FBDJOABNKOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_FBDJOABNKOO_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void EJCMOECKIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_EJCMOECKIKD_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIINICCOBFB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BLJJEKIMKOE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIINICCOBFB_BLJJEKIMKOE_OFFSET))(this, a1);
		}

		::System::Void FJKBHMJCBID(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIINICCOBFB_FJKBHMJCBID_OFFSET))(this, a1);
		}

		::System::Int32 LAGMKBFHAAC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_LAGMKBFHAAC_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginMultiCRPVCamera* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginMultiCRPVCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIINICCOBFB_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
