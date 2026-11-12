#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class GPMFOHDCMFF;
class KCMGAIFFBPL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define PMJDPBEPJJC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCC52330)
#define PMJDPBEPJJC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCC52420)
#define PMJDPBEPJJC_CKAKLDIKNDH_OFFSET UNITYSDK_OFFSET(0xCC52270)
#define PMJDPBEPJJC_CTOR_OFFSET UNITYSDK_OFFSET(0xCC524F0)
#define PMJDPBEPJJC_KMBAFKAEANH_OFFSET UNITYSDK_OFFSET(0xCC52210)
#define PMJDPBEPJJC_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0xCC51E60)
#define PMJDPBEPJJC_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0xCC51D50)
#define PMJDPBEPJJC_OIOHMAOHHDP_OFFSET UNITYSDK_OFFSET(0xCC51C30)
#define PMJDPBEPJJC_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xCC51B10)
#define PMJDPBEPJJC_ONRETURN_OFFSET UNITYSDK_OFFSET(0xCC52190)
#define PMJDPBEPJJC__ONBIND_OFFSET UNITYSDK_OFFSET(0xCC51A40)
#define PMJDPBEPJJC__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xCC51A80)
#define PMJDPBEPJJC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xCC51BE0)

inline static constexpr unsigned int PMJDPBEPJJC_TypeDefinitionIndex = 73714;

	class PMJDPBEPJJC : public ::FMPCODLIOLG
	{
	public:
		::GPMFOHDCMFF* HEBFHCBPMFI; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::KCMGAIFFBPL* OJEDBKMMLAI; // 0x70
		::RPG::GameCore::MonsterEnergyBarType MBCDGGEGPFA; // 0x78
		::System::Boolean HAKHCANCCKK; // 0x7C
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
