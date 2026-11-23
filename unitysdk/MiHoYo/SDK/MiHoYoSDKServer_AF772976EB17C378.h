#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_AF772976EB17C378_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define MIHOYO_SDK_MIHOYOSDKSERVER_AF772976EB17C378__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_AF772976EB17C378_TypeDefinitionIndex = 15808;

	class MiHoYoSDKServer_AF772976EB17C378 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_AF772976EB17C378__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 FDEAE68E34FB39B4, ::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_AF772976EB17C378_INVOKE_OFFSET))(this, FDEAE68E34FB39B4, B083BE7841B347C4);
		}
	};
}
