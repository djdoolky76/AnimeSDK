#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace InControl { class InputDevice; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define INCONTROL_INPUTMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9DDB40)
#define INCONTROL_INPUTMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DDB80)
#define INCONTROL_INPUTMANAGER___C__ATTACHDEVICE_B__92_0_OFFSET UNITYSDK_OFFSET(0x1B9DDB90)

namespace InControl
{
	inline static constexpr unsigned int InputManager___c_TypeDefinitionIndex = 40856;

	class InputManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("InControl", "<>c")->GetStaticField(0x64B90);
		}

		static ::System::Comparison_1<::InControl::InputDevice*>** StaticGet___9__92_0()
		{
			return (::System::Comparison_1<::InControl::InputDevice*>**)UnitySDK::FromName("InControl", "<>c")->GetStaticField(0x64B98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _AttachDevice_b__92_0(::InControl::InputDevice* a1, ::InControl::InputDevice* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::InControl::InputDevice*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER___C__ATTACHDEVICE_B__92_0_OFFSET))(this, a1, a2);
		}

	};
}
