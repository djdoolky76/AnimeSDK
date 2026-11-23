#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser_ED0B7CF3CE494712; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_F5628F8349D4A8A6_F9EA095AD9705D99_OFFSET UNITYSDK_OFFSET(0x29B1650)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x29B4790)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager_F5628F8349D4A8A6_TypeDefinitionIndex = 15545;

	class MiHoYoSDKWebViewManager_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKWebViewManager_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::MiHoYoSDKWebViewManager_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewManager_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::Browser_ED0B7CF3CE494712** StaticGet_AC91688FD11438C2()
		{
			return (::ZenFulcrum::EmbeddedBrowser::Browser_ED0B7CF3CE494712**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewManager_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F9EA095AD9705D99(::ZenFulcrum::EmbeddedBrowser::Browser* AD0CAFBAFB8B01EA, ::System::Boolean A187B0A4ACA502FF)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_F5628F8349D4A8A6_F9EA095AD9705D99_OFFSET))(this, AD0CAFBAFB8B01EA, A187B0A4ACA502FF);
		}
	};
}
