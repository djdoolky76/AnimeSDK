#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class GPMFOHDCMFF;
class KCMGAIFFBPL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define PMJDPBEPJJC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x188A8770)
#define PMJDPBEPJJC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x188A8860)
#define PMJDPBEPJJC_CKAKLDIKNDH_OFFSET UNITYSDK_OFFSET(0x188A86B0)
#define PMJDPBEPJJC_CTOR_OFFSET UNITYSDK_OFFSET(0x188A8930)
#define PMJDPBEPJJC_KMBAFKAEANH_OFFSET UNITYSDK_OFFSET(0x188A8650)
#define PMJDPBEPJJC_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x188A82B0)
#define PMJDPBEPJJC_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x188A81A0)
#define PMJDPBEPJJC_OIOHMAOHHDP_OFFSET UNITYSDK_OFFSET(0x188A8080)
#define PMJDPBEPJJC_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x188A7F60)
#define PMJDPBEPJJC_ONRETURN_OFFSET UNITYSDK_OFFSET(0x188A85D0)
#define PMJDPBEPJJC__ONBIND_OFFSET UNITYSDK_OFFSET(0x188A7E90)
#define PMJDPBEPJJC__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x188A7ED0)
#define PMJDPBEPJJC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x188A8030)

inline static constexpr unsigned int PMJDPBEPJJC_TypeDefinitionIndex = 73713;

	class PMJDPBEPJJC : public ::FMPCODLIOLG
	{
	public:
		::KCMGAIFFBPL* OJEDBKMMLAI; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::GPMFOHDCMFF* HEBFHCBPMFI; // 0x70
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PMJDPBEPJJC__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMJDPBEPJJC_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJDPBEPJJC__SETUPVIEW_OFFSET))(this);
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
