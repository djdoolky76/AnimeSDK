#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class BJHCEHANJOK;
class CFGFNPDJOCG;
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define BIHPEODCNAB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE3DD70)
#define BIHPEODCNAB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBE3DEF0)
#define BIHPEODCNAB_BLGMFGFDKKO_OFFSET UNITYSDK_OFFSET(0xBE3CEE0)
#define BIHPEODCNAB_CKKONEMLCHJ_OFFSET UNITYSDK_OFFSET(0xBE3CDA0)
#define BIHPEODCNAB_CODJMCIHDHE_OFFSET UNITYSDK_OFFSET(0xBE3D410)
#define BIHPEODCNAB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3E050)
#define BIHPEODCNAB_EBEHFIGHJAM_OFFSET UNITYSDK_OFFSET(0xBE3D990)
#define BIHPEODCNAB_EBFNCNCGJCL_OFFSET UNITYSDK_OFFSET(0xBE3CCF0)
#define BIHPEODCNAB_EHFIAPLHIGE_OFFSET UNITYSDK_OFFSET(0xBE3D0D0)
#define BIHPEODCNAB_EJKODKMDFJD_OFFSET UNITYSDK_OFFSET(0xBE3DBC0)
#define BIHPEODCNAB_HFOKMLIJFDK_OFFSET UNITYSDK_OFFSET(0xBE3C660)
#define BIHPEODCNAB_IGAHAKBKIKP_OFFSET UNITYSDK_OFFSET(0xBE3C7E0)
#define BIHPEODCNAB_IMKFEILBBPF_OFFSET UNITYSDK_OFFSET(0xBE3D2D0)
#define BIHPEODCNAB_JBKLEBJDLKF_OFFSET UNITYSDK_OFFSET(0xBE3DC50)
#define BIHPEODCNAB_JNHLDMEOJCJ_OFFSET UNITYSDK_OFFSET(0xBE3DCE0)
#define BIHPEODCNAB_KAEIPAEMCFG_OFFSET UNITYSDK_OFFSET(0xBE3C190)
#define BIHPEODCNAB_KDFNCIOFNGI_OFFSET UNITYSDK_OFFSET(0xBE3D550)
#define BIHPEODCNAB_KPAKBPMBBJJ_OFFSET UNITYSDK_OFFSET(0xBE3D210)
#define BIHPEODCNAB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBE3D5E0)
#define BIHPEODCNAB_OMCNMPHMHMK_OFFSET UNITYSDK_OFFSET(0xBE3DA10)
#define BIHPEODCNAB__ONBIND_OFFSET UNITYSDK_OFFSET(0xBE3BDE0)

inline static constexpr unsigned int BIHPEODCNAB_TypeDefinitionIndex = 74356;

	class BIHPEODCNAB : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::BJHCEHANJOK*>* KMLNDLEGKAE; // 0x60
		::UnityEngine::UI::Text* ELKINPHPBDC; // 0x68
		::UnityEngine::Transform* JHIPBEPDLKI; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AIAJPIMPMOF; // 0x78
		::UnityEngine::Transform* KKPDEDKKPIO; // 0x80
		::UnityEngine::Transform* CLAIMGMCBDN; // 0x88
		::UnityEngine::Transform* LECOCIDLOJK; // 0x90
		::System::Collections::Generic::List_1<::CFGFNPDJOCG*>* LBMILLAKLKI; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitConfigBase*>* HIMNHBLPLME; // 0xA0
		::UnityEngine::UI::Button* AJFFLOBFJAM; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB__ONBIND_OFFSET))(this);
		}

		::System::Void KAEIPAEMCFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_KAEIPAEMCFG_OFFSET))(this);
		}

		::System::Int32 EBFNCNCGJCL(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + BIHPEODCNAB_EBFNCNCGJCL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitConfigBase* CKKONEMLCHJ(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + BIHPEODCNAB_CKKONEMLCHJ_OFFSET))(this, a1);
		}

		::System::Void IGAHAKBKIKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_IGAHAKBKIKP_OFFSET))(this);
		}

		::System::Void BLGMFGFDKKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_BLGMFGFDKKO_OFFSET))(this);
		}

		::System::Void EHFIAPLHIGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_EHFIAPLHIGE_OFFSET))(this);
		}

		::System::Void IMKFEILBBPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_IMKFEILBBPF_OFFSET))(this);
		}

		::System::Void CODJMCIHDHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_CODJMCIHDHE_OFFSET))(this);
		}

		::System::Void KDFNCIOFNGI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIHPEODCNAB_KDFNCIOFNGI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void OMCNMPHMHMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_OMCNMPHMHMK_OFFSET))(this);
		}

		::RPG::GameCore::GridFightManager* HFOKMLIJFDK()
		{
			return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_HFOKMLIJFDK_OFFSET))(this);
		}

		::System::Boolean EBEHFIGHJAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_EBEHFIGHJAM_OFFSET))(this);
		}

		::System::Boolean KPAKBPMBBJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_KPAKBPMBBJJ_OFFSET))(this);
		}

		::System::Void EJKODKMDFJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIHPEODCNAB_EJKODKMDFJD_OFFSET))(this, a1);
		}

		::System::Void JBKLEBJDLKF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIHPEODCNAB_JBKLEBJDLKF_OFFSET))(this, a1);
		}

		::System::Void JNHLDMEOJCJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIHPEODCNAB_JNHLDMEOJCJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPEODCNAB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
