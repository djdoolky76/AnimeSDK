#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A769E3105BB55487/BEF6D4843175EE8C.h"
#include "unitysdk/UnityEngine/InputSystem/Pointer.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITYENGINE_INPUTSYSTEM_PEN_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x4000270)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x40006F0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_ERASER_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_FIRSTBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55B10)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_FOURTHBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x27BAC70)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_INRANGE_OFFSET UNITYSDK_OFFSET(0x1E07880)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x40005B0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_SECONDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x385A030)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_THIRDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55AC0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_TILT_OFFSET UNITYSDK_OFFSET(0x3F562E0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_TIP_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_TWIST_OFFSET UNITYSDK_OFFSET(0x3859F20)
#define UNITYENGINE_INPUTSYSTEM_PEN_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x40004C0)
#define UNITYENGINE_INPUTSYSTEM_PEN_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x4000520)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x4000730)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_ERASER_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_FIRSTBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_FOURTHBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55BB0)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_INRANGE_OFFSET UNITYSDK_OFFSET(0x3F55B40)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_SECONDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x385A240)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_THIRDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55B20)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_TILT_OFFSET UNITYSDK_OFFSET(0x3F56380)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_TIP_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_TWIST_OFFSET UNITYSDK_OFFSET(0x1EC5E40)
#define UNITYENGINE_INPUTSYSTEM_PEN__CTOR_OFFSET UNITYSDK_OFFSET(0x3F54170)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Pen_TypeDefinitionIndex = 14527;

	class Pen : public ::UnityEngine::InputSystem::Pointer
	{
	public:
		static ::UnityEngine::InputSystem::Pen** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Pen**)Il2CppClass::FromTypeDefinitionIndex(Pen_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::ButtonControl* _tip_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _eraser_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _firstBarrelButton_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondBarrelButton_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _thirdBarrelButton_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::ButtonControl* _fourthBarrelButton_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::ButtonControl* _inRange_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::Vector2Control* _tilt_k__BackingField; // 0x1F8
		::UnityEngine::InputSystem::Controls::AxisControl* _twist_k__BackingField; // 0x200

		::UnityEngine::InputSystem::Controls::ButtonControl* get_firstBarrelButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_FIRSTBARRELBUTTON_OFFSET))(this);
		}

		::System::Void set_thirdBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_THIRDBARRELBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_eraser()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_ERASER_OFFSET))(this);
		}

		::System::Void set_tilt(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_TILT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_tilt()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_TILT_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_MAKECURRENT_OFFSET))(this);
		}

		::System::Void set_firstBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_FIRSTBARRELBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_ONREMOVED_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_Item(::A769E3105BB55487::BEF6D4843175EE8C A59E604D1E9B8ED2)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::A769E3105BB55487::BEF6D4843175EE8C))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_ITEM_OFFSET))(this, A59E604D1E9B8ED2);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Pen* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Pen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void set_fourthBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_FOURTHBARRELBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_eraser(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_ERASER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_secondBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_SECONDBARRELBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thirdBarrelButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_THIRDBARRELBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_tip()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_TIP_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Pen* get_current()
		{
			return ((::UnityEngine::InputSystem::Pen*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_CURRENT_OFFSET))();
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_fourthBarrelButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_FOURTHBARRELBUTTON_OFFSET))(this);
		}

		::System::Void set_inRange(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_INRANGE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondBarrelButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_SECONDBARRELBUTTON_OFFSET))(this);
		}

		::System::Void set_tip(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_TIP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_twist()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_TWIST_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_inRange()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_INRANGE_OFFSET))(this);
		}

		::System::Void set_twist(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_TWIST_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
