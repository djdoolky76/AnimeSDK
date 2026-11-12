#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class AntiAddictScNotify; }
namespace System { class Object; }

#define PROTO_ANTIADDICTSCNOTIFY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F299360)
#define PROTO_ANTIADDICTSCNOTIFY___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2993A0)
#define PROTO_ANTIADDICTSCNOTIFY___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F2993B0)

namespace Proto
{
	inline static constexpr unsigned int AntiAddictScNotify___c_TypeDefinitionIndex = 32964;

	class AntiAddictScNotify___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4B4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY___C_CTOR_OFFSET))(this);
		}

		::Proto::AntiAddictScNotify* __cctor_b__33_0()
		{
			return ((::Proto::AntiAddictScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
}
