#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
class CKFEAPMJFCI;
class LACLKDPNNLH;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define BPIAOGPMLEI_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B603080)
#define BPIAOGPMLEI_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B603150)
#define BPIAOGPMLEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6031F0)
#define BPIAOGPMLEI_HPDKKJKKDPO_OFFSET UNITYSDK_OFFSET(0x1B602840)
#define BPIAOGPMLEI_MJCOGAOPKJC_OFFSET UNITYSDK_OFFSET(0x1B602DB0)
#define BPIAOGPMLEI_NFGHPHBFEGE_OFFSET UNITYSDK_OFFSET(0x1B602F60)
#define BPIAOGPMLEI_OLEAEBNECBF_OFFSET UNITYSDK_OFFSET(0x1B602EB0)
#define BPIAOGPMLEI_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1B6027F0)
#define BPIAOGPMLEI_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1B602790)
#define BPIAOGPMLEI_PAICDHFMCGK_OFFSET UNITYSDK_OFFSET(0x1B602CC0)
#define BPIAOGPMLEI__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B602B30)
#define BPIAOGPMLEI__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B602710)
#define BPIAOGPMLEI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B602C70)

inline static constexpr unsigned int BPIAOGPMLEI_TypeDefinitionIndex = 73806;

	class BPIAOGPMLEI : public ::FMPCODLIOLG
	{
	public:
		::LACLKDPNNLH* CMEJGFPKMAC; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::CKFEAPMJFCI* IOOAKAGEMAO; // 0x70
		::System::Boolean KICAHMGNMED; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BPIAOGPMLEI__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_ONRETURN_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI__SETUPVIEW_OFFSET))(this);
		}

		::System::Void PAICDHFMCGK(::RPG::GameCore::StageInvasionMonsterUIData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_PAICDHFMCGK_OFFSET))(this, a1);
		}

		::System::Void HPDKKJKKDPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_HPDKKJKKDPO_OFFSET))(this);
		}

		::RPG::GameCore::StageInvasionMonsterUIData MJCOGAOPKJC()
		{
			return ((::RPG::GameCore::StageInvasionMonsterUIData(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_MJCOGAOPKJC_OFFSET))(this);
		}

		static ::System::Boolean OLEAEBNECBF(::RPG::GameCore::StageInvasionMonsterUIData a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_OLEAEBNECBF_OFFSET))(a1);
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
