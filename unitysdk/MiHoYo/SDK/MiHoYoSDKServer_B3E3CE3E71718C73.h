#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_B3E3CE3E71718C73_BE4511D9AD2B8679_OFFSET UNITYSDK_OFFSET(0x29FF9B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_B3E3CE3E71718C73_ED3D965305E5616A_OFFSET UNITYSDK_OFFSET(0x29FF830)
#define MIHOYO_SDK_MIHOYOSDKSERVER_B3E3CE3E71718C73__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_B3E3CE3E71718C73_TypeDefinitionIndex = 15814;

	class MiHoYoSDKServer_B3E3CE3E71718C73 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* A544919C800E2923; // 0x10
		::System::String* AF821F194E6AF0BA; // 0x18
		::System::Action_1<::System::Object*>* E04D2BE64FCE9814; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_B3E3CE3E71718C73__CTOR_OFFSET))(this);
		}

		::System::Void ED3D965305E5616A(::System::String* A9B0E744486424C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_B3E3CE3E71718C73_ED3D965305E5616A_OFFSET))(this, A9B0E744486424C1);
		}

		::System::Void BE4511D9AD2B8679()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_B3E3CE3E71718C73_BE4511D9AD2B8679_OFFSET))(this);
		}
	};
}
