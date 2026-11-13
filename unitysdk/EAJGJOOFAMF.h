#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class HJIBKPNMDEF;
namespace RPG::Client { class BattleMonsterBehaviorFlagShieldData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define EAJGJOOFAMF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x181D3970)
#define EAJGJOOFAMF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x181D3A90)
#define EAJGJOOFAMF_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x181D3750)
#define EAJGJOOFAMF_CTOR_OFFSET UNITYSDK_OFFSET(0x181D3B80)
#define EAJGJOOFAMF_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x181D32F0)
#define EAJGJOOFAMF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x181D3660)
#define EAJGJOOFAMF_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x181D36E0)
#define EAJGJOOFAMF_IAMPKCMFJPI_OFFSET UNITYSDK_OFFSET(0x181D33D0)
#define EAJGJOOFAMF_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x181D31E0)
#define EAJGJOOFAMF_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x181D3360)
#define EAJGJOOFAMF_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x181D3860)
#define EAJGJOOFAMF_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x181D3020)
#define EAJGJOOFAMF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x181D2F60)
#define EAJGJOOFAMF_ONRETURN_OFFSET UNITYSDK_OFFSET(0x181D30C0)
#define EAJGJOOFAMF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x181D3290)
#define EAJGJOOFAMF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x181D2ED0)
#define EAJGJOOFAMF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x181D3190)
#define EAJGJOOFAMF___ENSURESHIELDPANEL_B__9_0_OFFSET UNITYSDK_OFFSET(0x181D3BB0)

inline static constexpr unsigned int EAJGJOOFAMF_TypeDefinitionIndex = 73769;

	class EAJGJOOFAMF : public ::FMPCODLIOLG
	{
	public:
		::System::String* ODOOODIOECJ; // 0x60
		::System::Action* HACFEIKFPOA; // 0x68
		::HJIBKPNMDEF* EIPPIIAKNJO; // 0x70
		::RPG::Client::BattleMonsterBehaviorFlagShieldData* APPIHABBCGK; // 0x78
		::System::Boolean KICAHMGNMED; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EAJGJOOFAMF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_ONRETURN_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGJOOFAMF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGJOOFAMF__ONDISPOSE_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void IAMPKCMFJPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_IAMPKCMFJPI_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_GET_TRANS_OFFSET))(this);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGJOOFAMF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __EnsureShieldPanel_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGJOOFAMF___ENSURESHIELDPANEL_B__9_0_OFFSET))(this);
		}

	};
