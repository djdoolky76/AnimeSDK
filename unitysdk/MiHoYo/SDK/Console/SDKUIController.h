#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/SDKUIController_F429F250D77A27D5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_B9689FA895D94A59_OFFSET UNITYSDK_OFFSET(0x3908730)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x3908A60)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_E935B0B508DB857C_OFFSET UNITYSDK_OFFSET(0x3908D90)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3908A10)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_F4F4B194ED28F8C2_OFFSET UNITYSDK_OFFSET(0x39087F0)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_F5FA821676AF0AFB_OFFSET UNITYSDK_OFFSET(0x3908D50)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIController_TypeDefinitionIndex = 12290;

	class SDKUIController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::Console::SDKUIController** StaticGet_F3D599139FC20B1E()
		{
			return (::MiHoYo::SDK::Console::SDKUIController**)Il2CppClass::FromTypeDefinitionIndex(SDKUIController_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void E935B0B508DB857C(::MiHoYo::SDK::Console::SDKUIController* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Console::SDKUIController*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_E935B0B508DB857C_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void F4F4B194ED28F8C2(::MiHoYo::SDK::Console::SDKUIController_F429F250D77A27D5 A199913F8B1E98E6)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::SDKUIController_F429F250D77A27D5))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_F4F4B194ED28F8C2_OFFSET))(this, A199913F8B1E98E6);
		}

		::UnityEngine::GameObject* B9689FA895D94A59()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_B9689FA895D94A59_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_E02954280801633F_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::SDKUIController* F5FA821676AF0AFB()
		{
			return ((::MiHoYo::SDK::Console::SDKUIController*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_F5FA821676AF0AFB_OFFSET))();
		}
	};
}
