#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class NEADDHNBPHB;
namespace RPG::Client { class BattleTeamBlockDetailPresenter; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace UnityEngine { class Transform; }

#define AIHIOLBHIDK_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA0710)
#define AIHIOLBHIDK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xEBA0190)
#define AIHIOLBHIDK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xEBA0220)
#define AIHIOLBHIDK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xEBA0100)
#define AIHIOLBHIDK_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xEBA0150)
#define AIHIOLBHIDK_ICEINBONBPK_OFFSET UNITYSDK_OFFSET(0xEBA05D0)
#define AIHIOLBHIDK_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xEBA0270)
#define AIHIOLBHIDK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xEBA0530)
#define AIHIOLBHIDK__ONBIND_OFFSET UNITYSDK_OFFSET(0xEBA0070)

inline static constexpr unsigned int AIHIOLBHIDK_TypeDefinitionIndex = 71179;

	class AIHIOLBHIDK : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::BattleTeamBlockDetailPresenter* OCHMHGBBCJI; // 0x60
		::NEADDHNBPHB* APPIHABBCGK; // 0x68
		::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x70
		::System::Int32 PFIIGLEFKFF; // 0x78
		// static const ::System::String* GIMJIFLANOC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHIOLBHIDK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHIOLBHIDK__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHIOLBHIDK_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHIOLBHIDK_GET_TRANS_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AIHIOLBHIDK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHIOLBHIDK_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::NEADDHNBPHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEADDHNBPHB*))((::PBYTE)hIl2Cpp + AIHIOLBHIDK_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHIOLBHIDK_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void ICEINBONBPK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIHIOLBHIDK_ICEINBONBPK_OFFSET))(this, a1);
		}

	};
