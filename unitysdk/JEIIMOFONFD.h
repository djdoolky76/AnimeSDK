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

#define JEIIMOFONFD_ALKENBJJKDN_OFFSET UNITYSDK_OFFSET(0x1662AC00)
#define JEIIMOFONFD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1662C720)
#define JEIIMOFONFD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1662C8A0)
#define JEIIMOFONFD_BKINCAAGDDK_OFFSET UNITYSDK_OFFSET(0x1662B0D0)
#define JEIIMOFONFD_BLGMFGFDKKO_OFFSET UNITYSDK_OFFSET(0x1662A040)
#define JEIIMOFONFD_CNDPJNCKBBK_OFFSET UNITYSDK_OFFSET(0x1662C290)
#define JEIIMOFONFD_CODJMCIHDHE_OFFSET UNITYSDK_OFFSET(0x1662BF40)
#define JEIIMOFONFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1662CA00)
#define JEIIMOFONFD_EBFNCNCGJCL_OFFSET UNITYSDK_OFFSET(0x1662B8F0)
#define JEIIMOFONFD_EHFIAPLHIGE_OFFSET UNITYSDK_OFFSET(0x1662BC40)
#define JEIIMOFONFD_EJKODKMDFJD_OFFSET UNITYSDK_OFFSET(0x1662C570)
#define JEIIMOFONFD_HFOKMLIJFDK_OFFSET UNITYSDK_OFFSET(0x1662B2D0)
#define JEIIMOFONFD_IGAHAKBKIKP_OFFSET UNITYSDK_OFFSET(0x1662B450)
#define JEIIMOFONFD_IGNKKEBEGPJ_OFFSET UNITYSDK_OFFSET(0x1662A610)
#define JEIIMOFONFD_IMKFEILBBPF_OFFSET UNITYSDK_OFFSET(0x1662BDC0)
#define JEIIMOFONFD_JBKLEBJDLKF_OFFSET UNITYSDK_OFFSET(0x1662C600)
#define JEIIMOFONFD_JNHLDMEOJCJ_OFFSET UNITYSDK_OFFSET(0x1662C690)
#define JEIIMOFONFD_KAEIPAEMCFG_OFFSET UNITYSDK_OFFSET(0x1662AC70)
#define JEIIMOFONFD_KPAKBPMBBJJ_OFFSET UNITYSDK_OFFSET(0x1662A7C0)
#define JEIIMOFONFD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1662A870)
#define JEIIMOFONFD_OGIJFOKLCPC_OFFSET UNITYSDK_OFFSET(0x1662C0C0)
#define JEIIMOFONFD_OPPIDAEJLJJ_OFFSET UNITYSDK_OFFSET(0x1662BAE0)
#define JEIIMOFONFD_PCADIEEEGKB_OFFSET UNITYSDK_OFFSET(0x1662C460)
#define JEIIMOFONFD__ONBIND_OFFSET UNITYSDK_OFFSET(0x1662A1C0)
#define JEIIMOFONFD__ONTICK_OFFSET UNITYSDK_OFFSET(0x16629F90)

inline static constexpr unsigned int JEIIMOFONFD_TypeDefinitionIndex = 72279;

	class JEIIMOFONFD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Button* HAEBAKCNIAD; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AIAJPIMPMOF; // 0x68
		::UnityEngine::UI::Button* GFCOJPHEAOC; // 0x70
		::System::Collections::Generic::List_1<::LKJENIJEBMJ*>* LBMILLAKLKI; // 0x78
		::UnityEngine::Transform* CLAIMGMCBDN; // 0x80
		::UnityEngine::Transform* LECOCIDLOJK; // 0x88
		::System::Collections::Generic::List_1<::JGDKPONDOLD*>* KMLNDLEGKAE; // 0x90
		::UnityEngine::Transform* JHIPBEPDLKI; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitConfigBase*>* HIMNHBLPLME; // 0xA0
		::UnityEngine::UI::Button* AJMKJLBBHJE; // 0xA8
		::UnityEngine::Transform* KKPDEDKKPIO; // 0xB0
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
