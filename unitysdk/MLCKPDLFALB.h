#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EFJCLCMOLGO;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }

#define MLCKPDLFALB_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x1B915520)
#define MLCKPDLFALB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B915B10)
#define MLCKPDLFALB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B915C70)
#define MLCKPDLFALB_CLLJFELLOBF_OFFSET UNITYSDK_OFFSET(0x1B9156E0)
#define MLCKPDLFALB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B915DA0)
#define MLCKPDLFALB_DJKLGADAKLB_OFFSET UNITYSDK_OFFSET(0x1B915190)
#define MLCKPDLFALB_FHEBAMAAGPD_OFFSET UNITYSDK_OFFSET(0x1B915A50)
#define MLCKPDLFALB_JNGHLNKBEBL_OFFSET UNITYSDK_OFFSET(0x1B9158A0)
#define MLCKPDLFALB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1B9153E0)
#define MLCKPDLFALB_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x1B915990)
#define MLCKPDLFALB_KLPIMNBCKLG_OFFSET UNITYSDK_OFFSET(0x1B9152E0)
#define MLCKPDLFALB_ODMFECKLNKC_OFFSET UNITYSDK_OFFSET(0x1B915090)
#define MLCKPDLFALB_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1B914FA0)
#define MLCKPDLFALB_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1B914FF0)
#define MLCKPDLFALB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1B915100)
#define MLCKPDLFALB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B914F00)

inline static constexpr unsigned int MLCKPDLFALB_TypeDefinitionIndex = 73578;

	class MLCKPDLFALB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* PPGKFCHILBE; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::UI::Slider* JGOJFHEEAOG; // 0x70
		::RPG::GameCore::FixPoint BMFOCMPIPGD; // 0x78
		// static const ::System::String* OGKGCJNDABA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKPDLFALB_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MLCKPDLFALB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MLCKPDLFALB_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKPDLFALB_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKPDLFALB__ONDISPOSE_OFFSET))(this);
		}

		::System::Void DJKLGADAKLB(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + MLCKPDLFALB_DJKLGADAKLB_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + MLCKPDLFALB_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void CLLJFELLOBF(::RPG::GameCore::AbilityMaxHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + MLCKPDLFALB_CLLJFELLOBF_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKPDLFALB_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void KLPIMNBCKLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKPDLFALB_KLPIMNBCKLG_OFFSET))(this);
		}

		::System::Void ODMFECKLNKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKPDLFALB_ODMFECKLNKC_OFFSET))(this);
		}

		::System::Void JNGHLNKBEBL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLCKPDLFALB_JNGHLNKBEBL_OFFSET))(this, a1);
		}

		::System::Void KCJPBICKMIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLCKPDLFALB_KCJPBICKMIA_OFFSET))(this, a1);
		}

		::System::Void FHEBAMAAGPD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLCKPDLFALB_FHEBAMAAGPD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKPDLFALB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKPDLFALB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
