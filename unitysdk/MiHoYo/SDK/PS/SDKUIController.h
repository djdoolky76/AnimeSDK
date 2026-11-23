#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/SDKUIController_F429F250D77A27D5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/E03A5FA2D81DF156.h"

namespace MiHoYo::SDK::PS { class SDKUIDialog; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define MIHOYO_SDK_PS_SDKUICONTROLLER_B9689FA895D94A59_OFFSET UNITYSDK_OFFSET(0x39CAC10)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x39CB970)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_E935B0B508DB857C_OFFSET UNITYSDK_OFFSET(0x39CBC20)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_EAD7CA70D981B7AA_OFFSET UNITYSDK_OFFSET(0x39CB1B0)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x39CB920)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_F4F4B194ED28F8C2_OFFSET UNITYSDK_OFFSET(0x39CACD0)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_F5FA821676AF0AFB_OFFSET UNITYSDK_OFFSET(0x39CBBE0)
#define MIHOYO_SDK_PS_SDKUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int SDKUIController_TypeDefinitionIndex = 12585;

	class SDKUIController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::PS::SDKUIController** StaticGet_F3D599139FC20B1E()
		{
			return (::MiHoYo::SDK::PS::SDKUIController**)Il2CppClass::FromTypeDefinitionIndex(SDKUIController_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void F4F4B194ED28F8C2(::MiHoYo::SDK::PS::SDKUIController_F429F250D77A27D5 A199913F8B1E98E6)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::SDKUIController_F429F250D77A27D5))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_F4F4B194ED28F8C2_OFFSET))(this, A199913F8B1E98E6);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_E02954280801633F_OFFSET))(this);
		}

		static ::System::Void E935B0B508DB857C(::MiHoYo::SDK::PS::SDKUIController* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PS::SDKUIController*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_E935B0B508DB857C_OFFSET))(E937D4885DAA1AE8);
		}

		::UnityEngine::GameObject* B9689FA895D94A59()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_B9689FA895D94A59_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PS::SDKUIController* F5FA821676AF0AFB()
		{
			return ((::MiHoYo::SDK::PS::SDKUIController*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_F5FA821676AF0AFB_OFFSET))();
		}

		::UnityEngine::GameObject* EAD7CA70D981B7AA(::MiHoYo::SDK::PS::SDKUIController_F429F250D77A27D5 A199913F8B1E98E6, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Selectable*>* FF63FAF59D531C28, ::E03A5FA2D81DF156 EAABE0A7E754E7F3, ::MiHoYo::SDK::PS::SDKUIDialog* F9ADA718944F49ED, ::E03A5FA2D81DF156 FDADD0BDB2C12385)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::MiHoYo::SDK::PS::SDKUIController_F429F250D77A27D5, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Selectable*>*, ::E03A5FA2D81DF156, ::MiHoYo::SDK::PS::SDKUIDialog*, ::E03A5FA2D81DF156))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_EAD7CA70D981B7AA_OFFSET))(this, A199913F8B1E98E6, FF63FAF59D531C28, EAABE0A7E754E7F3, F9ADA718944F49ED, FDADD0BDB2C12385);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_F328E4D8818B1E12_OFFSET))(this);
		}
	};
}
