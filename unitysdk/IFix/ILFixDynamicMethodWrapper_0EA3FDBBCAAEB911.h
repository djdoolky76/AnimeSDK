#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/LowLevel/DualSenseHIDInputReport.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/LowLevel/DualSenseHIDInputReportV2.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/DualSenseGamepadPC_DualSenseHIDBluetoothInputReportV2.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/DualSenseGamepadPC_DualSenseHIDMinimalInputReportV2.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/DualSenseGamepadPC_DualSenseHIDUSBInputReportV2.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/DualSenseHIDOutputReport.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/TriggerEffectCommand.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/TriggerEffectParam.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace IFix { class ILFixDynamicMethodWrapper; }
namespace IFix::Core { class VirtualMachine; }

#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F537DB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__CTOR_OFFSET UNITYSDK_OFFSET(0x1F533660)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_0_OFFSET UNITYSDK_OFFSET(0x1F533670)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_10_OFFSET UNITYSDK_OFFSET(0x1F534860)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_11_OFFSET UNITYSDK_OFFSET(0x1F5349F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_12_OFFSET UNITYSDK_OFFSET(0x1F534BD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_13_OFFSET UNITYSDK_OFFSET(0x1F534EB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_14_OFFSET UNITYSDK_OFFSET(0x1F535160)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_15_OFFSET UNITYSDK_OFFSET(0x1F535300)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_16_OFFSET UNITYSDK_OFFSET(0x1F535580)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_17_OFFSET UNITYSDK_OFFSET(0x1F535720)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_18_OFFSET UNITYSDK_OFFSET(0x1F5358B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_19_OFFSET UNITYSDK_OFFSET(0x1F535BC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_1_OFFSET UNITYSDK_OFFSET(0x1F5337B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_20_OFFSET UNITYSDK_OFFSET(0x1F535ED0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_21_OFFSET UNITYSDK_OFFSET(0x1F5360C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_22_OFFSET UNITYSDK_OFFSET(0x1F5362E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_23_OFFSET UNITYSDK_OFFSET(0x1F5365F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_24_OFFSET UNITYSDK_OFFSET(0x1F5368F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_25_OFFSET UNITYSDK_OFFSET(0x1F536C10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_26_OFFSET UNITYSDK_OFFSET(0x1F536F10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_27_OFFSET UNITYSDK_OFFSET(0x1F537240)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_28_OFFSET UNITYSDK_OFFSET(0x1F5374E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_29_OFFSET UNITYSDK_OFFSET(0x1F537780)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_2_OFFSET UNITYSDK_OFFSET(0x1F533920)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_30_OFFSET UNITYSDK_OFFSET(0x1F5378B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_31_OFFSET UNITYSDK_OFFSET(0x1F537AB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_32_OFFSET UNITYSDK_OFFSET(0x1F537C40)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_3_OFFSET UNITYSDK_OFFSET(0x1F533AF0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_4_OFFSET UNITYSDK_OFFSET(0x1F533D10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_5_OFFSET UNITYSDK_OFFSET(0x1F533F00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_6_OFFSET UNITYSDK_OFFSET(0x1F5340F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_7_OFFSET UNITYSDK_OFFSET(0x1F5342D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_8_OFFSET UNITYSDK_OFFSET(0x1F5344D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_9_OFFSET UNITYSDK_OFFSET(0x1F534690)

namespace IFix
{
	inline static constexpr unsigned int ILFixDynamicMethodWrapper_0EA3FDBBCAAEB911_TypeDefinitionIndex = 37752;

