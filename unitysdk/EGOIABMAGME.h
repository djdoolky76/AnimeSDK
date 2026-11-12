#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define EGOIABMAGME_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x152FB280)
#define EGOIABMAGME_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x152FB3E0)
#define EGOIABMAGME_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x152FB040)
#define EGOIABMAGME_CTOR_OFFSET UNITYSDK_OFFSET(0x152FB510)
#define EGOIABMAGME_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x152FA960)
#define EGOIABMAGME_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x152FAFA0)
#define EGOIABMAGME_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x152FAFF0)
#define EGOIABMAGME_GFBBNHFABKN_OFFSET UNITYSDK_OFFSET(0x152FA460)
#define EGOIABMAGME_GPPDCAJLFJD_OFFSET UNITYSDK_OFFSET(0x152FA6D0)
#define EGOIABMAGME_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0x152FB1C0)
#define EGOIABMAGME_JCFDCEBMDEE_OFFSET UNITYSDK_OFFSET(0x152FA360)
#define EGOIABMAGME_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x152FABD0)
#define EGOIABMAGME_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x152FB100)
#define EGOIABMAGME_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0x152FA890)
#define EGOIABMAGME_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x152FA010)
#define EGOIABMAGME_NCIIKKGNKOG_OFFSET UNITYSDK_OFFSET(0x152FA600)
#define EGOIABMAGME_NNONGGPNOGB_OFFSET UNITYSDK_OFFSET(0x152FAB60)
#define EGOIABMAGME_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x152FA0A0)
#define EGOIABMAGME_ONMONSTERHUDCONTENTROOTCHANGE_OFFSET UNITYSDK_OFFSET(0x152FAF40)
#define EGOIABMAGME_ONRETURN_OFFSET UNITYSDK_OFFSET(0x152FA1F0)
#define EGOIABMAGME_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x152FADC0)
#define EGOIABMAGME__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x152FA060)
#define EGOIABMAGME__ONBIND_OFFSET UNITYSDK_OFFSET(0x152F9E80)
#define EGOIABMAGME__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x152FA670)
#define EGOIABMAGME__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x152F9F20)
#define EGOIABMAGME__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x152FA1A0)

inline static constexpr unsigned int EGOIABMAGME_TypeDefinitionIndex = 73767;

	class EGOIABMAGME : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::RectTransform* DDNJLCOOFND; // 0x60
		::RPG::Client::PrefabLoadMeta* AGIHDGFPEFI; // 0x68
		::System::Action* HACFEIKFPOA; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::UnityEngine::Transform* GGLIIDOCCCC; // 0x80
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x88
		::System::Boolean FMNEEONAMNO; // 0x90
		// static const ::System::String* IIFENECAOBG; // 0x0
		// static const ::System::String* CGNGHKIIGCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EGOIABMAGME__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME__INITVARONCE_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EGOIABMAGME_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME_ONRETURN_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME__SETUPVIEW_OFFSET))(this);
		}

		::System::Void GFBBNHFABKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME_GFBBNHFABKN_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NCIIKKGNKOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME_NCIIKKGNKOG_OFFSET))(this);
		}

		::System::Void JCFDCEBMDEE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGOIABMAGME_JCFDCEBMDEE_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EGOIABMAGME_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EGOIABMAGME_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void PDPKAHJGCLM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + EGOIABMAGME_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Void GPPDCAJLFJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME_GPPDCAJLFJD_OFFSET))(this);
		}

		::System::Boolean NNONGGPNOGB(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EGOIABMAGME_NNONGGPNOGB_OFFSET))(this, a1);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EGOIABMAGME_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void KOLBHPFLGHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME_KOLBHPFLGHN_OFFSET))(this);
		}

		::System::Void OnMonsterHUDContentRootChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGOIABMAGME_ONMONSTERHUDCONTENTROOTCHANGE_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME_GET_TRANS_OFFSET))(this);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGOIABMAGME_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGOIABMAGME_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void HDJHJFDNALE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGOIABMAGME_HDJHJFDNALE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOIABMAGME_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
