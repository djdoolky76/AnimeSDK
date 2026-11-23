#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Slider; }

#define MIHOYO_SDK_PS_SDKUIDIALOG_A24C05626AAB7DC9_OFFSET UNITYSDK_OFFSET(0x17D6420)
#define MIHOYO_SDK_PS_SDKUIDIALOG_A3994D95DA0442A5_OFFSET UNITYSDK_OFFSET(0x3948D50)
#define MIHOYO_SDK_PS_SDKUIDIALOG_A39BE99E11FBBBA5_OFFSET UNITYSDK_OFFSET(0x394A000)
#define MIHOYO_SDK_PS_SDKUIDIALOG_A59927D40C4929B4_OFFSET UNITYSDK_OFFSET(0x3948CA0)
#define MIHOYO_SDK_PS_SDKUIDIALOG_AFAAE06E1EAE4AAB_OFFSET UNITYSDK_OFFSET(0x3949680)
#define MIHOYO_SDK_PS_SDKUIDIALOG_B2A2C97B3EF96FF0_OFFSET UNITYSDK_OFFSET(0x17D6270)
#define MIHOYO_SDK_PS_SDKUIDIALOG_B65C08B52BBB22FD_OFFSET UNITYSDK_OFFSET(0x3949D10)
#define MIHOYO_SDK_PS_SDKUIDIALOG_BEE694EBFD511E20_OFFSET UNITYSDK_OFFSET(0x39490B0)
#define MIHOYO_SDK_PS_SDKUIDIALOG_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x3949F20)
#define MIHOYO_SDK_PS_SDKUIDIALOG_E4B634BA7DED5303_OFFSET UNITYSDK_OFFSET(0x3949C60)
#define MIHOYO_SDK_PS_SDKUIDIALOG_EAA1DED262B2768A_OFFSET UNITYSDK_OFFSET(0x3949FF0)
#define MIHOYO_SDK_PS_SDKUIDIALOG_EADB3EE1DC4A3D52_OFFSET UNITYSDK_OFFSET(0x3949520)
#define MIHOYO_SDK_PS_SDKUIDIALOG_F033A6075B52155D_OFFSET UNITYSDK_OFFSET(0x39492F0)
#define MIHOYO_SDK_PS_SDKUIDIALOG_F03BD73E254C785F_OFFSET UNITYSDK_OFFSET(0x39493E0)
#define MIHOYO_SDK_PS_SDKUIDIALOG_FA8D56D8B193DBF4_OFFSET UNITYSDK_OFFSET(0x3948F50)
#define MIHOYO_SDK_PS_SDKUIDIALOG_FDF18A197DF09A47_OFFSET UNITYSDK_OFFSET(0x3949000)
#define MIHOYO_SDK_PS_SDKUIDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x3949FE0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int SDKUIDialog_TypeDefinitionIndex = 12434;

	class SDKUIDialog : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean B7113AE778432967; // 0x20
		::System::Byte _padding0[0x7];
		::System::Action* OnCancel; // 0x28
		::System::Action* OnFire; // 0x30
		::System::Action_1<::UnityEngine::GameObject*>* OnHighlightedChanged; // 0x38
		::UnityEngine::GameObject* B9CABC9CA86CC7A0; // 0x40
		::UnityEngine::UI::InputField* A725A5081C3FBBE7; // 0x48
		::UnityEngine::UI::Slider* E194A0B1C15D6565; // 0x50
		::System::Boolean E63A9392A206E022; // 0x58
		::System::Boolean F752791FFF9DE405; // 0x59
		::System::Byte _padding1[0x2];
		::UnityEngine::E46B881AA2636190 A5F2693CFEDE80DD; // 0x5C
		::UnityEngine::E46B881AA2636190 A8728A4C6F639121; // 0x6C

		::UnityEngine::GameObject* EAA1DED262B2768A()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_EAA1DED262B2768A_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_E02954280801633F_OFFSET))(this);
		}

		static ::System::Void F03BD73E254C785F(::System::String* E97E8D008427A296)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_F03BD73E254C785F_OFFSET))(E97E8D008427A296);
		}

		::System::Boolean A59927D40C4929B4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_A59927D40C4929B4_OFFSET))(this);
		}

		::System::Void BEE694EBFD511E20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_BEE694EBFD511E20_OFFSET))(this);
		}

		::System::Boolean FA8D56D8B193DBF4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_FA8D56D8B193DBF4_OFFSET))(this);
		}

		::System::Boolean A3994D95DA0442A5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_A3994D95DA0442A5_OFFSET))(this);
		}

		::System::Boolean B65C08B52BBB22FD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_B65C08B52BBB22FD_OFFSET))(this);
		}

		::System::Void AFAAE06E1EAE4AAB(::UnityEngine::GameObject* E976647B1B3B95DA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_AFAAE06E1EAE4AAB_OFFSET))(this, E976647B1B3B95DA);
		}

		::System::Boolean FDF18A197DF09A47()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_FDF18A197DF09A47_OFFSET))(this);
		}

		::System::Void EADB3EE1DC4A3D52()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_EADB3EE1DC4A3D52_OFFSET))(this);
		}

		::System::Void A24C05626AAB7DC9(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_A24C05626AAB7DC9_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void F033A6075B52155D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_F033A6075B52155D_OFFSET))();
		}

		::System::Boolean E4B634BA7DED5303()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_E4B634BA7DED5303_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG__CTOR_OFFSET))(this);
		}

		::System::Boolean B2A2C97B3EF96FF0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_B2A2C97B3EF96FF0_OFFSET))(this);
		}

		::System::Void A39BE99E11FBBBA5(::UnityEngine::GameObject* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_A39BE99E11FBBBA5_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
