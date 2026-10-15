#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
class CKFEAPMJFCI;
class LACLKDPNNLH;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define BPIAOGPMLEI_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC1A5EC0)
#define BPIAOGPMLEI_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC1A5F90)
#define BPIAOGPMLEI_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A6030)
#define BPIAOGPMLEI_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC1A5860)
#define BPIAOGPMLEI_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC1A5C00)
#define BPIAOGPMLEI_GKIDKJOOEJC_OFFSET UNITYSDK_OFFSET(0xC1A5D20)
#define BPIAOGPMLEI_HPDKKJKKDPO_OFFSET UNITYSDK_OFFSET(0xC1A5990)
#define BPIAOGPMLEI_NFGHPHBFEGE_OFFSET UNITYSDK_OFFSET(0xC1A5DB0)
#define BPIAOGPMLEI_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC1A5AC0)
#define BPIAOGPMLEI_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC1A5940)
#define BPIAOGPMLEI_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC1A58E0)
#define BPIAOGPMLEI_PAICDHFMCGK_OFFSET UNITYSDK_OFFSET(0xC1A5C50)

inline static constexpr unsigned int BPIAOGPMLEI_TypeDefinitionIndex = 71788;

	class BPIAOGPMLEI : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::CKFEAPMJFCI* IOOAKAGEMAO; // 0x68
		::LACLKDPNNLH* CMEJGFPKMAC; // 0x70
		::System::Boolean KICAHMGNMED; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_ONRETURN_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void PAICDHFMCGK(::RPG::GameCore::StageInvasionMonsterUIData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_PAICDHFMCGK_OFFSET))(this, a1);
		}

		::System::Void HPDKKJKKDPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_HPDKKJKKDPO_OFFSET))(this);
		}

		::RPG::GameCore::StageInvasionMonsterState GKIDKJOOEJC()
		{
			return ((::RPG::GameCore::StageInvasionMonsterState(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_GKIDKJOOEJC_OFFSET))(this);
		}

		::System::Void NFGHPHBFEGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_NFGHPHBFEGE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
