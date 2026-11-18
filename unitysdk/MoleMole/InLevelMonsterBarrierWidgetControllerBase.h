#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCFLLOLBCLC.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class HJDNNLKBHBA;
namespace DG::Tweening { class Tweener; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_ATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x180F1410)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_BMKOHFHDIEC_OFFSET UNITYSDK_OFFSET(0x180F0E10)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_DETACHENTITY_OFFSET UNITYSDK_OFFSET(0x180F15E0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_DKLLGLNGDKE_OFFSET UNITYSDK_OFFSET(0x180F1C80)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_GET_ISHPTWEENING_OFFSET UNITYSDK_OFFSET(0x180F00C0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_ILAELOCFPKE_OFFSET UNITYSDK_OFFSET(0x180F1A80)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_JMLBBKHGKIN_OFFSET UNITYSDK_OFFSET(0x180F1D40)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_KAOELEGLIME_OFFSET UNITYSDK_OFFSET(0x180F2670)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_KEMKJDOEJAO_OFFSET UNITYSDK_OFFSET(0x180F01C0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_LHCAPLGJFCM_OFFSET UNITYSDK_OFFSET(0x180F1CA0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_LHGOBEIHPDN_OFFSET UNITYSDK_OFFSET(0x180F1C90)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_LKFAMCMGILB_OFFSET UNITYSDK_OFFSET(0x180F1FF0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_NIDLKIHCGAC_OFFSET UNITYSDK_OFFSET(0x180F25C0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_OBECFCFGEFP_OFFSET UNITYSDK_OFFSET(0x180F1DF0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x180F0120)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_PKPAJABGJPE_OFFSET UNITYSDK_OFFSET(0x180F1D30)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x180F0DC0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x180F1A30)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x180F19D0)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelMonsterBarrierWidgetControllerBase_TypeDefinitionIndex = 38602;

	class InLevelMonsterBarrierWidgetControllerBase : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_HpPercentShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InLevelMonsterBarrierWidgetControllerBase_TypeDefinitionIndex)->GetStaticField(0xF030);
		}
		static ::System::Int32* StaticGet_WaveHeightParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InLevelMonsterBarrierWidgetControllerBase_TypeDefinitionIndex)->GetStaticField(0xF034);
		}
		// static const ::System::Single TweenDurationPerUnit; // 0x0
		// static const ::System::Single TweenMinDuration; // 0x0
		// static const ::System::Single TweenMaxDuration; // 0x0
		::HJDNNLKBHBA* _dataComponent; // 0x2C8
		::CCFLLOLBCLC _monsterHpShieldShowType; // 0x2D0
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* _hpProgressGo; // 0x2D8
		::UnityEngine::GameObject* _hpProgressGoBottom; // 0x2E0
		::UnityEngine::UI::Image* _hpProgressImg; // 0x2E8
		::System::Func_1<::System::Single>* _getHpRatioFront; // 0x2F0
		::System::Func_1<::System::Boolean>* _hasMultipleHpBars; // 0x2F8
		::System::Single _lastHpShield; // 0x300
		::System::Int32 _generation; // 0x304
		::System::Single _currentDisplayPercentage; // 0x308
		::System::Single _currentHpDisplayPercentage; // 0x30C
		::System::Single _hpTweenTargetPercentage; // 0x310
		::System::Byte _padding1[0x4];
		::DG::Tweening::Tweener* _percentageTweener; // 0x318
		::DG::Tweening::Tweener* _hpPercentageTweener; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsHpTweening()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_GET_ISHPTWEENING_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_UPDATE_OFFSET))(this);
		}

		::System::Void AttachEntity(::HJDNNLKBHBA* dataComponent, ::CCFLLOLBCLC hpShieldShowType, ::UnityEngine::GameObject* hpProgressGo, ::UnityEngine::GameObject* hpProgressGoBottom, ::System::Func_1<::System::Single>* getHpRatioFront, ::System::Func_1<::System::Boolean>* hasMultipleHpBars)
		{
			return ((::System::Void(*)(::PVOID, ::HJDNNLKBHBA*, ::CCFLLOLBCLC, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Func_1<::System::Single>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_ATTACHENTITY_OFFSET))(this, dataComponent, hpShieldShowType, hpProgressGo, hpProgressGoBottom, getHpRatioFront, hasMultipleHpBars);
		}

		::System::Void DetachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_DETACHENTITY_OFFSET))(this);
		}

		::System::Void ILAELOCFPKE(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_ILAELOCFPKE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single DKLLGLNGDKE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_DKLLGLNGDKE_OFFSET))(this);
		}

		::System::Void KEMKJDOEJAO(::System::Boolean NHFEEPDAMMI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_KEMKJDOEJAO_OFFSET))(this, NHFEEPDAMMI);
		}

		::System::Single LHGOBEIHPDN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_LHGOBEIHPDN_OFFSET))(this);
		}

		::System::Void BMKOHFHDIEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_BMKOHFHDIEC_OFFSET))(this);
		}

		::System::Single LHCAPLGJFCM(::System::Single EJAOAGGJHHA)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_LHCAPLGJFCM_OFFSET))(this, EJAOAGGJHHA);
		}

		::System::Single PKPAJABGJPE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_PKPAJABGJPE_OFFSET))(this);
		}

		::System::Void JMLBBKHGKIN(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_JMLBBKHGKIN_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void OBECFCFGEFP(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_OBECFCFGEFP_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void LKFAMCMGILB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_LKFAMCMGILB_OFFSET))(this);
		}

		::System::Void NIDLKIHCGAC(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_NIDLKIHCGAC_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single KAOELEGLIME()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_KAOELEGLIME_OFFSET))(this);
		}
	};
}
