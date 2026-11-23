#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_AC76E844C2808B47_B6112B4248A192CB_OFFSET UNITYSDK_OFFSET(0x29FFAC0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_AC76E844C2808B47_FFDED155D2711677_OFFSET UNITYSDK_OFFSET(0x29FFC40)
#define MIHOYO_SDK_MIHOYOSDKSERVER_AC76E844C2808B47__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_AC76E844C2808B47_TypeDefinitionIndex = 15815;

	class MiHoYoSDKServer_AC76E844C2808B47 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* A544919C800E2923; // 0x10
		::System::String* AF821F194E6AF0BA; // 0x18
		::System::Action_1<::System::Object*>* E04D2BE64FCE9814; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_AC76E844C2808B47__CTOR_OFFSET))(this);
		}

		::System::Void B6112B4248A192CB(::System::String* A9B0E744486424C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_AC76E844C2808B47_B6112B4248A192CB_OFFSET))(this, A9B0E744486424C1);
		}

		::System::Void FFDED155D2711677()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_AC76E844C2808B47_FFDED155D2711677_OFFSET))(this);
		}
	};
}
