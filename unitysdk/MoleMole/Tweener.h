#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPFKLNGNJE.h"
#include "unitysdk/MoleMole/Tweener_AEJMDOMAPNP.h"
#include "unitysdk/OPADOPFDNGD.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define MOLEMOLE_TWEENER_ADDONFINISHED_OFFSET UNITYSDK_OFFSET(0x1A743520)
#define MOLEMOLE_TWEENER_GET_AMOUNTPERDELTA_OFFSET UNITYSDK_OFFSET(0x1A742A40)
#define MOLEMOLE_TWEENER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1A742B60)
#define MOLEMOLE_TWEENER_GET_TWEENFACTOR_OFFSET UNITYSDK_OFFSET(0x1A742AE0)
#define MOLEMOLE_TWEENER_ISSAMPLESTART_OFFSET UNITYSDK_OFFSET(0x1A743460)
#define MOLEMOLE_TWEENER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A7435C0)
#define MOLEMOLE_TWEENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A743230)
#define MOLEMOLE_TWEENER_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x1A743600)
#define MOLEMOLE_TWEENER_PLAYREVERSE_OFFSET UNITYSDK_OFFSET(0x1A743760)
#define MOLEMOLE_TWEENER_PLAY_OFFSET UNITYSDK_OFFSET(0x1A743650)
#define MOLEMOLE_TWEENER_REMOVEONFINISHED_OFFSET UNITYSDK_OFFSET(0x1A743570)
#define MOLEMOLE_TWEENER_RESETTOBEGINNING_OFFSET UNITYSDK_OFFSET(0x1A743280)
#define MOLEMOLE_TWEENER_RESET_OFFSET UNITYSDK_OFFSET(0x1A742C40)
#define MOLEMOLE_TWEENER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x1A743380)
#define MOLEMOLE_TWEENER_SETCURRENTVALUETOEND_OFFSET UNITYSDK_OFFSET(0x1A743A10)
#define MOLEMOLE_TWEENER_SETCURRENTVALUETOSTART_OFFSET UNITYSDK_OFFSET(0x1A7439D0)
#define MOLEMOLE_TWEENER_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x1A743990)
#define MOLEMOLE_TWEENER_SETONFINISHED_OFFSET UNITYSDK_OFFSET(0x1A7434D0)
#define MOLEMOLE_TWEENER_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x1A743950)
#define MOLEMOLE_TWEENER_SET_TWEENFACTOR_OFFSET UNITYSDK_OFFSET(0x1A742AF0)
#define MOLEMOLE_TWEENER_START_OFFSET UNITYSDK_OFFSET(0x1A742CD0)
#define MOLEMOLE_TWEENER_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1A7437B0)
#define MOLEMOLE_TWEENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A742D20)
#define MOLEMOLE_TWEENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A743A50)

namespace MoleMole
{
	inline static constexpr unsigned int Tweener_TypeDefinitionIndex = 82571;

	class Tweener : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Tweener** StaticGet_current()
		{
			return (::MoleMole::Tweener**)Il2CppClass::FromTypeDefinitionIndex(Tweener_TypeDefinitionIndex)->GetStaticField(0x3EBD0);
		}
		::OPADOPFDNGD method; // 0x18
		::MoleMole::Tweener_AEJMDOMAPNP style; // 0x1C
		::UnityEngine::AnimationCurve* animationCurve; // 0x20
		::System::Boolean ignoreTimeScale; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single delay; // 0x2C
		::System::Single duration; // 0x30
		::System::Boolean steeperCurves; // 0x34
		::System::Byte _padding1[0x3];
		::System::Int32 tweenGroup; // 0x38
		::System::Byte _padding2[0x4];
		::UnityEngine::Events::UnityEvent* onFinished; // 0x40
		::UnityEngine::Events::UnityAction* onUpdate; // 0x48
		::UnityEngine::GameObject* eventReceiver; // 0x50
		::System::String* callWhenFinished; // 0x58
		::System::Boolean IPLCEMKNPAG; // 0x60
		::System::Byte _padding3[0x3];
		::System::Single LBIEBGPPMCP; // 0x64
		::System::Single GKAMPJIAJCP; // 0x68
		::System::Single ECKOOJFMBCJ; // 0x6C
		::System::Single IMJPOFNBIEK; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER__CTOR_OFFSET))(this);
		}

		::System::Single get_amountPerDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_GET_AMOUNTPERDELTA_OFFSET))(this);
		}

		::System::Single get_tweenFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_GET_TWEENFACTOR_OFFSET))(this);
		}

		::System::Void set_tweenFactor(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SET_TWEENFACTOR_OFFSET))(this, EGEGIMGMJHN);
		}

		::CMPFKLNGNJE get_direction()
		{
			return ((::CMPFKLNGNJE(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_RESET_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_UPDATE_OFFSET))(this);
		}

		::System::Boolean IsSampleStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_ISSAMPLESTART_OFFSET))(this);
		}

		::System::Void SetOnFinished(::UnityEngine::Events::UnityEvent* PELOJGPHIPJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SETONFINISHED_OFFSET))(this, PELOJGPHIPJ);
		}

		::System::Void AddOnFinished(::UnityEngine::Events::UnityEvent* PELOJGPHIPJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_ADDONFINISHED_OFFSET))(this, PELOJGPHIPJ);
		}

		::System::Void RemoveOnFinished(::UnityEngine::Events::UnityEvent* PELOJGPHIPJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_REMOVEONFINISHED_OFFSET))(this, PELOJGPHIPJ);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Sample(::System::Single CKELPHPMECF, ::System::Boolean GNFAABJPKPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SAMPLE_OFFSET))(this, CKELPHPMECF, GNFAABJPKPN);
		}

		::System::Void PlayForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_PLAYFORWARD_OFFSET))(this);
		}

		::System::Void PlayReverse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_PLAYREVERSE_OFFSET))(this);
		}

		::System::Void Play(::System::Boolean CFJFMMGPGKE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_PLAY_OFFSET))(this, CFJFMMGPGKE);
		}

		::System::Void ResetToBeginning()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_RESETTOBEGINNING_OFFSET))(this);
		}

		::System::Void Toggle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_TOGGLE_OFFSET))(this);
		}

		::System::Void SetStartToCurrentValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SETSTARTTOCURRENTVALUE_OFFSET))(this);
		}

		::System::Void SetEndToCurrentValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SETENDTOCURRENTVALUE_OFFSET))(this);
		}

		::System::Void SetCurrentValueToStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SETCURRENTVALUETOSTART_OFFSET))(this);
		}

		::System::Void SetCurrentValueToEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENER_SETCURRENTVALUETOEND_OFFSET))(this);
		}
	};
}
