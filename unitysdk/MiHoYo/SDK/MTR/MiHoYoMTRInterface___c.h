#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Threading { class WaitCallback; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F3810)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F3850)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__CHECKURLUSAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1E2F3EF0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__DOMTR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1E2F3860)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface___c_TypeDefinitionIndex = 47716;

	class MiHoYoMTRInterface___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.MTR", "<>c")->GetStaticField(0x1DC60);
		}

		static ::System::Threading::WaitCallback** StaticGet___9__3_0()
		{
			return (::System::Threading::WaitCallback**)UnitySDK::FromName("MiHoYo.SDK.MTR", "<>c")->GetStaticField(0x1DC68);
		}

		static ::System::Threading::WaitCallback** StaticGet___9__5_0()
		{
			return (::System::Threading::WaitCallback**)UnitySDK::FromName("MiHoYo.SDK.MTR", "<>c")->GetStaticField(0x1DC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C_CTOR_OFFSET))(this);
		}

		::System::Void _DoMTR_b__3_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__DOMTR_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _CheckUrlUsage_b__5_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__CHECKURLUSAGE_B__5_0_OFFSET))(this, a1);
		}

	};
}
