#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F9874422644484EC_BA4936FCEAFCB5FD;
namespace MiHoYo::SDK { class MiHoYoSDKServer; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_F852899469E73DDE_BCBE07C36E462FFB_OFFSET UNITYSDK_OFFSET(0x29FF7E0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_F852899469E73DDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_F852899469E73DDE_TypeDefinitionIndex = 15813;

	class MiHoYoSDKServer_F852899469E73DDE : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* A544919C800E2923; // 0x10
		::System::Boolean B75915AECF63B300; // 0x18
		::System::Byte _padding0[0x7];
		::F9874422644484EC_BA4936FCEAFCB5FD* BB256CB098E6DDEC; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_F852899469E73DDE__CTOR_OFFSET))(this);
		}

		::System::Void BCBE07C36E462FFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_F852899469E73DDE_BCBE07C36E462FFB_OFFSET))(this);
		}
	};
}
