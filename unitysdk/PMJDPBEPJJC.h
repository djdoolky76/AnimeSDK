#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class GPMFOHDCMFF;
class KCMGAIFFBPL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define PMJDPBEPJJC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC3234B0)
#define PMJDPBEPJJC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC3235A0)
#define PMJDPBEPJJC_CKAKLDIKNDH_OFFSET UNITYSDK_OFFSET(0xC3233F0)
#define PMJDPBEPJJC_CTOR_OFFSET UNITYSDK_OFFSET(0xC323670)
#define PMJDPBEPJJC_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC322C20)
#define PMJDPBEPJJC_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC322D80)
#define PMJDPBEPJJC_KMBAFKAEANH_OFFSET UNITYSDK_OFFSET(0xC323390)
#define PMJDPBEPJJC_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0xC323000)
#define PMJDPBEPJJC_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0xC322EF0)
#define PMJDPBEPJJC_OIOHMAOHHDP_OFFSET UNITYSDK_OFFSET(0xC322DD0)
#define PMJDPBEPJJC_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC322CB0)
#define PMJDPBEPJJC_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC323300)
#define PMJDPBEPJJC__ONBIND_OFFSET UNITYSDK_OFFSET(0xC322BE0)

inline static constexpr unsigned int PMJDPBEPJJC_TypeDefinitionIndex = 71723;

	class PMJDPBEPJJC : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::GPMFOHDCMFF* HEBFHCBPMFI; // 0x68
		::KCMGAIFFBPL* OJEDBKMMLAI; // 0x70
		::System::Boolean HAKHCANCCKK; // 0x78
		::System::Byte _padding0[0x3];
		::RPG::GameCore::MonsterEnergyBarType MBCDGGEGPFA; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJDPBEPJJC__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void MIIHAJHPKAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_MIIHAJHPKAF_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_ONRETURN_OFFSET))(this);
		}

		::System::Void KMBAFKAEANH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_KMBAFKAEANH_OFFSET))(this);
		}

		::System::Void LEHJAPMONNN(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void OIOHMAOHHDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_OIOHMAOHHDP_OFFSET))(this);
		}

		::System::Void CKAKLDIKNDH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_CKAKLDIKNDH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
