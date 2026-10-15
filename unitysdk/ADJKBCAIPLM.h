#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class BattleMonsterSingleBlockData; }
namespace UnityEngine { class Transform; }

#define ADJKBCAIPLM_CTOR_OFFSET UNITYSDK_OFFSET(0xB1412F0)
#define ADJKBCAIPLM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB140F90)
#define ADJKBCAIPLM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB140FF0)
#define ADJKBCAIPLM_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB141260)
#define ADJKBCAIPLM_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB1412B0)
#define ADJKBCAIPLM_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB1410B0)
#define ADJKBCAIPLM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB141150)

inline static constexpr unsigned int ADJKBCAIPLM_TypeDefinitionIndex = 71764;

	class ADJKBCAIPLM : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::BattleMonsterSingleBlockData* APPIHABBCGK; // 0x60
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJKBCAIPLM_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ADJKBCAIPLM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJKBCAIPLM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJKBCAIPLM_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJKBCAIPLM_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJKBCAIPLM_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJKBCAIPLM_GET_TRANS_OFFSET))(this);
		}

	};
