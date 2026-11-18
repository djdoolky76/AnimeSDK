#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MonoGamepadSlider_AJFFPJKBFGG.h"

namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define MOLEMOLE_MONOGAMEPADSLIDER_AONJCHOMJMN_OFFSET UNITYSDK_OFFSET(0x12B60F10)
#define MOLEMOLE_MONOGAMEPADSLIDER_BBOHLADACBL_OFFSET UNITYSDK_OFFSET(0x12B61030)
#define MOLEMOLE_MONOGAMEPADSLIDER_CHLIHOPEIPC_OFFSET UNITYSDK_OFFSET(0x12B61790)
#define MOLEMOLE_MONOGAMEPADSLIDER_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x12B5FA00)
#define MOLEMOLE_MONOGAMEPADSLIDER_ECJNKOODKGP_OFFSET UNITYSDK_OFFSET(0x12B610F0)
#define MOLEMOLE_MONOGAMEPADSLIDER_FHEBNAJKEFP_OFFSET UNITYSDK_OFFSET(0x12B60FA0)
#define MOLEMOLE_MONOGAMEPADSLIDER_FNNGPEIIPNC_OFFSET UNITYSDK_OFFSET(0x12B5E8A0)
#define MOLEMOLE_MONOGAMEPADSLIDER_GBLEKEAPMLK_OFFSET UNITYSDK_OFFSET(0x12B616A0)
#define MOLEMOLE_MONOGAMEPADSLIDER_GCMIFBNEFCJ_OFFSET UNITYSDK_OFFSET(0x12B61850)
#define MOLEMOLE_MONOGAMEPADSLIDER_GFMAJJCMDNB_OFFSET UNITYSDK_OFFSET(0x12B616F0)
#define MOLEMOLE_MONOGAMEPADSLIDER_HDGEIGKCIAM_OFFSET UNITYSDK_OFFSET(0x12B5E920)
#define MOLEMOLE_MONOGAMEPADSLIDER_HEDKEJGHLJK_OFFSET UNITYSDK_OFFSET(0x12B61040)
#define MOLEMOLE_MONOGAMEPADSLIDER_HLDEFJIDOMO_OFFSET UNITYSDK_OFFSET(0x12B5F770)
#define MOLEMOLE_MONOGAMEPADSLIDER_IDDBBFMNJMP_OFFSET UNITYSDK_OFFSET(0x12B5EF00)
#define MOLEMOLE_MONOGAMEPADSLIDER_ISFUNCTIONENABLED_OFFSET UNITYSDK_OFFSET(0x12B5F370)
#define MOLEMOLE_MONOGAMEPADSLIDER_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x12B5F1F0)
#define MOLEMOLE_MONOGAMEPADSLIDER_JCNKJHBDAOP_OFFSET UNITYSDK_OFFSET(0x12B605A0)
#define MOLEMOLE_MONOGAMEPADSLIDER_KBJNGKNJDLH_OFFSET UNITYSDK_OFFSET(0x12B5E1C0)
#define MOLEMOLE_MONOGAMEPADSLIDER_KJLKHOPODEA_OFFSET UNITYSDK_OFFSET(0x12B5EFA0)
#define MOLEMOLE_MONOGAMEPADSLIDER_KMKNDCPHIHC_OFFSET UNITYSDK_OFFSET(0x12B61900)
#define MOLEMOLE_MONOGAMEPADSLIDER_KPFKOCJJPBG_OFFSET UNITYSDK_OFFSET(0x12B609C0)
#define MOLEMOLE_MONOGAMEPADSLIDER_LLBDDDHHBGN_OFFSET UNITYSDK_OFFSET(0x12B61780)
#define MOLEMOLE_MONOGAMEPADSLIDER_MBCEBFOBHAM_OFFSET UNITYSDK_OFFSET(0x12B5F6D0)
#define MOLEMOLE_MONOGAMEPADSLIDER_MLKOKAOHION_OFFSET UNITYSDK_OFFSET(0x12B5E250)
#define MOLEMOLE_MONOGAMEPADSLIDER_MPNKJHOIHPM_OFFSET UNITYSDK_OFFSET(0x12B608D0)
#define MOLEMOLE_MONOGAMEPADSLIDER_NFDGGLHMJNB_OFFSET UNITYSDK_OFFSET(0x12B60010)
#define MOLEMOLE_MONOGAMEPADSLIDER_OCKMLIPJIMF_OFFSET UNITYSDK_OFFSET(0x12B5FFB0)
#define MOLEMOLE_MONOGAMEPADSLIDER_OFJBDPEGGMC_OFFSET UNITYSDK_OFFSET(0x12B60900)
#define MOLEMOLE_MONOGAMEPADSLIDER_OJBPANALCCG_OFFSET UNITYSDK_OFFSET(0x12B5E2A0)
#define MOLEMOLE_MONOGAMEPADSLIDER_SETOVERRIDESLIDESTEP_OFFSET UNITYSDK_OFFSET(0x12B5E150)
#define MOLEMOLE_MONOGAMEPADSLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B60830)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadSlider_TypeDefinitionIndex = 57493;

	class MonoGamepadSlider : public ::MoleMole::MonoGamepadModule
	{
	public:
		::UnityEngine::UI::Extension::UISlider* _slider; // 0xF0
		::UnityEngine::UI::Slider* _unitySlider; // 0xF8
		::System::Single _slideStep; // 0x100
		::MoleMole::InputLogicEventType _slideNegativeEvent; // 0x104
		::MoleMole::InputLogicEventType _slidePositiveEvent; // 0x108
		::MoleMole::InputLogicEventType _slideAxisEvent; // 0x10C
		::System::Boolean _allowLoop; // 0x110
		::System::Byte _padding0[0x7];
		::UnityEngine::UI::Extension::UIButtonEx* _addButton; // 0x118
		::UnityEngine::UI::Extension::UIButtonEx* _reduceButton; // 0x120
		::System::Boolean _enablePressSpeedUp; // 0x128
		::System::Byte _padding1[0x3];
		::System::Single JHKPJGPMKJH; // 0x12C
		::System::Single BIADMHGJMND; // 0x130
		::System::Single MBOKCGJOBKJ; // 0x134
		::System::Single EGNCMLGIHDF; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER__CTOR_OFFSET))(this);
		}

		::System::Void SetOverrideSlideStep(::System::Single KKIAHJODOIA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_SETOVERRIDESLIDESTEP_OFFSET))(this, KKIAHJODOIA);
		}

		::System::Void KBJNGKNJDLH(::System::Boolean MNDGBAGHIBF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_KBJNGKNJDLH_OFFSET))(this, MNDGBAGHIBF);
		}

		::System::Void FNNGPEIIPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_FNNGPEIIPNC_OFFSET))(this);
		}

		::System::Void IDDBBFMNJMP(::System::Boolean MNDGBAGHIBF, ::System::Boolean GHGCCMKDIPO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_IDDBBFMNJMP_OFFSET))(this, MNDGBAGHIBF, GHGCCMKDIPO);
		}

		::System::Boolean KJLKHOPODEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_KJLKHOPODEA_OFFSET))(this);
		}

		::System::Boolean IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean IsFunctionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_ISFUNCTIONENABLED_OFFSET))(this);
		}

		::System::Void MBCEBFOBHAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_MBCEBFOBHAM_OFFSET))(this);
		}

		::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_DIHCGHDHPJP_OFFSET))(this, PKBLAMDICKB);
		}

		static ::System::Single MPNKJHOIHPM(::System::Single EHPAJFODHIP, ::System::Single FBCNNPLFAAG, ::System::Single GOKEGHENOGP, ::MoleMole::MonoGamepadSlider_AJFFPJKBFGG& param_3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::MoleMole::MonoGamepadSlider_AJFFPJKBFGG&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_MPNKJHOIHPM_OFFSET))(EHPAJFODHIP, FBCNNPLFAAG, GOKEGHENOGP, param_3);
		}

		::System::Void OFJBDPEGGMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_OFJBDPEGGMC_OFFSET))(this);
		}

		::System::Void KPFKOCJJPBG(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_KPFKOCJJPBG_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean AONJCHOMJMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_AONJCHOMJMN_OFFSET))(this);
		}

		::System::Boolean FHEBNAJKEFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_FHEBNAJKEFP_OFFSET))(this);
		}

		::System::Void BBOHLADACBL(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_BBOHLADACBL_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::RectTransform_Axis JCNKJHBDAOP()
		{
			return ((::UnityEngine::RectTransform_Axis(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_JCNKJHBDAOP_OFFSET))(this);
		}

		::System::Boolean HEDKEJGHLJK(::MoleMole::InputActionEvent MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_HEDKEJGHLJK_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OJBPANALCCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_OJBPANALCCG_OFFSET))(this);
		}

		::System::Single OCKMLIPJIMF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_OCKMLIPJIMF_OFFSET))(this);
		}

		::System::Boolean NFDGGLHMJNB(::System::Single IFAPBNGENJB, ::System::Boolean NHCBLBIHEAJ, ::System::Boolean LHKAIMOMMLD)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_NFDGGLHMJNB_OFFSET))(this, IFAPBNGENJB, NHCBLBIHEAJ, LHKAIMOMMLD);
		}

		::System::Void MLKOKAOHION()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_MLKOKAOHION_OFFSET))(this);
		}

		::System::Boolean GBLEKEAPMLK(::System::Boolean NHCBLBIHEAJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_GBLEKEAPMLK_OFFSET))(this, NHCBLBIHEAJ);
		}

		::System::Void HDGEIGKCIAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_HDGEIGKCIAM_OFFSET))(this);
		}

		::System::Boolean GFMAJJCMDNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_GFMAJJCMDNB_OFFSET))(this);
		}

		::System::Int32 ECJNKOODKGP(::System::Single GHFAANONKBP, ::System::Boolean NHCBLBIHEAJ, ::System::Boolean LHKAIMOMMLD)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_ECJNKOODKGP_OFFSET))(this, GHFAANONKBP, NHCBLBIHEAJ, LHKAIMOMMLD);
		}

		::System::Void LLBDDDHHBGN(::System::Boolean MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_LLBDDDHHBGN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void CHLIHOPEIPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_CHLIHOPEIPC_OFFSET))(this);
		}

		::System::Void HLDEFJIDOMO(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_HLDEFJIDOMO_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void GCMIFBNEFCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_GCMIFBNEFCJ_OFFSET))(this);
		}

		::System::Void KMKNDCPHIHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_KMKNDCPHIHC_OFFSET))(this);
		}
	};
}
