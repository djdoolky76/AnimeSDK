#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
class CCBCNDEPMFN;
class LACLKDPNNLH;
class NNAFEEPMIGK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SwitchBossHeadEffType; }
namespace System { class Object; }

#define PNNBOCOENEE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x184C5BB0)
#define PNNBOCOENEE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x184C5CD0)
#define PNNBOCOENEE_BFCPJFCOOGM_OFFSET UNITYSDK_OFFSET(0x184C5890)
#define PNNBOCOENEE_CMFILMFFGEN_OFFSET UNITYSDK_OFFSET(0x184C57C0)
#define PNNBOCOENEE_CTOR_OFFSET UNITYSDK_OFFSET(0x184C5DC0)
#define PNNBOCOENEE_DOKOJJJGNKE_OFFSET UNITYSDK_OFFSET(0x184C5670)
#define PNNBOCOENEE_HPDKKJKKDPO_OFFSET UNITYSDK_OFFSET(0x184C5430)
#define PNNBOCOENEE_NFGHPHBFEGE_OFFSET UNITYSDK_OFFSET(0x184C5A90)
#define PNNBOCOENEE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x184C53E0)
#define PNNBOCOENEE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x184C5370)
#define PNNBOCOENEE_PAICDHFMCGK_OFFSET UNITYSDK_OFFSET(0x184C56D0)
#define PNNBOCOENEE_PLGJCECJAEJ_OFFSET UNITYSDK_OFFSET(0x184C5990)
#define PNNBOCOENEE__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x184C54E0)
#define PNNBOCOENEE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x184C5310)
#define PNNBOCOENEE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x184C5620)

inline static constexpr unsigned int PNNBOCOENEE_TypeDefinitionIndex = 73738;

	class PNNBOCOENEE : public ::FMPCODLIOLG
	{
	public:
		::CCBCNDEPMFN* IOOAKAGEMAO; // 0x60
		::NNAFEEPMIGK* EKJFNFKADAA; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::LACLKDPNNLH* CMEJGFPKMAC; // 0x78
		::RPG::GameCore::BossHeadEffType GHNBKHDEAKL; // 0x80
		::RPG::GameCore::BossHeadEffType JILGDHCHLCL; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNBOCOENEE_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PNNBOCOENEE__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNBOCOENEE_ONRETURN_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PNNBOCOENEE_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNBOCOENEE__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNBOCOENEE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void DOKOJJJGNKE(::RPG::GameCore::SwitchBossHeadEffType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + PNNBOCOENEE_DOKOJJJGNKE_OFFSET))(this, a1);
		}

		::System::Void PAICDHFMCGK(::RPG::GameCore::StageInvasionMonsterUIData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + PNNBOCOENEE_PAICDHFMCGK_OFFSET))(this, a1);
		}

		::System::Void HPDKKJKKDPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNBOCOENEE_HPDKKJKKDPO_OFFSET))(this);
		}

		::System::Boolean CMFILMFFGEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNBOCOENEE_CMFILMFFGEN_OFFSET))(this);
		}

		::CCBCNDEPMFN* BFCPJFCOOGM(::RPG::GameCore::BossHeadEffType a1)
		{
			return ((::CCBCNDEPMFN*(*)(::PVOID, ::RPG::GameCore::BossHeadEffType))((::PBYTE)hIl2Cpp + PNNBOCOENEE_BFCPJFCOOGM_OFFSET))(this, a1);
		}

		::System::Void PLGJCECJAEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNNBOCOENEE_PLGJCECJAEJ_OFFSET))(this, a1);
		}

		::System::Void NFGHPHBFEGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNNBOCOENEE_NFGHPHBFEGE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNBOCOENEE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNBOCOENEE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
