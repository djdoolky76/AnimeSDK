#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Rect.h"
class DEBEAKKOHLN;
class IEBPDNHIJOC_MKICGHGINEA;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginSimpleCRPVCamera; }
namespace RPG::GameCore { class CRPVirtualCameraConfigList; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define IEBPDNHIJOC_ALONALBAOHE_1_OFFSET UNITYSDK_OFFSET(0x15EEAAB0)
#define IEBPDNHIJOC_ALONALBAOHE_OFFSET UNITYSDK_OFFSET(0x15EEA800)
#define IEBPDNHIJOC_BAKIEECOECO_OFFSET UNITYSDK_OFFSET(0x15EEB820)
#define IEBPDNHIJOC_BLJJEKIMKOE_OFFSET UNITYSDK_OFFSET(0x15EE8C90)
#define IEBPDNHIJOC_BPPDOHJNENA_OFFSET UNITYSDK_OFFSET(0x15EEA4F0)
#define IEBPDNHIJOC_CTOR_OFFSET UNITYSDK_OFFSET(0x15EEC060)
#define IEBPDNHIJOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EE83C0)
#define IEBPDNHIJOC_DJOCNLOHHOC_OFFSET UNITYSDK_OFFSET(0x15EEBB90)
#define IEBPDNHIJOC_DKOLOMHKNJK_OFFSET UNITYSDK_OFFSET(0x15EE8E80)
#define IEBPDNHIJOC_EAJMPOOOBNE_OFFSET UNITYSDK_OFFSET(0x15EEB300)
#define IEBPDNHIJOC_EFPIBGEKANC_OFFSET UNITYSDK_OFFSET(0x15EE84C0)
#define IEBPDNHIJOC_EJCMOECKIKD_OFFSET UNITYSDK_OFFSET(0x15EE8770)
#define IEBPDNHIJOC_FBDJOABNKOO_OFFSET UNITYSDK_OFFSET(0x15EE8430)
#define IEBPDNHIJOC_FJKBHMJCBID_OFFSET UNITYSDK_OFFSET(0x15EE9190)
#define IEBPDNHIJOC_FJMCPOPMAGD_OFFSET UNITYSDK_OFFSET(0x15EEBF20)
#define IEBPDNHIJOC_FPPKPELNLEH_OFFSET UNITYSDK_OFFSET(0x15EE9310)
#define IEBPDNHIJOC_GFEODMEJJMP_OFFSET UNITYSDK_OFFSET(0x15EE97C0)
#define IEBPDNHIJOC_GOCOPKNJBJJ_OFFSET UNITYSDK_OFFSET(0x15EE8DF0)
#define IEBPDNHIJOC_HNAGBPIDKDE_OFFSET UNITYSDK_OFFSET(0x15EEB1A0)
#define IEBPDNHIJOC_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15EE92A0)
#define IEBPDNHIJOC_IJFDNKPEBFI_OFFSET UNITYSDK_OFFSET(0x15EE8BE0)
#define IEBPDNHIJOC_ILDFEAIKNOH_OFFSET UNITYSDK_OFFSET(0x15EEAFF0)
#define IEBPDNHIJOC_JDOKONIHNAH_OFFSET UNITYSDK_OFFSET(0x15EEA660)
#define IEBPDNHIJOC_JKBMALKHMBC_OFFSET UNITYSDK_OFFSET(0x15EE9F60)
#define IEBPDNHIJOC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15EE8A00)
#define IEBPDNHIJOC_KIOOAMMCHDD_OFFSET UNITYSDK_OFFSET(0x15EEA8C0)
#define IEBPDNHIJOC_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x15EE87C0)
#define IEBPDNHIJOC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15EE8350)
#define IEBPDNHIJOC_LAGMKBFHAAC_OFFSET UNITYSDK_OFFSET(0x15EE91F0)
#define IEBPDNHIJOC_LIOPJDDOIMD_OFFSET UNITYSDK_OFFSET(0x15EE96A0)
#define IEBPDNHIJOC_LKJLBLJEOGA_OFFSET UNITYSDK_OFFSET(0x15EEB090)
#define IEBPDNHIJOC_LNBGONIHPBD_1_OFFSET UNITYSDK_OFFSET(0x15EEAE30)
#define IEBPDNHIJOC_LNBGONIHPBD_OFFSET UNITYSDK_OFFSET(0x15EEAD90)
#define IEBPDNHIJOC_MGLCJAGFOGG_OFFSET UNITYSDK_OFFSET(0x15EE8810)
#define IEBPDNHIJOC_MJBEJEOBENO_OFFSET UNITYSDK_OFFSET(0x15EEACB0)
#define IEBPDNHIJOC_OHPCADPGKOG_OFFSET UNITYSDK_OFFSET(0x15EEAF90)
#define IEBPDNHIJOC_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x15EE8470)

inline static constexpr unsigned int IEBPDNHIJOC_TypeDefinitionIndex = 69900;

