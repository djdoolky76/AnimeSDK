#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoLocalSkinAsset; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_B7CA795CD5789A9E_OFFSET UNITYSDK_OFFSET(0x2961950)
#define MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_E81A25767DCB5062_OFFSET UNITYSDK_OFFSET(0x29617E0)
#define MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoLocalSkinLoader_TypeDefinitionIndex = 15481;

	class HoYoLocalSkinLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoLocalSkinAsset* m_PropertyValues; // 0x20

		static ::MiHoYo::SDK::HoYoUI::HoYoLocalSkinAsset* B7CA795CD5789A9E(::UnityEngine::GameObject* A86A90C31A146E9C)
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoLocalSkinAsset*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_B7CA795CD5789A9E_OFFSET))(A86A90C31A146E9C);
		}

		static ::MiHoYo::SDK::HoYoUI::HoYoLocalSkinLoader* E81A25767DCB5062(::UnityEngine::GameObject* A86A90C31A146E9C)
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoLocalSkinLoader*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_E81A25767DCB5062_OFFSET))(A86A90C31A146E9C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER__CTOR_OFFSET))(this);
		}
	};
}