	class ILFixDynamicMethodWrapper_0EA3FDBBCAAEB911 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>** StaticGet_wrapperArray()
		{
			return (::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>**)Il2CppClass::FromTypeDefinitionIndex(ILFixDynamicMethodWrapper_0EA3FDBBCAAEB911_TypeDefinitionIndex)->GetStaticField(0x2C2E0);
		}
		::System::Object* anonObj; // 0x10
		::IFix::Core::VirtualMachine* virtualMachine; // 0x18
		::System::Int32 methodId; // 0x20

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__CCTOR_OFFSET))();
		}

		::System::Void _GW_0(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_0_OFFSET))(this, P0);
		}

		::System::Single _GW_1(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_1_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_2(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_2_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_3(::System::Object* P0, ::System::Int32 P1, ::System::Int32 P2, ::System::Int32 P3, ::System::Int32 P4, ::System::Int32 P5, ::System::Int32 P6, ::System::Double P7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_3_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7);
		}

		::System::Object* _GW_4(::System::Object* P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_4_OFFSET))(this, P0);
		}

		::UnityEngine::Color _GW_5(::System::Int32 P0)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_5_OFFSET))(this, P0);
		}

		::UnityEngine::Color _GW_6(::System::Object* P0)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_6_OFFSET))(this, P0);
		}

		::System::Object* _GW_7(::System::Int32 P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_7_OFFSET))(this, P0);
		}

		::System::Void _GW_8(::System::Object* P0, ::UnityEngine::InputSystem::LowLevel::InputEventPtr P1, ::UnityEngine::InputSystem::LowLevel::InputEventPtr P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_8_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_9(::System::Object* P0, ::UnityEngine::InputSystem::LowLevel::InputEventPtr P1, ::UnityEngine::InputSystem::LowLevel::InputEventPtr P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_9_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_10(::System::Object* P0, ::UnityEngine::InputSystem::LowLevel::InputEventPtr P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_10_OFFSET))(this, P0, P1);
		}

		::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport _GW_11()
		{
			return ((::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_11_OFFSET))(this);
		}

		::System::Void _GW_12(::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport& P0, ::System::Single P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_12_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_13(::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport& P0, ::UnityEngine::Color P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport&, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_13_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_14(::System::Object* P0, ::UnityEngine::InputSystem::LowLevel::InputEventPtr P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_14_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_15(::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport& P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_15_OFFSET))(this, P0);
		}

		::System::Void _GW_16(::System::Object* P0, ::UnityEngine::Color P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_16_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_17(::System::Object* P0, ::System::Single P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_17_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_18(::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport& P0, ::UnityEngine::InputSystem::GamepadEx::TriggerEffectCommand P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport&, ::UnityEngine::InputSystem::GamepadEx::TriggerEffectCommand, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_18_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_19(::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport& P0, ::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport&, ::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_19_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_20(::System::Object* P0, ::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_20_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_21(::System::Object* P0, ::System::Object* P1, ::UnityEngine::InputSystem::LowLevel::InputEventPtr P2, ::System::UInt32& P3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_21_OFFSET))(this, P0, P1, P2, P3);
		}

		::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2 _GW_22(::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC_DualSenseHIDBluetoothInputReportV2& P0)
		{
			return ((::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC_DualSenseHIDBluetoothInputReportV2&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_22_OFFSET))(this, P0);
		}

		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport _GW_23(::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC_DualSenseHIDBluetoothInputReportV2& P0)
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC_DualSenseHIDBluetoothInputReportV2&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_23_OFFSET))(this, P0);
		}

		::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2 _GW_24(::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC_DualSenseHIDMinimalInputReportV2& P0)
		{
			return ((::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC_DualSenseHIDMinimalInputReportV2&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_24_OFFSET))(this, P0);
		}

		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport _GW_25(::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC_DualSenseHIDMinimalInputReportV2& P0)
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC_DualSenseHIDMinimalInputReportV2&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_25_OFFSET))(this, P0);
		}

		::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2 _GW_26(::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC_DualSenseHIDUSBInputReportV2& P0)
		{
			return ((::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC_DualSenseHIDUSBInputReportV2&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_26_OFFSET))(this, P0);
		}

		::System::Boolean _GW_27(::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_27_OFFSET))(this, P0);
		}

		::System::Int32 _GW_28(::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2& P0)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::LowLevel::DualSenseHIDInputReportV2&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_28_OFFSET))(this, P0);
		}

		::System::Void _GW_29()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_29_OFFSET))(this);
		}

		::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam _GW_30()
		{
			return ((::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_30_OFFSET))(this);
		}

		::System::Void _GW_31(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_31_OFFSET))(this, P0);
		}

		::System::Void _GW_32(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0EA3FDBBCAAEB911__GW_32_OFFSET))(this, P0);
		}
	};
}