	class IEBPDNHIJOC : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Byte>* COLOFAMBLFI; // 0x18
		::Il2CppArray<::System::Object*>* LOCEGHGIHBE; // 0x20
		::UnityEngine::Rect GPMKOAEJMME; // 0x28
		::System::Single AJKJENELNMO; // 0x38
		::System::Boolean DFPCFCBIAHN; // 0x3C
		::System::Boolean OLIKKFEGMAO; // 0x3D
		::System::Byte _padding0[0x2];
		::UnityEngine::Rect MNLNOBNDCGF; // 0x40
		::System::Boolean CMAIFHGGFED; // 0x50
		::System::Boolean IFMIDBLMOEA; // 0x51
		::System::Boolean ANLGCMFHPBE; // 0x52
		::System::Byte _padding1[0x1];
		::System::Int32 FJPBDIMDKLE; // 0x54
		::System::Single KKPEIMJKION; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_DISPOSE_OFFSET))(this);
		}

		::System::Void FBDJOABNKOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_FBDJOABNKOO_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void EJCMOECKIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_EJCMOECKIKD_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BLJJEKIMKOE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_BLJJEKIMKOE_OFFSET))(this, a1);
		}

		::System::Void FJKBHMJCBID(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_FJKBHMJCBID_OFFSET))(this, a1);
		}

		::System::Int32 LAGMKBFHAAC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_LAGMKBFHAAC_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginSimpleCRPVCamera* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginSimpleCRPVCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_HPNDIIPEFLJ_OFFSET))(this);
		}

		::System::Void MGLCJAGFOGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MGLCJAGFOGG_OFFSET))(this);
		}

		::System::Void EFPIBGEKANC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_EFPIBGEKANC_OFFSET))(this);
		}

		::System::Void JKBMALKHMBC(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::CRPVirtualCameraConfigList*>* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::CRPVirtualCameraConfigList*>*, ::System::Single))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_JKBMALKHMBC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BPPDOHJNENA(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4, ::Il2CppArray<::System::String*>* a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_BPPDOHJNENA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void JDOKONIHNAH(::Il2CppArray<::System::String*>* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Byte))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_JDOKONIHNAH_OFFSET))(this, a1, a2);
		}

		::System::Void FPPKPELNLEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_FPPKPELNLEH_OFFSET))(this, a1);
		}

		::System::Void LIOPJDDOIMD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_LIOPJDDOIMD_OFFSET))(this, a1);
		}

		::System::Void KIOOAMMCHDD(::RPG::Client::MonoEffect* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::System::Boolean))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_KIOOAMMCHDD_OFFSET))(this, a1, a2);
		}

		::System::Byte MJBEJEOBENO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MJBEJEOBENO_OFFSET))(this, a1);
		}

		::System::Void ALONALBAOHE(::UnityEngine::GameObject* a1, ::System::Byte a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_ALONALBAOHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LNBGONIHPBD(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_LNBGONIHPBD_OFFSET))(this, a1);
		}

		::System::Void ALONALBAOHE_1(::DEBEAKKOHLN* a1, ::System::Byte a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_ALONALBAOHE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LNBGONIHPBD_1(::DEBEAKKOHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_LNBGONIHPBD_1_OFFSET))(this, a1);
		}

		::System::Void OHPCADPGKOG(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_OHPCADPGKOG_OFFSET))(this, a1);
		}

		::System::Void ILDFEAIKNOH(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_ILDFEAIKNOH_OFFSET))(this, a1);
		}

		::System::Void GFEODMEJJMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_GFEODMEJJMP_OFFSET))(this);
		}

		::System::Void GOCOPKNJBJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_GOCOPKNJBJJ_OFFSET))(this);
		}

		::System::Void IJFDNKPEBFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_IJFDNKPEBFI_OFFSET))(this);
		}

		::System::Void BAKIEECOECO(::IEBPDNHIJOC_MKICGHGINEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEBPDNHIJOC_MKICGHGINEA*))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_BAKIEECOECO_OFFSET))(this, a1);
		}

		::System::Void DJOCNLOHHOC(::IEBPDNHIJOC_MKICGHGINEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEBPDNHIJOC_MKICGHGINEA*))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_DJOCNLOHHOC_OFFSET))(this, a1);
		}

		::System::Void EAJMPOOOBNE(::IEBPDNHIJOC_MKICGHGINEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEBPDNHIJOC_MKICGHGINEA*))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_EAJMPOOOBNE_OFFSET))(this, a1);
		}

		::System::Void LKJLBLJEOGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_LKJLBLJEOGA_OFFSET))(this);
		}

		::System::Void DKOLOMHKNJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_DKOLOMHKNJK_OFFSET))(this);
		}

		::System::Void FJMCPOPMAGD(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_FJMCPOPMAGD_OFFSET))(this, a1, a2);
		}

		::System::Void HNAGBPIDKDE(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_HNAGBPIDKDE_OFFSET))(this, a1, a2);
		}

	};
