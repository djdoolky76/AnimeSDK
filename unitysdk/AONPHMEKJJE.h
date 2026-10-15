#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
#include "unitysdk/UnityEngine/Vector2.h"
class AONPHMEKJJE_OGFJMAAFAOI;
class KFELGAIGHAP;
namespace InControl { class PlayerAction; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AONPHMEKJJE_AEAAFDDBOEM_OFFSET UNITYSDK_OFFSET(0x158B8FF0)
#define AONPHMEKJJE_AEMILEDDCIP_OFFSET UNITYSDK_OFFSET(0x158B9EA0)
#define AONPHMEKJJE_AHDAKIJJIHH_OFFSET UNITYSDK_OFFSET(0x158B8510)
#define AONPHMEKJJE_ALABDPPGEJB_OFFSET UNITYSDK_OFFSET(0x158BA5F0)
#define AONPHMEKJJE_BBDEFFPLHDG_OFFSET UNITYSDK_OFFSET(0x158B83F0)
#define AONPHMEKJJE_BKBNDOGLLHM_OFFSET UNITYSDK_OFFSET(0x158BA710)
#define AONPHMEKJJE_BPPHICGEPLG_OFFSET UNITYSDK_OFFSET(0x158B9420)
#define AONPHMEKJJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x158BA840)
#define AONPHMEKJJE_CTOR_OFFSET UNITYSDK_OFFSET(0x158BA720)
#define AONPHMEKJJE_EAIOIEPOIEE_OFFSET UNITYSDK_OFFSET(0x158B97F0)
#define AONPHMEKJJE_ELKCHIBACNG_OFFSET UNITYSDK_OFFSET(0x158B9180)
#define AONPHMEKJJE_FGGMKCMMBFC_OFFSET UNITYSDK_OFFSET(0x158BA170)
#define AONPHMEKJJE_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x158B8180)
#define AONPHMEKJJE_HDFLKMEPCID_OFFSET UNITYSDK_OFFSET(0x158B94C0)
#define AONPHMEKJJE_IDIBOGDPJDP_OFFSET UNITYSDK_OFFSET(0x158B9D50)
#define AONPHMEKJJE_IELPICLGBHJ_OFFSET UNITYSDK_OFFSET(0x158B8BA0)
#define AONPHMEKJJE_JJEJKEMDPMK_OFFSET UNITYSDK_OFFSET(0x158B9290)
#define AONPHMEKJJE_MIJKACLIDCH_OFFSET UNITYSDK_OFFSET(0x158BA430)
#define AONPHMEKJJE_ONINIT_OFFSET UNITYSDK_OFFSET(0x158B8190)
#define AONPHMEKJJE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x158B8220)
#define AONPHMEKJJE_PGPDPOPDBGG_OFFSET UNITYSDK_OFFSET(0x158B8270)
#define AONPHMEKJJE_PHOGKCOMOCH_OFFSET UNITYSDK_OFFSET(0x158B8D90)
#define AONPHMEKJJE_TICK_OFFSET UNITYSDK_OFFSET(0x158B90C0)

inline static constexpr unsigned int AONPHMEKJJE_TypeDefinitionIndex = 60251;

	class AONPHMEKJJE : public ::HBCMHADMLOP
	{
	public:
		::AONPHMEKJJE_OGFJMAAFAOI* MDFJFOKLHIO; // 0x20
		::InControl::PlayerAction* PFNEJIOLGDB; // 0x28
		::AONPHMEKJJE_OGFJMAAFAOI* LIFIMJBBGBN; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* CFHCMFEAIOA; // 0x38
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* LKGLIGEAFFN; // 0x40
		::System::Collections::Generic::HashSet_1<::System::Object*>* EACKJNNAHEO; // 0x48
		::System::Boolean JJNCFGIJFAO; // 0x50
		::System::Boolean MALKMAOMAID; // 0x51
		::System::Byte _padding0[0x2];
		::System::Single INJFEHGFECL; // 0x54
		static ::System::Single* StaticGet_DKMOBOAMDMP()
		{
			return (::System::Single*)UnitySDK::FromName("", "AONPHMEKJJE")->GetStaticField(0x143B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONPHMEKJJE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AONPHMEKJJE_CCTOR_OFFSET))();
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AONPHMEKJJE_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONPHMEKJJE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONPHMEKJJE_ONUNINIT_OFFSET))(this);
		}

		::System::Boolean BBDEFFPLHDG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AONPHMEKJJE_BBDEFFPLHDG_OFFSET))(this, a1);
		}

		::System::Void AHDAKIJJIHH(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a5, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a6, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a7, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a8, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + AONPHMEKJJE_AHDAKIJJIHH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void IELPICLGBHJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AONPHMEKJJE_IELPICLGBHJ_OFFSET))(this, a1);
		}

		::System::Void PHOGKCOMOCH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AONPHMEKJJE_PHOGKCOMOCH_OFFSET))(this, a1);
		}

		::System::Void AEAAFDDBOEM(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + AONPHMEKJJE_AEAAFDDBOEM_OFFSET))(this, a1, a2);
		}

		::System::Void PGPDPOPDBGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONPHMEKJJE_PGPDPOPDBGG_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AONPHMEKJJE_TICK_OFFSET))(this, a1);
		}

		::System::Void ELKCHIBACNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONPHMEKJJE_ELKCHIBACNG_OFFSET))(this);
		}

		::System::Void JJEJKEMDPMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONPHMEKJJE_JJEJKEMDPMK_OFFSET))(this);
		}

		::System::Void BPPHICGEPLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONPHMEKJJE_BPPHICGEPLG_OFFSET))(this);
		}

		::System::Void HDFLKMEPCID(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AONPHMEKJJE_HDFLKMEPCID_OFFSET))(this, a1);
		}

		::System::Void IDIBOGDPJDP(::AONPHMEKJJE_OGFJMAAFAOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AONPHMEKJJE_OGFJMAAFAOI*))((::PBYTE)hIl2Cpp + AONPHMEKJJE_IDIBOGDPJDP_OFFSET))(this, a1);
		}

		::System::Void AEMILEDDCIP(::AONPHMEKJJE_OGFJMAAFAOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AONPHMEKJJE_OGFJMAAFAOI*))((::PBYTE)hIl2Cpp + AONPHMEKJJE_AEMILEDDCIP_OFFSET))(this, a1);
		}

		::System::Boolean FGGMKCMMBFC(::UnityEngine::Vector2 a1, ::AONPHMEKJJE_OGFJMAAFAOI* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::AONPHMEKJJE_OGFJMAAFAOI*))((::PBYTE)hIl2Cpp + AONPHMEKJJE_FGGMKCMMBFC_OFFSET))(this, a1, a2);
		}

		::AONPHMEKJJE_OGFJMAAFAOI* EAIOIEPOIEE(::UnityEngine::Vector2 a1)
		{
			return ((::AONPHMEKJJE_OGFJMAAFAOI*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AONPHMEKJJE_EAIOIEPOIEE_OFFSET))(this, a1);
		}

		::System::Void MIJKACLIDCH(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + AONPHMEKJJE_MIJKACLIDCH_OFFSET))(this, a1);
		}

		::System::Boolean ALABDPPGEJB(::KFELGAIGHAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + AONPHMEKJJE_ALABDPPGEJB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* BKBNDOGLLHM()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONPHMEKJJE_BKBNDOGLLHM_OFFSET))(this);
		}

	};
