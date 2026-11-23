#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_B714FE7D34EB6AC0_BEA67782FABD419C_OFFSET UNITYSDK_OFFSET(0x29B18B0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_B714FE7D34EB6AC0_E9670D437419B3EE_OFFSET UNITYSDK_OFFSET(0x29B1750)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_B714FE7D34EB6AC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager_B714FE7D34EB6AC0_TypeDefinitionIndex = 15548;

	class MiHoYoSDKWebViewManager_B714FE7D34EB6AC0 : public ::System::Object
	{
	public:
		::System::Boolean BE776DB4D1F26D06; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* F594F3430DE68211; // 0x18
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* A544919C800E2923; // 0x20
		::System::Boolean F5EE4E61D8B9AAFE; // 0x28
		::System::Byte _padding1[0x7];
		::System::Action* BDCB87964C751DB1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_B714FE7D34EB6AC0__CTOR_OFFSET))(this);
		}

		::System::Void E9670D437419B3EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_B714FE7D34EB6AC0_E9670D437419B3EE_OFFSET))(this);
		}

		::System::Void BEA67782FABD419C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_B714FE7D34EB6AC0_BEA67782FABD419C_OFFSET))(this);
		}
	};
}
