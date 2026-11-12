#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class SavePointsInfoNotify; }
namespace System { class Object; }

#define PROTO_SAVEPOINTSINFONOTIFY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2E1030)
#define PROTO_SAVEPOINTSINFONOTIFY___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2E1070)
#define PROTO_SAVEPOINTSINFONOTIFY___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F2E1080)

namespace Proto
{
	inline static constexpr unsigned int SavePointsInfoNotify___c_TypeDefinitionIndex = 34943;

	class SavePointsInfoNotify___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x51F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY___C_CTOR_OFFSET))(this);
		}

		::Proto::SavePointsInfoNotify* __cctor_b__28_0()
		{
			return ((::Proto::SavePointsInfoNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
