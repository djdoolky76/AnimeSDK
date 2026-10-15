#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class JGDKPONDOLD;
class LKJENIJEBMJ;
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define JEIIMOFONFD_ALKENBJJKDN_OFFSET UNITYSDK_OFFSET(0x1661B710)
#define JEIIMOFONFD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1661D220)
#define JEIIMOFONFD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1661D3A0)
#define JEIIMOFONFD_BKINCAAGDDK_OFFSET UNITYSDK_OFFSET(0x1661BBE0)
#define JEIIMOFONFD_BLGMFGFDKKO_OFFSET UNITYSDK_OFFSET(0x1661AB50)
#define JEIIMOFONFD_CNDPJNCKBBK_OFFSET UNITYSDK_OFFSET(0x1661CD90)
#define JEIIMOFONFD_CODJMCIHDHE_OFFSET UNITYSDK_OFFSET(0x1661CA40)
#define JEIIMOFONFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1661D500)
#define JEIIMOFONFD_EBFNCNCGJCL_OFFSET UNITYSDK_OFFSET(0x1661C400)
#define JEIIMOFONFD_EHFIAPLHIGE_OFFSET UNITYSDK_OFFSET(0x1661C740)
#define JEIIMOFONFD_EJKODKMDFJD_OFFSET UNITYSDK_OFFSET(0x1661D070)
#define JEIIMOFONFD_HFOKMLIJFDK_OFFSET UNITYSDK_OFFSET(0x1661BDE0)
#define JEIIMOFONFD_IGAHAKBKIKP_OFFSET UNITYSDK_OFFSET(0x1661BF60)
#define JEIIMOFONFD_IGNKKEBEGPJ_OFFSET UNITYSDK_OFFSET(0x1661B120)
#define JEIIMOFONFD_IMKFEILBBPF_OFFSET UNITYSDK_OFFSET(0x1661C8C0)
#define JEIIMOFONFD_JBKLEBJDLKF_OFFSET UNITYSDK_OFFSET(0x1661D100)
#define JEIIMOFONFD_JNHLDMEOJCJ_OFFSET UNITYSDK_OFFSET(0x1661D190)
#define JEIIMOFONFD_KAEIPAEMCFG_OFFSET UNITYSDK_OFFSET(0x1661B780)
#define JEIIMOFONFD_KPAKBPMBBJJ_OFFSET UNITYSDK_OFFSET(0x1661B2D0)
#define JEIIMOFONFD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1661B380)
#define JEIIMOFONFD_OGIJFOKLCPC_OFFSET UNITYSDK_OFFSET(0x1661CBC0)
#define JEIIMOFONFD_OPPIDAEJLJJ_OFFSET UNITYSDK_OFFSET(0x1661C5F0)
#define JEIIMOFONFD_PCADIEEEGKB_OFFSET UNITYSDK_OFFSET(0x1661CF60)
#define JEIIMOFONFD__ONBIND_OFFSET UNITYSDK_OFFSET(0x1661ACD0)
#define JEIIMOFONFD__ONTICK_OFFSET UNITYSDK_OFFSET(0x1661AAA0)

inline static constexpr unsigned int JEIIMOFONFD_TypeDefinitionIndex = 72278;

	class JEIIMOFONFD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* JHIPBEPDLKI; // 0x60
		::UnityEngine::UI::Button* GFCOJPHEAOC; // 0x68
		::System::Collections::Generic::List_1<::JGDKPONDOLD*>* KMLNDLEGKAE; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitConfigBase*>* HIMNHBLPLME; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AIAJPIMPMOF; // 0x80
		::UnityEngine::Transform* LECOCIDLOJK; // 0x88
		::UnityEngine::UI::Button* HAEBAKCNIAD; // 0x90
		::UnityEngine::Transform* KKPDEDKKPIO; // 0x98
		::UnityEngine::Transform* CLAIMGMCBDN; // 0xA0
		::System::Collections::Generic::List_1<::LKJENIJEBMJ*>* LBMILLAKLKI; // 0xA8
		::UnityEngine::UI::Button* AJMKJLBBHJE; // 0xB0
		::System::Boolean GMMCCPKCEKK; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_CTOR_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEIIMOFONFD__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD__ONBIND_OFFSET))(this);
		}

		::UnityEngine::GameObject* IGNKKEBEGPJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_IGNKKEBEGPJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void KAEIPAEMCFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_KAEIPAEMCFG_OFFSET))(this);
		}

		::System::Int32 EBFNCNCGJCL(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + JEIIMOFONFD_EBFNCNCGJCL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitLayerConfig* OPPIDAEJLJJ(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + JEIIMOFONFD_OPPIDAEJLJJ_OFFSET))(this, a1);
		}

		::System::Void IGAHAKBKIKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_IGAHAKBKIKP_OFFSET))(this);
		}

		::System::Void BLGMFGFDKKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_BLGMFGFDKKO_OFFSET))(this);
		}

		::System::Void EHFIAPLHIGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_EHFIAPLHIGE_OFFSET))(this);
		}

		::System::Void IMKFEILBBPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_IMKFEILBBPF_OFFSET))(this);
		}

		::System::Void CODJMCIHDHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_CODJMCIHDHE_OFFSET))(this);
		}

		::System::Void OGIJFOKLCPC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEIIMOFONFD_OGIJFOKLCPC_OFFSET))(this, a1);
		}

		::System::Void CNDPJNCKBBK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEIIMOFONFD_CNDPJNCKBBK_OFFSET))(this, a1);
		}

		::System::Void PCADIEEEGKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEIIMOFONFD_PCADIEEEGKB_OFFSET))(this, a1);
		}

		::System::Void BKINCAAGDDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_BKINCAAGDDK_OFFSET))(this);
		}

		::System::Boolean ALKENBJJKDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_ALKENBJJKDN_OFFSET))(this);
		}

		::System::Boolean KPAKBPMBBJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_KPAKBPMBBJJ_OFFSET))(this);
		}

		::RPG::GameCore::GridFightManager* HFOKMLIJFDK()
		{
			return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_HFOKMLIJFDK_OFFSET))(this);
		}

		::System::Void EJKODKMDFJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEIIMOFONFD_EJKODKMDFJD_OFFSET))(this, a1);
		}

		::System::Void JBKLEBJDLKF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEIIMOFONFD_JBKLEBJDLKF_OFFSET))(this, a1);
		}

		::System::Void JNHLDMEOJCJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEIIMOFONFD_JNHLDMEOJCJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIIMOFONFD_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
