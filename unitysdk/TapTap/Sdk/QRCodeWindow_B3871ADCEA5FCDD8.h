#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace TapTap::Sdk { class QRCodeWindow; }

#define TAPTAP_SDK_QRCODEWINDOW_B3871ADCEA5FCDD8_E84B817303779EE6_OFFSET UNITYSDK_OFFSET(0x3F0DEB0)
#define TAPTAP_SDK_QRCODEWINDOW_B3871ADCEA5FCDD8_F4162FE9B817D93F_OFFSET UNITYSDK_OFFSET(0x3F0D830)
#define TAPTAP_SDK_QRCODEWINDOW_B3871ADCEA5FCDD8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int QRCodeWindow_B3871ADCEA5FCDD8_TypeDefinitionIndex = 20907;

	class QRCodeWindow_B3871ADCEA5FCDD8 : public ::System::Object
	{
	public:
		::System::Boolean A6AAE60F27C52D4F; // 0x10
		::System::Boolean A80E938AF46CD51E; // 0x11
		::System::Byte _padding0[0x6];
		::TapTap::Sdk::QRCodeWindow* A544919C800E2923; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_B3871ADCEA5FCDD8__CTOR_OFFSET))(this);
		}

		::System::Void F4162FE9B817D93F(::System::String* E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_B3871ADCEA5FCDD8_F4162FE9B817D93F_OFFSET))(this, E82293C0814051A5);
		}

		::System::Void E84B817303779EE6(::System::Int32 E22BCD4736CD9DF9, ::System::String* B6018BB9F7294B44)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_B3871ADCEA5FCDD8_E84B817303779EE6_OFFSET))(this, E22BCD4736CD9DF9, B6018BB9F7294B44);
		}
	};
}
