#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E427A58A65B84FA2;
namespace System { class String; }
namespace TapTap::Sdk { class QRCodeWindow; }

#define TAPTAP_SDK_QRCODEWINDOW_F4173505D463D828_A6B9D79BF8B60ED8_OFFSET UNITYSDK_OFFSET(0x3F0D780)
#define TAPTAP_SDK_QRCODEWINDOW_F4173505D463D828_F0CC723B77F7A2C3_OFFSET UNITYSDK_OFFSET(0x3F0D230)
#define TAPTAP_SDK_QRCODEWINDOW_F4173505D463D828__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int QRCodeWindow_F4173505D463D828_TypeDefinitionIndex = 20906;

	class QRCodeWindow_F4173505D463D828 : public ::System::Object
	{
	public:
		::E427A58A65B84FA2* AD4834887E87082A; // 0x10
		::TapTap::Sdk::QRCodeWindow* A544919C800E2923; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_F4173505D463D828__CTOR_OFFSET))(this);
		}

		::System::Void F0CC723B77F7A2C3(::System::String* E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_F4173505D463D828_F0CC723B77F7A2C3_OFFSET))(this, E82293C0814051A5);
		}

		::System::Void A6B9D79BF8B60ED8(::System::Int32 E22BCD4736CD9DF9, ::System::String* B6018BB9F7294B44)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_F4173505D463D828_A6B9D79BF8B60ED8_OFFSET))(this, E22BCD4736CD9DF9, B6018BB9F7294B44);
		}
	};
}
