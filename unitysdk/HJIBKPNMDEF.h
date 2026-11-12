#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class BattleMonsterBehaviorFlagShieldData; }
namespace UnityEngine { class Transform; }

#define HJIBKPNMDEF_CTOR_OFFSET UNITYSDK_OFFSET(0x16C74660)
#define HJIBKPNMDEF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x16C745D0)
#define HJIBKPNMDEF_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x16C74620)
#define HJIBKPNMDEF_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x16C74420)
#define HJIBKPNMDEF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x16C744C0)
#define HJIBKPNMDEF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16C742D0)
#define HJIBKPNMDEF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16C74360)

inline static constexpr unsigned int HJIBKPNMDEF_TypeDefinitionIndex = 73769;

	class HJIBKPNMDEF : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::BattleMonsterBehaviorFlagShieldData* APPIHABBCGK; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIBKPNMDEF_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HJIBKPNMDEF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIBKPNMDEF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIBKPNMDEF_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIBKPNMDEF_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIBKPNMDEF_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIBKPNMDEF_GET_TRANS_OFFSET))(this);
		}

	};
