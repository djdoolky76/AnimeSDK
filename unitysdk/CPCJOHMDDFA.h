#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class ADJKBCAIPLM;
namespace RPG::Client { class BattleMonsterSingleBlockData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CPCJOHMDDFA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCC8CA0)
#define CPCJOHMDDFA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xDCC8DC0)
#define CPCJOHMDDFA_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xDCC8A80)
#define CPCJOHMDDFA_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC8EB0)
#define CPCJOHMDDFA_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xDCC8360)
#define CPCJOHMDDFA_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xDCC8770)
#define CPCJOHMDDFA_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xDCC8610)
#define CPCJOHMDDFA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xDCC89A0)
#define CPCJOHMDDFA_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xDCC8A10)
#define CPCJOHMDDFA_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xDCC8660)
#define CPCJOHMDDFA_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xDCC87E0)
#define CPCJOHMDDFA_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xDCC8B90)
#define CPCJOHMDDFA_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xDCC84A0)
#define CPCJOHMDDFA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xDCC83E0)
#define CPCJOHMDDFA_ONRETURN_OFFSET UNITYSDK_OFFSET(0xDCC8540)
#define CPCJOHMDDFA_PNOLABBBOAJ_OFFSET UNITYSDK_OFFSET(0xDCC8850)
#define CPCJOHMDDFA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xDCC8710)
#define CPCJOHMDDFA___ENSURESINGLEBLOCKPANEL_B__9_0_OFFSET UNITYSDK_OFFSET(0xDCC8EE0)

inline static constexpr unsigned int CPCJOHMDDFA_TypeDefinitionIndex = 71765;

	class CPCJOHMDDFA : public ::FMPCODLIOLG
	{
	public:
		::ADJKBCAIPLM* EIHIEJAOHPC; // 0x60
		::RPG::Client::BattleMonsterSingleBlockData* APPIHABBCGK; // 0x68
		::System::Action* HACFEIKFPOA; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_ONRETURN_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJOHMDDFA__ONDISPOSE_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void PNOLABBBOAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_PNOLABBBOAJ_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_GET_TRANS_OFFSET))(this);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJOHMDDFA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __EnsureSingleBlockPanel_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJOHMDDFA___ENSURESINGLEBLOCKPANEL_B__9_0_OFFSET))(this);
		}

	};
