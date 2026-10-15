#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::HoYoUI { class HoYoGlobalSkinAsset; }

#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINLOADER_CTOR_OFFSET UNITYSDK_OFFSET(0xAFAD560)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINLOADER_GET_SKINASSET_OFFSET UNITYSDK_OFFSET(0xAFABE90)

namespace MiHoYo::SDK::HoYoUI
{
	class HoYoGlobalSkinLoader : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoUI::HoYoGlobalSkinAsset** StaticGet_s_SkinAsset()
		{
			return (::MiHoYo::SDK::HoYoUI::HoYoGlobalSkinAsset**)UnitySDK::FromName("MiHoYo.SDK.HoYoUI", "HoYoGlobalSkinLoader")->GetStaticField(0x22F20);
		}

		// static const ::System::String* SKIN_JSON_FILE_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINLOADER_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::HoYoUI::HoYoGlobalSkinAsset* get_SkinAsset()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoGlobalSkinAsset*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINLOADER_GET_SKINASSET_OFFSET))();
		}

	};
}
